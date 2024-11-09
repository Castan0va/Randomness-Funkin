// Generated by Haxe 4.3.2
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_backend_BaseStage
#include <backend/BaseStage.h>
#endif
#ifndef INCLUDED_backend_ClientPrefs
#include <backend/ClientPrefs.h>
#endif
#ifndef INCLUDED_backend_MusicBeatState
#include <backend/MusicBeatState.h>
#endif
#ifndef INCLUDED_backend_MusicBeatSubstate
#include <backend/MusicBeatSubstate.h>
#endif
#ifndef INCLUDED_backend_Paths
#include <backend/Paths.h>
#endif
#ifndef INCLUDED_backend_SaveVariables
#include <backend/SaveVariables.h>
#endif
#ifndef INCLUDED_cutscenes_DialogueBox
#include <cutscenes/DialogueBox.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedContainer
#include <flixel/group/FlxTypedContainer.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_sound_FlxSound
#include <flixel/sound/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_sound_FlxSoundGroup
#include <flixel/sound/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_NumTween
#include <flixel/tweens/misc/NumTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimerManager
#include <flixel/util/FlxTimerManager.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_objects_BGSprite
#include <objects/BGSprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif
#ifndef INCLUDED_openfl_media_SoundChannel
#include <openfl/media/SoundChannel.h>
#endif
#ifndef INCLUDED_states_PlayState
#include <states/PlayState.h>
#endif
#ifndef INCLUDED_states_stages_School
#include <states/stages/School.h>
#endif
#ifndef INCLUDED_states_stages_objects_BackgroundGirls
#include <states/stages/objects/BackgroundGirls.h>
#endif
#ifndef INCLUDED_substates_GameOverSubstate
#include <substates/GameOverSubstate.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_628fdf92be9f29ca_9_new,"states.stages.School","new",0xc3fbf933,"states.stages.School.new","states/stages/School.hx",9,0xfaa6b77d)
HX_LOCAL_STACK_FRAME(_hx_pos_628fdf92be9f29ca_13_create,"states.stages.School","create",0x6d684409,"states.stages.School.create","states/stages/School.hx",13,0xfaa6b77d)
static const int _hx_array_data_413ce3c1_3[] = {
	(int)0,(int)1,(int)2,(int)3,(int)4,(int)5,(int)6,(int)7,(int)8,(int)9,(int)10,(int)11,(int)12,(int)13,(int)14,(int)15,(int)16,(int)17,(int)18,
};
static const ::String _hx_array_data_413ce3c1_4[] = {
	HX_("PETALS ALL",0a,57,91,88),
};
HX_LOCAL_STACK_FRAME(_hx_pos_628fdf92be9f29ca_94_beatHit,"states.stages.School","beatHit",0xb06d78d0,"states.stages.School.beatHit","states/stages/School.hx",94,0xfaa6b77d)
HX_LOCAL_STACK_FRAME(_hx_pos_628fdf92be9f29ca_100_eventCalled,"states.stages.School","eventCalled",0x4b3f540a,"states.stages.School.eventCalled","states/stages/School.hx",100,0xfaa6b77d)
HX_LOCAL_STACK_FRAME(_hx_pos_628fdf92be9f29ca_109_initDoof,"states.stages.School","initDoof",0xe6391adf,"states.stages.School.initDoof","states/stages/School.hx",109,0xfaa6b77d)
HX_LOCAL_STACK_FRAME(_hx_pos_628fdf92be9f29ca_137_schoolIntro,"states.stages.School","schoolIntro",0x885a112b,"states.stages.School.schoolIntro","states/stages/School.hx",137,0xfaa6b77d)
HX_LOCAL_STACK_FRAME(_hx_pos_628fdf92be9f29ca_130_schoolIntro,"states.stages.School","schoolIntro",0x885a112b,"states.stages.School.schoolIntro","states/stages/School.hx",130,0xfaa6b77d)
namespace states{
namespace stages{

void School_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_628fdf92be9f29ca_9_new)
HXLINE( 107)		this->doof = null();
HXLINE(   9)		super::__construct();
            	}

Dynamic School_obj::__CreateEmpty() { return new School_obj; }

void *School_obj::_hx_vtable = 0;

