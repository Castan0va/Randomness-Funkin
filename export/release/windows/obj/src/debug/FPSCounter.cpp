// Generated by Haxe 4.3.2
#include <hxcpp.h>

#ifndef INCLUDED_debug_FPSCounter
#include <debug/FPSCounter.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_system_System
#include <openfl/system/System.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_edd8c798aec9d5db_12_new,"debug.FPSCounter","new",0x360e9c60,"debug.FPSCounter.new","debug/FPSCounter.hx",12,0x1b50626f)
HX_LOCAL_STACK_FRAME(_hx_pos_edd8c798aec9d5db_48___enterFrame,"debug.FPSCounter","__enterFrame",0xd56f3315,"debug.FPSCounter.__enterFrame","debug/FPSCounter.hx",48,0x1b50626f)
HX_LOCAL_STACK_FRAME(_hx_pos_edd8c798aec9d5db_64___default_updateText,"debug.FPSCounter","__default_updateText",0xedb8a074,"debug.FPSCounter.__default_updateText","debug/FPSCounter.hx",64,0x1b50626f)
HX_LOCAL_STACK_FRAME(_hx_pos_edd8c798aec9d5db_74_get_memoryMegas,"debug.FPSCounter","get_memoryMegas",0xe205e997,"debug.FPSCounter.get_memoryMegas","debug/FPSCounter.hx",74,0x1b50626f)
namespace debug{

void FPSCounter_obj::__construct(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< int >  __o_color){
            		Float x = __o_x.Default(10);
            		Float y = __o_y.Default(10);
            		int color = __o_color.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_edd8c798aec9d5db_12_new)
HXLINE(  44)		this->deltaTimeout = ((Float)0.0);
HXLINE(  28)		super::__construct();
HXLINE(  30)		this->set_x(x);
HXLINE(  31)		this->set_y(y);
HXLINE(  33)		this->currentFPS = 0;
HXLINE(  34)		this->set_selectable(false);
HXLINE(  35)		this->mouseEnabled = false;
HXLINE(  36)		this->set_defaultTextFormat( ::openfl::text::TextFormat_obj::__alloc( HX_CTX ,HX_("_sans",32,a0,5e,ff),14,color,null(),null(),null(),null(),null(),null(),null(),null(),null(),null()));
HXLINE(  37)		this->set_autoSize(1);
HXLINE(  38)		this->set_multiline(true);
HXLINE(  39)		this->set_text(HX_("FPS: ",af,da,2c,83));
HXLINE(  41)		this->times = ::Array_obj< Float >::__new(0);
            	}

Dynamic FPSCounter_obj::__CreateEmpty() { return new FPSCounter_obj; }

void *FPSCounter_obj::_hx_vtable = 0;

Dynamic FPSCounter_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FPSCounter_obj > _hx_result = new FPSCounter_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool FPSCounter_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c6c4906) {
		if (inClassId<=(int)0x0c89e854) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x0c89e854;
			}
		} else {
			return inClassId==(int)0x2c6c4906;
		}
	} else {
		return inClassId==(int)0x6b353933 || inClassId==(int)0x7f0de750;
	}
}

void FPSCounter_obj::_hx___enterFrame(int _tmp_deltaTime){
            	HX_STACKFRAME(&_hx_pos_edd8c798aec9d5db_48___enterFrame)
HXLINE(  50)		Float deltaTime = ( (Float)(_tmp_deltaTime) );
HXDLIN(  50)		if ((this->deltaTimeout > 1000)) {
HXLINE(  51)			this->deltaTimeout = ((Float)0.0);
HXLINE(  52)			return;
            		}
HXLINE(  55)		int timer = ::lime::_hx_system::System_obj::getTimer();
HXDLIN(  55)		Float now;
HXDLIN(  55)		if ((timer > 0)) {
HXLINE(  55)			now = (( (Float)(timer) ) / ( (Float)(1000) ));
            		}
            		else {
HXLINE(  55)			now = ( (Float)(0) );
            		}
HXDLIN(  55)		Float now1 = (now * ( (Float)(1000) ));
HXLINE(  56)		this->times->push(now1);
HXLINE(  57)		while((this->times->__get(0) < (now1 - ( (Float)(1000) )))){
HXLINE(  57)			this->times->shift();
            		}
HXLINE(  59)		int _hx_tmp;
HXDLIN(  59)		if ((this->times->length < ::flixel::FlxG_obj::updateFramerate)) {
HXLINE(  59)			_hx_tmp = this->times->length;
            		}
            		else {
HXLINE(  59)			_hx_tmp = ::flixel::FlxG_obj::updateFramerate;
            		}
HXDLIN(  59)		this->currentFPS = _hx_tmp;
HXLINE(  60)		this->updateText();
HXLINE(  61)		 ::debug::FPSCounter _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  61)		_hx_tmp1->deltaTimeout = (_hx_tmp1->deltaTimeout + deltaTime);
            	}


