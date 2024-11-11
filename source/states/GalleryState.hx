package states;

import objects.AttachedSprite;

class GalleryState extends MusicBeatState
{
	var curSelected:Int = -1;

	private var grpOptions:FlxTypedGroup<Alphabet>;
	private var iconArray:Array<AttachedSprite> = [];
	private var creditsStuff:Array<Array<String>> = [];

	var bg:FlxSprite;
	var descText:FlxText;
	var intendedColor:FlxColor;
	var colorTween:FlxTween;
	var descBox:AttachedSprite;

	var offsetThing:Float = -75;

	override function create()
	{
		openfl.Lib.application.window.title = 'Randomness Funkin - Gallery';

		#if DISCORD_ALLOWED
		// Updating Discord Rich Presence
		DiscordClient.changePresence("In the Menus", null);
		#end

		persistentUpdate = true;
		bg = new FlxSprite().loadGraphic(Paths.image('bggallery'));
		bg.antialiasing = ClientPrefs.data.antialiasing;
		add(bg);
		bg.screenCenter();

		var checker:FlxSprite = new FlxSprite(0,0).loadGraphic(Paths.image('underlaything2'));
		checker.antialiasing = ClientPrefs.data.antialiasing;
		checker.alpha = 0.2;
		checker.setGraphicSize((1280 * 1.175), (720 * 1.175));
		checker.scrollFactor.set(0, 0);
		add(checker);

		FlxTween.tween(checker, { x: -49.35, y: -49.35}, 1, { type: FlxTween.LOOPING, ease: FlxEase.linear, startDelay: 0, loopDelay: 0 });
		
		grpOptions = new FlxTypedGroup<Alphabet>();
		add(grpOptions);

		#if MODS_ALLOWED
		for (mod in Mods.parseList().enabled) pushModCreditsToList(mod);
		#end

		var defaultList:Array<Array<String>> = [ //Name - Icon name - Description - Link - BG Color
			['Cool Pictures lol'],
			['',		'coolPicture',		'Test Picture lolololol',					 '',		'444444'],
			['',		'uncoolPicture',		'Test Picture the sequel',					 '',		'444444'],
			['',		'equallyCoolandUncoolPicture',		'Test Picture but its overused',					 '',		'444444'],
		];
		
		for(i in defaultList) {
			creditsStuff.push(i);
		}
	
		for (i in 0...creditsStuff.length)
		{
			var isSelectable:Bool = !unselectableCheck(i);
			var optionText:Alphabet = new Alphabet(FlxG.width / 2, 300, creditsStuff[i][0], !isSelectable);
			optionText.isMenuItem = true;
			optionText.targetY = i;
			optionText.alpha = 0;
			optionText.changeX = false;
			optionText.snapToPosition();
			grpOptions.add(optionText);

			if(isSelectable) {
				if(creditsStuff[i][5] != null)
				{
					Mods.currentModDirectory = creditsStuff[i][5];
				}

				var str:String = 'gallery/missing_picture';
				if(creditsStuff[i][1] != null && creditsStuff[i][1].length > 0)
				{
					var fileName = 'gallery/' + creditsStuff[i][1];
					if (Paths.fileExists('images/$fileName.png', IMAGE)) str = fileName;
					else if (Paths.fileExists('images/$fileName-pixel.png', IMAGE)) str = fileName + '-pixel';
				}

				var icon:AttachedSprite = new AttachedSprite(str);
				if(str.endsWith('-pixel')) icon.antialiasing = false;
				icon.xAdd = optionText.width + 10;
				icon.sprTracker = optionText;
	
				// using a FlxGroup is too much fuss!
				iconArray.push(icon);
				add(icon);
				Mods.currentModDirectory = '';

				if(curSelected == -1) curSelected = i;
			}
			else optionText.alignment = CENTERED;
		}

		var overlay:FlxSprite = new FlxSprite(0,0).loadGraphic(Paths.image('galleryborder'));
		overlay.antialiasing = ClientPrefs.data.antialiasing;
		overlay.scrollFactor.set(0, 0);
		overlay.setGraphicSize(1280, 720);
		add(overlay);

		var gallery:FlxSprite = new FlxSprite(0,0).loadGraphic(Paths.image('logallery'));
		gallery.antialiasing = ClientPrefs.data.antialiasing;
		gallery.scrollFactor.set(0, 0);
		gallery.scale.set(0.5, 0.5);
		gallery.setPosition(10, 0);
		
		FlxTween.tween(gallery, { x: 500, y: -500 }, 2, { type: FlxTween.PINGPONG, ease: FlxEase.quadInOut, startDelay: 0, loopDelay: 0 });

		var arrowleft:FlxSprite = new FlxSprite(0,0).loadGraphic(Paths.image('arrowleft'));
		arrowleft.antialiasing = ClientPrefs.data.antialiasing;
		arrowleft.scrollFactor.set(0, 0);
		arrowleft.setGraphicSize(1280, 720);
		add(arrowleft);

		var arrowright:FlxSprite = new FlxSprite(0,0).loadGraphic(Paths.image('arrowright'));
		arrowright.antialiasing = ClientPrefs.data.antialiasing;
		arrowright.scrollFactor.set(0, 0);
		arrowright.setGraphicSize(1280, 720);
		add(arrowright);
		
		descBox = new AttachedSprite();
		descBox.makeGraphic(1, 1, FlxColor.BLACK);
		descBox.xAdd = -10;
		descBox.yAdd = -10;
		descBox.alphaMult = 0.6;
		descBox.alpha = 0.6;
		add(descBox);

		descText = new FlxText(50, FlxG.height + offsetThing - 25, 1180, "", 32);
		descText.setFormat(Paths.font("vcr.ttf"), 32, FlxColor.WHITE, CENTER/*, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK*/);
		descText.scrollFactor.set();
		//descText.borderSize = 2.4;
		descBox.sprTracker = descText;
		add(descText);

		changeSelection();
		super.create();
	}