Dynamic School_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< School_obj > _hx_result = new School_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool School_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x230cab9d) {
		if (inClassId<=(int)0x1e7b376f) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x1e7b376f;
		} else {
			return inClassId==(int)0x230cab9d;
		}
	} else {
		return inClassId==(int)0x7ccf8994;
	}
}

void School_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_628fdf92be9f29ca_13_create)
HXLINE(  14)		 ::Dynamic _song = ::states::PlayState_obj::SONG;
HXLINE(  15)		bool _hx_tmp;
HXDLIN(  15)		if (::hx::IsNotNull( _song->__Field(HX_("gameOverSound",89,f8,70,3c),::hx::paccDynamic) )) {
HXLINE(  15)			_hx_tmp = (::StringTools_obj::trim(( (::String)(_song->__Field(HX_("gameOverSound",89,f8,70,3c),::hx::paccDynamic)) )).length < 1);
            		}
            		else {
HXLINE(  15)			_hx_tmp = true;
            		}
HXDLIN(  15)		if (_hx_tmp) {
HXLINE(  15)			::substates::GameOverSubstate_obj::deathSoundName = HX_("fnf_loss_sfx-pixel",23,e5,94,32);
            		}
HXLINE(  16)		bool _hx_tmp1;
HXDLIN(  16)		if (::hx::IsNotNull( _song->__Field(HX_("gameOverLoop",ea,8f,ff,6a),::hx::paccDynamic) )) {
HXLINE(  16)			_hx_tmp1 = (::StringTools_obj::trim(( (::String)(_song->__Field(HX_("gameOverLoop",ea,8f,ff,6a),::hx::paccDynamic)) )).length < 1);
            		}
            		else {
HXLINE(  16)			_hx_tmp1 = true;
            		}
HXDLIN(  16)		if (_hx_tmp1) {
HXLINE(  16)			::substates::GameOverSubstate_obj::loopSoundName = HX_("gameOver-pixel",1f,66,58,00);
            		}
HXLINE(  17)		bool _hx_tmp2;
HXDLIN(  17)		if (::hx::IsNotNull( _song->__Field(HX_("gameOverEnd",15,2d,a9,8d),::hx::paccDynamic) )) {
HXLINE(  17)			_hx_tmp2 = (::StringTools_obj::trim(( (::String)(_song->__Field(HX_("gameOverEnd",15,2d,a9,8d),::hx::paccDynamic)) )).length < 1);
            		}
            		else {
HXLINE(  17)			_hx_tmp2 = true;
            		}
HXDLIN(  17)		if (_hx_tmp2) {
HXLINE(  17)			::substates::GameOverSubstate_obj::endSoundName = HX_("gameOverEnd-pixel",0e,ae,3e,22);
            		}
HXLINE(  18)		bool _hx_tmp3;
HXDLIN(  18)		if (::hx::IsNotNull( _song->__Field(HX_("gameOverChar",5c,48,07,65),::hx::paccDynamic) )) {
HXLINE(  18)			_hx_tmp3 = (::StringTools_obj::trim(( (::String)(_song->__Field(HX_("gameOverChar",5c,48,07,65),::hx::paccDynamic)) )).length < 1);
            		}
            		else {
HXLINE(  18)			_hx_tmp3 = true;
            		}
HXDLIN(  18)		if (_hx_tmp3) {
HXLINE(  18)			::substates::GameOverSubstate_obj::characterName = HX_("bf-pixel-dead",34,d0,3d,c4);
            		}