HX_BEGIN_DEFAULT_FUNC(__default_updateText,FPSCounter_obj)
void _hx_run(){
            	HX_STACKFRAME(&_hx_pos_edd8c798aec9d5db_64___default_updateText)
HXLINE(  65)		::String _hx_tmp = (HX_("FPS: ",af,da,2c,83) + ( ( ::debug::FPSCounter)(__this) )->currentFPS);
HXLINE(  66)		int _hx_int = ::openfl::_hx_system::System_obj::get_totalMemory();
HXDLIN(  66)		Float _hx_tmp1;
HXDLIN(  66)		if ((_hx_int < 0)) {
HXLINE(  66)			_hx_tmp1 = (((Float)4294967296.0) + _hx_int);
            		}
            		else {
HXLINE(  66)			_hx_tmp1 = (_hx_int + ((Float)0.0));
            		}
HXLINE(  65)		( ( ::openfl::text::TextField)(__this) )->set_text((_hx_tmp + (HX_("\nMemory: ",11,56,a9,a3) + ::flixel::util::FlxStringUtil_obj::formatBytes(_hx_tmp1,null()))));
HXLINE(  68)		( ( ::openfl::text::TextField)(__this) )->set_textColor(-1);
HXLINE(  69)		if ((( ( ::debug::FPSCounter)(__this) )->currentFPS < (( (Float)(::flixel::FlxG_obj::drawFramerate) ) * ((Float)0.5)))) {
HXLINE(  70)			( ( ::openfl::text::TextField)(__this) )->set_textColor(-65536);
            		}
            	}
HX_END_LOCAL_FUNC0((void))
HX_END_DEFAULT_FUNC

Float FPSCounter_obj::get_memoryMegas(){
            	HX_STACKFRAME(&_hx_pos_edd8c798aec9d5db_74_get_memoryMegas)
HXDLIN(  74)		int _hx_int = ::openfl::_hx_system::System_obj::get_totalMemory();
HXDLIN(  74)		if ((_hx_int < 0)) {
HXDLIN(  74)			return (((Float)4294967296.0) + _hx_int);
            		}
            		else {
HXDLIN(  74)			return (_hx_int + ((Float)0.0));
            		}
HXDLIN(  74)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FPSCounter_obj,get_memoryMegas,return )


void FPSCounter_obj::__alloc_dynamic_functions(::hx::Ctx *_hx_ctx,FPSCounter_obj *_hx_obj) {
	if (!_hx_obj->updateText.mPtr) _hx_obj->updateText = new __default_updateText(_hx_obj);
}
::hx::ObjectPtr< FPSCounter_obj > FPSCounter_obj::__new(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< int >  __o_color) {
	::hx::ObjectPtr< FPSCounter_obj > __this = new FPSCounter_obj();
	__this->__construct(__o_x,__o_y,__o_color);
	return __this;
}

::hx::ObjectPtr< FPSCounter_obj > FPSCounter_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< int >  __o_color) {
	FPSCounter_obj *__this = (FPSCounter_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FPSCounter_obj), true, "debug.FPSCounter"));
	*(void **)__this = FPSCounter_obj::_hx_vtable;
	debug::FPSCounter_obj::__alloc_dynamic_functions(_hx_ctx,__this);
	__this->__construct(__o_x,__o_y,__o_color);
	return __this;
}

FPSCounter_obj::FPSCounter_obj()
{
	updateText = new __default_updateText(this);
}

void FPSCounter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FPSCounter);
	HX_MARK_MEMBER_NAME(currentFPS,"currentFPS");
	HX_MARK_MEMBER_NAME(times,"times");
	HX_MARK_MEMBER_NAME(deltaTimeout,"deltaTimeout");
	HX_MARK_MEMBER_NAME(updateText,"updateText");
	 ::openfl::text::TextField_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FPSCounter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(currentFPS,"currentFPS");
	HX_VISIT_MEMBER_NAME(times,"times");
	HX_VISIT_MEMBER_NAME(deltaTimeout,"deltaTimeout");
	HX_VISIT_MEMBER_NAME(updateText,"updateText");
	 ::openfl::text::TextField_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FPSCounter_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"times") ) { return ::hx::Val( times ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"currentFPS") ) { return ::hx::Val( currentFPS ); }
		if (HX_FIELD_EQ(inName,"updateText") ) { return ::hx::Val( updateText ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"memoryMegas") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_memoryMegas() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"deltaTimeout") ) { return ::hx::Val( deltaTimeout ); }
		if (HX_FIELD_EQ(inName,"__enterFrame") ) { return ::hx::Val( _hx___enterFrame_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_memoryMegas") ) { return ::hx::Val( get_memoryMegas_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FPSCounter_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"times") ) { times=inValue.Cast< ::Array< Float > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"currentFPS") ) { currentFPS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"updateText") ) { updateText=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"deltaTimeout") ) { deltaTimeout=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FPSCounter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("currentFPS",30,71,28,c7));
	outFields->push(HX_("memoryMegas",00,66,67,d8));
	outFields->push(HX_("times",c6,bf,35,10));
	outFields->push(HX_("deltaTimeout",89,c9,ba,8d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FPSCounter_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(FPSCounter_obj,currentFPS),HX_("currentFPS",30,71,28,c7)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(FPSCounter_obj,times),HX_("times",c6,bf,35,10)},
	{::hx::fsFloat,(int)offsetof(FPSCounter_obj,deltaTimeout),HX_("deltaTimeout",89,c9,ba,8d)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FPSCounter_obj,updateText),HX_("updateText",56,b7,ae,05)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FPSCounter_obj_sStaticStorageInfo = 0;
#endif

static ::String FPSCounter_obj_sMemberFields[] = {
	HX_("currentFPS",30,71,28,c7),
	HX_("times",c6,bf,35,10),
	HX_("deltaTimeout",89,c9,ba,8d),
	HX_("__enterFrame",15,7f,e3,3a),
	HX_("updateText",56,b7,ae,05),
	HX_("get_memoryMegas",97,1d,49,99),
	::String(null()) };

::hx::Class FPSCounter_obj::__mClass;

void FPSCounter_obj::__register()
{
	FPSCounter_obj _hx_dummy;
	FPSCounter_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("debug.FPSCounter",6e,2c,39,8f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FPSCounter_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FPSCounter_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FPSCounter_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FPSCounter_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace debug
