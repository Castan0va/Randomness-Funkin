function onCreate()
{
    var white:FlxSprite = new FlxSprite().makeGraphic(1280*4, 720*4, 0xFFFFFFFF);
    white.scrollFactor.set();
    white.screenCenter();
    game.insert(0, white);
    game.modchartSprites.set('whitebg', white);
}