HXLINE(  20)		 ::objects::BGSprite bgSky =  ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("weeb/weebSky",52,34,cf,a4),0,0,((Float)0.1),((Float)0.1),null(),null());
HXLINE(  21)		this->add(bgSky);
HXLINE(  22)		bgSky->set_antialiasing(false);
HXLINE(  24)		int repositionShit = -200;
HXLINE(  26)		 ::objects::BGSprite bgSchool =  ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("weeb/weebSchool",a3,21,c0,f5),repositionShit,0,((Float)0.6),((Float)0.90),null(),null());
HXLINE(  27)		this->add(bgSchool);
HXLINE(  28)		bgSchool->set_antialiasing(false);
HXLINE(  30)		 ::objects::BGSprite bgStreet =  ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("weeb/weebStreet",32,81,24,c6),repositionShit,0,((Float)0.95),((Float)0.95),null(),null());
HXLINE(  31)		this->add(bgStreet);
HXLINE(  32)		bgStreet->set_antialiasing(false);
HXLINE(  34)		Float widShit = bgSky->get_width();
HXDLIN(  34)		int widShit1 = ::Std_obj::_hx_int((widShit * ::states::PlayState_obj::daPixelZoom));
HXLINE(  35)		if (!(::backend::ClientPrefs_obj::data->lowQuality)) {
HXLINE(  36)			 ::objects::BGSprite fgTrees =  ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("weeb/weebTreesBack",4d,ac,bd,40),(repositionShit + 170),130,((Float)0.9),((Float)0.9),null(),null());
HXLINE(  37)			fgTrees->setGraphicSize(::Std_obj::_hx_int((( (Float)(widShit1) ) * ((Float)0.8))),null());
HXLINE(  38)			fgTrees->updateHitbox();
HXLINE(  39)			this->add(fgTrees);
HXLINE(  40)			fgTrees->set_antialiasing(false);
            		}
HXLINE(  43)		 ::flixel::FlxSprite bgTrees =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,(repositionShit - 380),-800,null());
HXLINE(  44)		::String library = null();
HXDLIN(  44)		 ::flixel::graphics::FlxGraphic imageLoaded = ::backend::Paths_obj::image(HX_("weeb/weebTrees",06,ab,3a,76),library,true);
HXDLIN(  44)		bool txtExists = false;
HXDLIN(  44)		::String txt = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("weeb/weebTrees",06,ab,3a,76)) + HX_(".txt",02,3f,c0,1e)));
HXDLIN(  44)		if (::sys::FileSystem_obj::exists(txt)) {
HXLINE(  44)			txtExists = true;
            		}
HXDLIN(  44)		::String _hx_tmp4;
HXDLIN(  44)		if (txtExists) {
HXLINE(  44)			_hx_tmp4 = ::sys::io::File_obj::getContent(txt);
            		}
            		else {
HXLINE(  44)			_hx_tmp4 = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/weebTrees",06,ab,3a,76)) + HX_(".txt",02,3f,c0,1e)),null(),library,null());
            		}
HXDLIN(  44)		bgTrees->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSpriteSheetPacker(imageLoaded,_hx_tmp4));
HXLINE(  45)		bgTrees->animation->add(HX_("treeLoop",e2,72,7f,2b),::Array_obj< int >::fromData( _hx_array_data_413ce3c1_3,19),12,null(),null(),null());
HXLINE(  46)		bgTrees->animation->play(HX_("treeLoop",e2,72,7f,2b),null(),null(),null());
HXLINE(  47)		{
HXLINE(  47)			 ::flixel::math::FlxBasePoint this1 = bgTrees->scrollFactor;
HXDLIN(  47)			this1->set_x(((Float)0.85));
HXDLIN(  47)			this1->set_y(((Float)0.85));
            		}
HXLINE(  48)		this->add(bgTrees);
HXLINE(  49)		bgTrees->set_antialiasing(false);
HXLINE(  51)		if (!(::backend::ClientPrefs_obj::data->lowQuality)) {
HXLINE(  52)			 ::objects::BGSprite treeLeaves =  ::objects::BGSprite_obj::__alloc( HX_CTX ,HX_("weeb/petals",8d,ca,2b,c2),repositionShit,-40,((Float)0.85),((Float)0.85),::Array_obj< ::String >::fromData( _hx_array_data_413ce3c1_4,1),true);
HXLINE(  53)			treeLeaves->setGraphicSize(widShit1,null());
HXLINE(  54)			treeLeaves->updateHitbox();
HXLINE(  55)			this->add(treeLeaves);
HXLINE(  56)			treeLeaves->set_antialiasing(false);
            		}