	var quitting:Bool = false;
	var holdTime:Float = 0;
	override function update(elapsed:Float)
	{
		if (FlxG.sound.music.volume < 0.7)
		{
			FlxG.sound.music.volume += 0.5 * FlxG.elapsed;
		}

		if(!quitting)
		{
			if(creditsStuff.length > 1)
			{
				var shiftMult:Int = 1;
				if(FlxG.keys.pressed.SHIFT) shiftMult = 3;

				var upP = controls.UI_LEFT_P;
				var downP = controls.UI_RIGHT_P;

				if (upP)
				{
					changeSelection(-shiftMult);
					holdTime = 0;
				}
				if (downP)
				{
					changeSelection(shiftMult);
					holdTime = 0;
				}

				if(controls.UI_DOWN || controls.UI_UP)
				{
					var checkLastHold:Int = Math.floor((holdTime - 0.5) * 10);
					holdTime += elapsed;
					var checkNewHold:Int = Math.floor((holdTime - 0.5) * 10);

					if(holdTime > 0.5 && checkNewHold - checkLastHold > 0)
					{
						changeSelection((checkNewHold - checkLastHold) * (controls.UI_UP ? -shiftMult : shiftMult));
					}
				}
			}

			if(controls.ACCEPT && (creditsStuff[curSelected][3] == null || creditsStuff[curSelected][3].length > 4)) {
				CoolUtil.browserLoad(creditsStuff[curSelected][3]);
			}
			if (controls.BACK)
			{
				if(colorTween != null) {
					colorTween.cancel();
				}
				FlxG.sound.play(Paths.sound('cancelMenu'));
				MusicBeatState.switchState(new MainMenuState());
				quitting = true;
			}
		}
		
		for (item in grpOptions.members)
		{
			if(!item.bold)
			{
				var lerpVal:Float = Math.exp(-elapsed * 12);
				if(item.targetY == 0)
				{
					var lastX:Float = item.x;
					var lastY:Float = item.y;
					item.screenCenter(X);
					item.screenCenter(Y);
					item.x = FlxMath.lerp(0, lastX, lerpVal);
					item.y = FlxMath.lerp(-20, lastY, lerpVal);
				}
				else
				{
					item.screenCenter(Y);
					item.x = 0;
					item.y = FlxMath.lerp(-20, -20, lerpVal);
				}
			}
		}
		super.update(elapsed);
	}

	var moveTween:FlxTween = null;
	function changeSelection(change:Int = 0)
	{
		FlxG.sound.play(Paths.sound('scrollMenu'), 0.4);
		do {
			curSelected += change;
			if (curSelected < 0)
				curSelected = creditsStuff.length - 1;
			if (curSelected >= creditsStuff.length)
				curSelected = 0;
		} while(unselectableCheck(curSelected));

		var newColor:FlxColor = CoolUtil.colorFromString(creditsStuff[curSelected][4]);
		//trace('The BG color is: $newColor');

		var bullShit:Int = 0;

		for (item in grpOptions.members)
		{
			item.targetY = bullShit - curSelected;
			bullShit++;

			if(!unselectableCheck(bullShit-1)) {
				item.alpha = 0;
				if (item.targetY == 0) {
					item.alpha = 1;
				}
			}
		}

		descText.text = creditsStuff[curSelected][2];
		descText.y = FlxG.height - descText.height + offsetThing + 20;

		descBox.setGraphicSize(0, 0);
		descBox.updateHitbox();
	}

	#if MODS_ALLOWED
	function pushModCreditsToList(folder:String)
	{
		var creditsFile:String = null;
		if(folder != null && folder.trim().length > 0) creditsFile = Paths.mods(folder + '/data/credits.txt');
		else creditsFile = Paths.mods('data/credits.txt');

		if (FileSystem.exists(creditsFile))
		{
			var firstarray:Array<String> = File.getContent(creditsFile).split('\n');
			for(i in firstarray)
			{
				var arr:Array<String> = i.replace('\\n', '\n').split("::");
				if(arr.length >= 5) arr.push(folder);
				creditsStuff.push(arr);
			}
			creditsStuff.push(['']);
		}
	}
	#end

	private function unselectableCheck(num:Int):Bool {
		return creditsStuff[num].length <= 1;
	}
}
