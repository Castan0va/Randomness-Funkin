package states;

import flixel.FlxObject;
import flixel.addons.transition.FlxTransitionableState;
import flixel.effects.FlxFlicker;
import lime.app.Application;
import states.editors.MasterEditorMenu;
import options.OptionsState;

class MainMenuState extends MusicBeatState
{
	public static var psychEngineVersion:String = '0.7.3'; // This is also used for Discord RPC
	public static var curSelected:Int = 0;
	var randImage:FlxSprite;
	var rareblud:FlxSprite;
	var logo:FlxSprite;
	var topborder:FlxSprite;
	var bottomborder:FlxSprite;
	var underlay:FlxSprite;
	var checker:FlxSprite;
	var specialcheck:Bool = false;

	var menuItems:FlxTypedGroup<FlxSprite>;

	var optionShit:Array<String> = [
		'story_mode',
		'freeplay',
		'options',
		'gallery',
		'credits'
	];

	var magenta:FlxSprite;
	var camFollow:FlxObject;

	override function create()
	{

		openfl.Lib.application.window.title = 'Randomness Funkin - Main Menu';

		FlxG.mouse.visible = true;

		#if MODS_ALLOWED
		Mods.pushGlobalMods();
		#end
		Mods.loadTopMod();

		#if DISCORD_ALLOWED
		// Updating Discord Rich Presence
		DiscordClient.changePresence("In the Menus", null);
		#end

		transIn = FlxTransitionableState.defaultTransIn;
		transOut = FlxTransitionableState.defaultTransOut;

		persistentUpdate = persistentDraw = true;
		final bgList = ['bg1', 'bg2', 'bg3', 'bg4'];
		var yScroll:Float = Math.max(0.25 - (0.05 * (optionShit.length - 4)), 0.1);
		var bg:FlxSprite = new FlxSprite(-80).loadGraphic(Paths.image(bgList[FlxG.random.int(0, bgList.length-1)]));
		bg.antialiasing = ClientPrefs.data.antialiasing;
		bg.scrollFactor.set(0, yScroll);
		bg.setGraphicSize((1280 * 1.175), (760 * 1.175));
		bg.updateHitbox();
		bg.screenCenter();
		add(bg);

		var underlay:FlxSprite = new FlxSprite(-640,0).loadGraphic(Paths.image('underlaythingy'));
		underlay.antialiasing = ClientPrefs.data.antialiasing;
		underlay.alpha = 0.32;
		underlay.setGraphicSize((1280 * 1.175), (760 * 1.175));
		underlay.scrollFactor.set(0, 0);

	
		var checker:FlxSprite = new FlxSprite(0,0).loadGraphic(Paths.image('underlaything2'));
		checker.antialiasing = ClientPrefs.data.antialiasing;
		checker.alpha = 0.2;
		checker.setGraphicSize((1280 * 1.175), (720 * 1.175));
		checker.scrollFactor.set(0, 0);
		add(checker);

		FlxTween.tween(checker, { x: -49.35, y: -49.35}, 1, { type: FlxTween.LOOPING, ease: FlxEase.linear, startDelay: 0, loopDelay: 0 });

		add(underlay);

		var logo:FlxSprite = new FlxSprite(0,0).loadGraphic(Paths.image('logomenu'));
		logo.antialiasing = ClientPrefs.data.antialiasing;
		logo.scrollFactor.set(0, 0);
		logo.scale.set(0.5, 0.5);
		logo.setPosition(80,-380);
		logo.screenCenter(X);

		final imageList = ['menuchar1', 'menuchar2', 'menuchar3', 'menuchar4', 'menuchar5', 'menuchar6', 'menuchar7'];
		randImage = new FlxSprite(50, 1000, Paths.image(imageList[FlxG.random.int(0, imageList.length-1)]));
		randImage.antialiasing = ClientPrefs.data.antialiasing;
		randImage.scrollFactor.set(0, 0);
		add(randImage);
		add(logo);

		rareblud = new FlxSprite(700, 1000, Paths.image('menucharRARE'));
		rareblud.antialiasing = ClientPrefs.data.antialiasing;
		rareblud.scrollFactor.set(0, 0);

		//change the 2 into a 1500 before finalizing
		if (Math.random() * 1500 < 1) {
			randImage.visible = false;
			add(rareblud);
			FlxTween.tween(rareblud, { x: 700, y: 160 }, 1.2, { type: FlxTween.ONESHOT, ease: FlxEase.quadOut, startDelay: 0.2, loopDelay: 0 });
		}

		camFollow = new FlxObject(0, 0, 1, 1);
		add(camFollow);

		magenta = new FlxSprite(-80).loadGraphic(Paths.image('menuDesat'));
		magenta.antialiasing = ClientPrefs.data.antialiasing;
		magenta.scrollFactor.set(0, yScroll);
		magenta.setGraphicSize(Std.int(magenta.width * 1.175));
		magenta.updateHitbox();
		magenta.visible = false;
		magenta.color = 0xFFfd719b;
		add(magenta);

		var bottomborder:FlxSprite = new FlxSprite(0,0).loadGraphic(Paths.image('menuborderbottom'));
		bottomborder.antialiasing = ClientPrefs.data.antialiasing;
		bottomborder.scrollFactor.set(0, 0);
		add(bottomborder);

		menuItems = new FlxTypedGroup<FlxSprite>();
		add(menuItems);

		for (i in 0...optionShit.length)
		{
			var offset:Float = 108 - (Math.max(optionShit.length, 4) + 0) * 80;
			var menuItem:FlxSprite = new FlxSprite(-80, (i * 140) + offset);
			menuItem.antialiasing = ClientPrefs.data.antialiasing;
			menuItem.frames = Paths.getSparrowAtlas('mainmenu/menu_' + optionShit[i]);
			menuItem.animation.addByPrefix('idle', optionShit[i] + " basic", 24);
			menuItem.animation.addByPrefix('selected', optionShit[i] + " white", 24);
			menuItem.animation.play('idle');
			menuItems.add(menuItem);
			var scr:Float = (optionShit.length - 4) * 0.135;
			if (optionShit.length < 6)
				scr = 0;
			menuItem.scrollFactor.set(0, scr);
			menuItem.updateHitbox();
			menuItem.scale.set(0.45, 0.45);
		}

		var topborder:FlxSprite = new FlxSprite(0,0).loadGraphic(Paths.image('menubordertop'));
		topborder.antialiasing = ClientPrefs.data.antialiasing;
		topborder.scrollFactor.set(0, 0);
		add(topborder);

		var psychVer:FlxText = new FlxText(12, FlxG.height - 44, 0, "Psych Engine v" + psychEngineVersion, 12);
		psychVer.scrollFactor.set();
		psychVer.setFormat("VCR OSD Mono", 16, FlxColor.WHITE, LEFT, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
		add(psychVer);
		var fnfVer:FlxText = new FlxText(12, FlxG.height - 24, 0, "Friday Night Funkin' v" + Application.current.meta.get('version'), 12);
		fnfVer.scrollFactor.set();
		fnfVer.setFormat("VCR OSD Mono", 16, FlxColor.WHITE, LEFT, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
		add(fnfVer);
		changeItem();

		#if ACHIEVEMENTS_ALLOWED
		// Unlocks "Freaky on a Friday Night" achievement if it's a Friday and between 18:00 PM and 23:59 PM
		var leDate = Date.now();
		if (leDate.getDay() == 5 && leDate.getHours() >= 18)
			Achievements.unlock('friday_night_play');

		#if MODS_ALLOWED
		Achievements.reloadList();
		#end
		#end

		super.create();

		FlxG.camera.follow(camFollow, null, 9);

		menuItems.members[0].setPosition(-730, -250);
		menuItems.members[1].setPosition(-700, -95);
		menuItems.members[2].setPosition(-700, 30);
		menuItems.members[3].setPosition(-700, 155);
		menuItems.members[4].setPosition(-707, 315);

		menuItems.members[4].scale.set(0.4, 0.4);

		FlxTween.tween(randImage, { x: 50, y: 0 }, 1.2, { type: FlxTween.ONESHOT, ease: FlxEase.quadOut, startDelay: 0.2, loopDelay: 0 });
		FlxTween.tween(logo, { x: 190, y: -170 }, 1, { type: FlxTween.ONESHOT, ease: FlxEase.quadOut, startDelay: 0.2, loopDelay: 0 });
		FlxTween.tween(logo, { x: 190, y: -190 }, 2, { type: FlxTween.PINGPONG, ease: FlxEase.quadInOut, startDelay: 1.2, loopDelay: 0 });
		FlxTween.tween(underlay, { x: 0, y: 0 }, 1.5, { type: FlxTween.ONESHOT, ease: FlxEase.quadOut, startDelay: 0.6, loopDelay: 0 });

		FlxTween.tween(menuItems.members[0], { x: -110, y: -250 }, 0.8, { type: FlxTween.ONESHOT, ease: FlxEase.backOut, startDelay: 1, loopDelay: 0 });
		FlxTween.tween(menuItems.members[1], { x: -80, y: -95 }, 0.8, { type: FlxTween.ONESHOT, ease: FlxEase.backOut, startDelay: 1.2, loopDelay: 0 });
		FlxTween.tween(menuItems.members[2], { x: -80, y: 30 }, 0.8, { type: FlxTween.ONESHOT, ease: FlxEase.backOut, startDelay: 1.4, loopDelay: 0 });
		FlxTween.tween(menuItems.members[3], { x: -80, y: 155 }, 0.8, { type: FlxTween.ONESHOT, ease: FlxEase.backOut, startDelay: 1.6, loopDelay: 0 });
		FlxTween.tween(menuItems.members[4], { x: -87, y: 315 }, 0.8, { type: FlxTween.ONESHOT, ease: FlxEase.backOut, startDelay: 1.8, loopDelay: 0 });

	}

	var selectedSomethin:Bool = false;

	override function update(elapsed:Float)
	{
		menuItems.members[0].updateHitbox();
		menuItems.members[1].updateHitbox();
		menuItems.members[2].updateHitbox();
		menuItems.members[3].updateHitbox();
		menuItems.members[4].updateHitbox();

		if (FlxG.mouse.overlaps(rareblud) && FlxG.mouse.justPressed)
			{
				PlayState.SONG = backend.Song.loadFromJson('dunner', 'dunner'); 
				LoadingState.loadAndSwitchState(new PlayState());
			}

		if (FlxG.sound.music.volume < 0.8)
		{
			FlxG.sound.music.volume += 0.5 * elapsed;
			if (FreeplayState.vocals != null)
				FreeplayState.vocals.volume += 0.5 * elapsed;
		}

		if (!selectedSomethin)
		{
			if (controls.UI_UP_P)
				changeItem(-1);

			if (controls.UI_DOWN_P)
				changeItem(1);

			if (controls.BACK)
			{
				selectedSomethin = true;
				FlxG.sound.play(Paths.sound('cancelMenu'));
				MusicBeatState.switchState(new TitleState());
			}

			if (controls.ACCEPT)
			{
				FlxG.sound.play(Paths.sound('confirmMenu'));
				if (optionShit[curSelected] == 'donate')
				{
					CoolUtil.browserLoad('https://ninja-muffin24.itch.io/funkin');
				}
				else
				{
					selectedSomethin = true;

					if (ClientPrefs.data.flashing)
						FlxFlicker.flicker(magenta, 1.1, 0.15, false);

					FlxFlicker.flicker(menuItems.members[curSelected], 1, 0.06, false, false, function(flick:FlxFlicker)
					{
						switch (optionShit[curSelected])
						{
							case 'story_mode':
								MusicBeatState.switchState(new StoryMenuState());
							case 'freeplay':
								MusicBeatState.switchState(new FreeplayState());

							#if MODS_ALLOWED
							case 'mods':
								MusicBeatState.switchState(new ModsMenuState());
							#end

							#if ACHIEVEMENTS_ALLOWED
							case 'awards':
								MusicBeatState.switchState(new AchievementsMenuState());
							#end

							case 'credits':
								MusicBeatState.switchState(new CreditsState());
							case 'gallery':
								MusicBeatState.switchState(new GalleryState());
							case 'options':
								MusicBeatState.switchState(new OptionsState());
								OptionsState.onPlayState = false;
								if (PlayState.SONG != null)
								{
									PlayState.SONG.arrowSkin = null;
									PlayState.SONG.splashSkin = null;
									PlayState.stageUI = 'normal';
								}
						}
					});

					for (i in 0...menuItems.members.length)
					{
						if (i == curSelected)
							continue;
						FlxTween.tween(menuItems.members[i], {alpha: 0}, 0.4, {
							ease: FlxEase.quadOut,
							onComplete: function(twn:FlxTween)
							{
								menuItems.members[i].kill();
							}
						});
					}
				}
			}
			#if desktop
			if (controls.justPressed('debug_1'))
			{
				selectedSomethin = true;
				MusicBeatState.switchState(new MasterEditorMenu());
			}
			#end
		}

		super.update(elapsed);
	}

	function changeItem(huh:Int = 0)
	{
		FlxG.sound.play(Paths.sound('scrollMenu'));
		menuItems.members[curSelected].animation.play('idle');
		menuItems.members[curSelected].updateHitbox();

		curSelected += huh;

		if (curSelected >= menuItems.length)
			curSelected = 0;
		if (curSelected < 0)
			curSelected = menuItems.length - 1;

		menuItems.members[curSelected].animation.play('selected');
		menuItems.members[curSelected].centerOffsets();

		camFollow.setPosition(menuItems.members[curSelected].getGraphicMidpoint().x,
			menuItems.members[curSelected].getGraphicMidpoint().y - (menuItems.length > 4 ? menuItems.length * 8 : 0));
	}
}