HXLINE(  59)		bgSky->setGraphicSize(widShit1,null());
HXLINE(  60)		bgSchool->setGraphicSize(widShit1,null());
HXLINE(  61)		bgStreet->setGraphicSize(widShit1,null());
HXLINE(  62)		bgTrees->setGraphicSize(::Std_obj::_hx_int((( (Float)(widShit1) ) * ((Float)1.4))),null());
HXLINE(  64)		bgSky->updateHitbox();
HXLINE(  65)		bgSchool->updateHitbox();
HXLINE(  66)		bgStreet->updateHitbox();
HXLINE(  67)		bgTrees->updateHitbox();
HXLINE(  69)		if (!(::backend::ClientPrefs_obj::data->lowQuality)) {
HXLINE(  70)			this->bgGirls =  ::states::stages::objects::BackgroundGirls_obj::__alloc( HX_CTX ,( (Float)(-100) ),( (Float)(190) ));
HXLINE(  71)			{
HXLINE(  71)				 ::flixel::math::FlxBasePoint this2 = this->bgGirls->scrollFactor;
HXDLIN(  71)				this2->set_x(((Float)0.9));
HXDLIN(  71)				this2->set_y(((Float)0.9));
            			}
HXLINE(  72)			this->add(this->bgGirls);
            		}
HXLINE(  74)		this->setDefaultGF(HX_("gf-pixel",98,3e,8c,55));
HXLINE(  76)		::String _hx_switch_0 = ( (::String)(this->game->__Field(HX_("songName",c0,d0,d7,36),::hx::paccDynamic)) );
            		if (  (_hx_switch_0==HX_("roses",04,6c,64,ed)) ){
HXLINE(  82)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp5 = ::flixel::FlxG_obj::sound;
HXDLIN(  82)			_hx_tmp5->play(::backend::Paths_obj::sound(HX_("ANGRY_TEXT_BOX",57,5c,5c,19),null()),null(),null(),null(),null(),null());
HXDLIN(  82)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==HX_("senpai",3c,df,8d,6b)) ){
HXLINE(  79)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp6 = ::flixel::FlxG_obj::sound;
HXDLIN(  79)			::String library1 = null();
HXDLIN(  79)			 ::openfl::media::Sound file = ::backend::Paths_obj::returnSound(HX_("music",a5,d0,5a,10),HX_("Lunchbox",c1,34,3f,3d),library1);
HXDLIN(  79)			_hx_tmp6->playMusic(file,0,null(),null());
HXLINE(  80)			{
HXLINE(  80)				 ::flixel::sound::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN(  80)				 ::Dynamic onComplete = null();
HXDLIN(  80)				if (::hx::IsNull( _this->_channel )) {
HXLINE(  80)					_this->play(null(),null(),null());
            				}
HXDLIN(  80)				if (::hx::IsNotNull( _this->fadeTween )) {
HXLINE(  80)					_this->fadeTween->cancel();
            				}
HXDLIN(  80)				_this->fadeTween = ::flixel::tweens::FlxTween_obj::num(( (Float)(0) ),((Float)0.8),1, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("onComplete",f8,d4,7e,5d),onComplete)),_this->volumeTween_dyn());
            			}
HXLINE(  78)			goto _hx_goto_1;
            		}
            		_hx_goto_1:;
HXLINE(  84)		bool _hx_tmp7;
HXDLIN(  84)		if (::states::PlayState_obj::isStoryMode) {
HXLINE(  84)			_hx_tmp7 = !(::states::PlayState_obj::seenCutscene);
            		}
            		else {
HXLINE(  84)			_hx_tmp7 = false;
            		}
HXDLIN(  84)		if (_hx_tmp7) {
HXLINE(  86)			if ((( (::String)(this->game->__Field(HX_("songName",c0,d0,d7,36),::hx::paccDynamic)) ) == HX_("roses",04,6c,64,ed))) {
HXLINE(  86)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp8 = ::flixel::FlxG_obj::sound;
HXDLIN(  86)				_hx_tmp8->play(::backend::Paths_obj::sound(HX_("ANGRY",01,81,d0,a0),null()),null(),null(),null(),null(),null());
            			}
HXLINE(  87)			this->initDoof();
HXLINE(  88)			this->setStartCallback(this->schoolIntro_dyn());
            		}
            	}


void School_obj::beatHit(){
            	HX_STACKFRAME(&_hx_pos_628fdf92be9f29ca_94_beatHit)
HXDLIN(  94)		if (::hx::IsNotNull( this->bgGirls )) {
HXDLIN(  94)			this->bgGirls->dance();
            		}
            	}


void School_obj::eventCalled(::String eventName,::String value1,::String value2, ::Dynamic flValue1, ::Dynamic flValue2,Float strumTime){
            	HX_STACKFRAME(&_hx_pos_628fdf92be9f29ca_100_eventCalled)
HXDLIN( 100)		if ((eventName == HX_("BG Freaks Expression",4d,76,b1,17))) {
HXLINE( 103)			if (::hx::IsNotNull( this->bgGirls )) {
HXLINE( 103)				this->bgGirls->swapDanceType();
            			}
            		}
            	}


void School_obj::initDoof(){
            	HX_GC_STACKFRAME(&_hx_pos_628fdf92be9f29ca_109_initDoof)
HXLINE( 110)		::String library = null();
HXDLIN( 110)		::String file = ::backend::Paths_obj::getPath(((HX_("data/",c5,0e,88,d4) + (((( (::String)(this->game->__Field(HX_("songName",c0,d0,d7,36),::hx::paccDynamic)) ) + HX_("/",2f,00,00,00)) + ( (::String)(this->game->__Field(HX_("songName",c0,d0,d7,36),::hx::paccDynamic)) )) + HX_("Dialogue",38,e9,45,81))) + HX_(".txt",02,3f,c0,1e)),HX_("TEXT",ad,94,ba,37),library,null());
HXLINE( 112)		if (!(::sys::FileSystem_obj::exists(file))) {
HXLINE( 117)			this->startCountdown();
HXLINE( 118)			return;
            		}
HXLINE( 121)		::String path = file;
HXDLIN( 121)		::String daList = null();
HXDLIN( 121)		::Array< ::String > formatted = path.split(HX_(":",3a,00,00,00));
HXDLIN( 121)		path = formatted->__get((formatted->length - 1));
HXDLIN( 121)		if (::sys::FileSystem_obj::exists(path)) {
HXLINE( 121)			daList = ::sys::io::File_obj::getContent(path);
            		}
HXDLIN( 121)		::Array< ::String > _hx_tmp;
HXDLIN( 121)		if (::hx::IsNotNull( daList )) {
HXLINE( 121)			::Array< ::String > daList1 = ::Array_obj< ::String >::__new(0);
HXDLIN( 121)			daList1 = ::StringTools_obj::trim(daList).split(HX_("\n",0a,00,00,00));
HXDLIN( 121)			{
HXLINE( 121)				int _g = 0;
HXDLIN( 121)				int _g1 = daList1->length;
HXDLIN( 121)				while((_g < _g1)){
HXLINE( 121)					_g = (_g + 1);
HXDLIN( 121)					int i = (_g - 1);
HXDLIN( 121)					daList1[i] = ::StringTools_obj::trim(daList1->__get(i));
            				}
            			}
HXDLIN( 121)			_hx_tmp = daList1;
            		}
            		else {
HXLINE( 121)			_hx_tmp = ::Array_obj< ::String >::__new(0);
            		}
HXDLIN( 121)		this->doof =  ::cutscenes::DialogueBox_obj::__alloc( HX_CTX ,false,_hx_tmp);
HXLINE( 122)		this->doof->set_cameras(::Array_obj< ::Dynamic>::__new(1)->init(0,( ( ::flixel::FlxCamera)(this->game->__Field(HX_("camHUD",e8,2b,76,b7),::hx::paccDynamic)) )));
HXLINE( 123)		{
HXLINE( 123)			 ::flixel::math::FlxBasePoint this1 = this->doof->scrollFactor;
HXDLIN( 123)			this1->set_x(( (Float)(0) ));
HXDLIN( 123)			this1->set_y(( (Float)(0) ));
            		}
HXLINE( 124)		this->doof->finishThing = this->startCountdown_dyn();
HXLINE( 125)		this->doof->nextDialogueThing = ::states::PlayState_obj::instance->startNextDialogue_dyn();
HXLINE( 126)		this->doof->skipDialogueThing = ::states::PlayState_obj::instance->skipDialogue_dyn();
            	}


HX_DEFINE_DYNAMIC_FUNC0(School_obj,initDoof,(void))

void School_obj::schoolIntro(){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::states::stages::School,_gthis, ::flixel::FlxSprite,black1) HXARGC(1)
            		void _hx_run( ::flixel::util::FlxTimer tmr){
            			HX_GC_STACKFRAME(&_hx_pos_628fdf92be9f29ca_137_schoolIntro)
HXLINE( 138)			black1->set_alpha((black1->alpha - ((Float)0.15)));
HXLINE( 140)			if ((black1->alpha > 0)) {
HXLINE( 141)				tmr->reset(((Float)0.3));
            			}
            			else {
HXLINE( 144)				if (::hx::IsNotNull( _gthis->doof )) {
HXLINE( 145)					_gthis->add(_gthis->doof);
            				}
            				else {
HXLINE( 147)					_gthis->startCountdown();
            				}
HXLINE( 149)				_gthis->remove(black1);
HXLINE( 150)				black1->destroy();
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_628fdf92be9f29ca_130_schoolIntro)
HXDLIN( 130)		 ::states::stages::School _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 131)		this->game->__SetField(HX_("inCutscene",8f,21,01,56),true,::hx::paccDynamic);
HXLINE( 132)		 ::flixel::FlxSprite black =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-100,-100,null());
HXDLIN( 132)		 ::flixel::FlxSprite black1 = black->makeGraphic((::flixel::FlxG_obj::width * 2),(::flixel::FlxG_obj::height * 2),-16777216,null(),null());
HXLINE( 133)		{
HXLINE( 133)			 ::flixel::math::FlxBasePoint this1 = black1->scrollFactor;
HXDLIN( 133)			this1->set_x(( (Float)(0) ));
HXDLIN( 133)			this1->set_y(( (Float)(0) ));
            		}
HXLINE( 134)		if ((( (::String)(this->game->__Field(HX_("songName",c0,d0,d7,36),::hx::paccDynamic)) ) == HX_("senpai",3c,df,8d,6b))) {
HXLINE( 134)			this->add(black1);
            		}
HXLINE( 136)		 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(((Float)0.3), ::Dynamic(new _hx_Closure_0(_gthis,black1)),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(School_obj,schoolIntro,(void))


::hx::ObjectPtr< School_obj > School_obj::__new() {
	::hx::ObjectPtr< School_obj > __this = new School_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< School_obj > School_obj::__alloc(::hx::Ctx *_hx_ctx) {
	School_obj *__this = (School_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(School_obj), true, "states.stages.School"));
	*(void **)__this = School_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

School_obj::School_obj()
{
}

void School_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(School);
	HX_MARK_MEMBER_NAME(bgGirls,"bgGirls");
	HX_MARK_MEMBER_NAME(doof,"doof");
	 ::backend::BaseStage_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void School_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bgGirls,"bgGirls");
	HX_VISIT_MEMBER_NAME(doof,"doof");
	 ::backend::BaseStage_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val School_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"doof") ) { return ::hx::Val( doof ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bgGirls") ) { return ::hx::Val( bgGirls ); }
		if (HX_FIELD_EQ(inName,"beatHit") ) { return ::hx::Val( beatHit_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"initDoof") ) { return ::hx::Val( initDoof_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"eventCalled") ) { return ::hx::Val( eventCalled_dyn() ); }
		if (HX_FIELD_EQ(inName,"schoolIntro") ) { return ::hx::Val( schoolIntro_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val School_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"doof") ) { doof=inValue.Cast<  ::cutscenes::DialogueBox >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bgGirls") ) { bgGirls=inValue.Cast<  ::states::stages::objects::BackgroundGirls >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void School_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bgGirls",92,16,2b,41));
	outFields->push(HX_("doof",62,f1,6d,42));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo School_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::states::stages::objects::BackgroundGirls */ ,(int)offsetof(School_obj,bgGirls),HX_("bgGirls",92,16,2b,41)},
	{::hx::fsObject /*  ::cutscenes::DialogueBox */ ,(int)offsetof(School_obj,doof),HX_("doof",62,f1,6d,42)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *School_obj_sStaticStorageInfo = 0;
#endif

static ::String School_obj_sMemberFields[] = {
	HX_("bgGirls",92,16,2b,41),
	HX_("create",fc,66,0f,7c),
	HX_("beatHit",7d,ea,04,74),
	HX_("eventCalled",37,a0,35,0a),
	HX_("doof",62,f1,6d,42),
	HX_("initDoof",92,20,25,47),
	HX_("schoolIntro",58,5d,50,47),
	::String(null()) };

::hx::Class School_obj::__mClass;

void School_obj::__register()
{
	School_obj _hx_dummy;
	School_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("states.stages.School",c1,e3,3c,41);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(School_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< School_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = School_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = School_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace states
} // end namespace stages
