// Generated by Haxe 4.3.2
#include <hxcpp.h>

#ifndef INCLUDED_flixel_addons_ui__FlxUICursor_FlxUICursorInputFlag_Impl_
#include <flixel/addons/ui/_FlxUICursor/FlxUICursorInputFlag_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_ced91ceff7e84e97_1477_has,"flixel.addons.ui._FlxUICursor.FlxUICursorInputFlag_Impl_","has",0x065cf4c6,"flixel.addons.ui._FlxUICursor.FlxUICursorInputFlag_Impl_.has","flixel/addons/ui/FlxUICursor.hx",1477,0xd77c8c34)
HX_LOCAL_STACK_FRAME(_hx_pos_ced91ceff7e84e97_1458_boot,"flixel.addons.ui._FlxUICursor.FlxUICursorInputFlag_Impl_","boot",0x870c8d46,"flixel.addons.ui._FlxUICursor.FlxUICursorInputFlag_Impl_.boot","flixel/addons/ui/FlxUICursor.hx",1458,0xd77c8c34)
HX_LOCAL_STACK_FRAME(_hx_pos_ced91ceff7e84e97_1460_boot,"flixel.addons.ui._FlxUICursor.FlxUICursorInputFlag_Impl_","boot",0x870c8d46,"flixel.addons.ui._FlxUICursor.FlxUICursorInputFlag_Impl_.boot","flixel/addons/ui/FlxUICursor.hx",1460,0xd77c8c34)
HX_LOCAL_STACK_FRAME(_hx_pos_ced91ceff7e84e97_1462_boot,"flixel.addons.ui._FlxUICursor.FlxUICursorInputFlag_Impl_","boot",0x870c8d46,"flixel.addons.ui._FlxUICursor.FlxUICursorInputFlag_Impl_.boot","flixel/addons/ui/FlxUICursor.hx",1462,0xd77c8c34)
HX_LOCAL_STACK_FRAME(_hx_pos_ced91ceff7e84e97_1464_boot,"flixel.addons.ui._FlxUICursor.FlxUICursorInputFlag_Impl_","boot",0x870c8d46,"flixel.addons.ui._FlxUICursor.FlxUICursorInputFlag_Impl_.boot","flixel/addons/ui/FlxUICursor.hx",1464,0xd77c8c34)
HX_LOCAL_STACK_FRAME(_hx_pos_ced91ceff7e84e97_1467_boot,"flixel.addons.ui._FlxUICursor.FlxUICursorInputFlag_Impl_","boot",0x870c8d46,"flixel.addons.ui._FlxUICursor.FlxUICursorInputFlag_Impl_.boot","flixel/addons/ui/FlxUICursor.hx",1467,0xd77c8c34)
HX_LOCAL_STACK_FRAME(_hx_pos_ced91ceff7e84e97_1469_boot,"flixel.addons.ui._FlxUICursor.FlxUICursorInputFlag_Impl_","boot",0x870c8d46,"flixel.addons.ui._FlxUICursor.FlxUICursorInputFlag_Impl_.boot","flixel/addons/ui/FlxUICursor.hx",1469,0xd77c8c34)
HX_LOCAL_STACK_FRAME(_hx_pos_ced91ceff7e84e97_1471_boot,"flixel.addons.ui._FlxUICursor.FlxUICursorInputFlag_Impl_","boot",0x870c8d46,"flixel.addons.ui._FlxUICursor.FlxUICursorInputFlag_Impl_.boot","flixel/addons/ui/FlxUICursor.hx",1471,0xd77c8c34)
HX_LOCAL_STACK_FRAME(_hx_pos_ced91ceff7e84e97_1473_boot,"flixel.addons.ui._FlxUICursor.FlxUICursorInputFlag_Impl_","boot",0x870c8d46,"flixel.addons.ui._FlxUICursor.FlxUICursorInputFlag_Impl_.boot","flixel/addons/ui/FlxUICursor.hx",1473,0xd77c8c34)
namespace flixel{
namespace addons{
namespace ui{
namespace _FlxUICursor{

void FlxUICursorInputFlag_Impl__obj::__construct() { }

Dynamic FlxUICursorInputFlag_Impl__obj::__CreateEmpty() { return new FlxUICursorInputFlag_Impl__obj; }

void *FlxUICursorInputFlag_Impl__obj::_hx_vtable = 0;

Dynamic FlxUICursorInputFlag_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxUICursorInputFlag_Impl__obj > _hx_result = new FlxUICursorInputFlag_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxUICursorInputFlag_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5ee5dede;
}

int FlxUICursorInputFlag_Impl__obj::KEYS_TAB;

int FlxUICursorInputFlag_Impl__obj::KEYS_WASD;

int FlxUICursorInputFlag_Impl__obj::KEYS_ARROWS;

int FlxUICursorInputFlag_Impl__obj::KEYS_NUMPAD;

int FlxUICursorInputFlag_Impl__obj::GAMEPAD_DPAD;

int FlxUICursorInputFlag_Impl__obj::GAMEPAD_LEFT_STICK;

int FlxUICursorInputFlag_Impl__obj::GAMEPAD_RIGHT_STICK;

int FlxUICursorInputFlag_Impl__obj::GAMEPAD_SHOULDER_BUTTONS;

bool FlxUICursorInputFlag_Impl__obj::has(int this1,int flag){
            	HX_STACKFRAME(&_hx_pos_ced91ceff7e84e97_1477_has)
HXDLIN(1477)		return ((this1 & flag) == flag);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxUICursorInputFlag_Impl__obj,has,return )


FlxUICursorInputFlag_Impl__obj::FlxUICursorInputFlag_Impl__obj()
{
}

bool FlxUICursorInputFlag_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"has") ) { outValue = has_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxUICursorInputFlag_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo FlxUICursorInputFlag_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &FlxUICursorInputFlag_Impl__obj::KEYS_TAB,HX_("KEYS_TAB",2a,ef,20,96)},
	{::hx::fsInt,(void *) &FlxUICursorInputFlag_Impl__obj::KEYS_WASD,HX_("KEYS_WASD",86,08,ac,c8)},
	{::hx::fsInt,(void *) &FlxUICursorInputFlag_Impl__obj::KEYS_ARROWS,HX_("KEYS_ARROWS",b5,10,79,4f)},
	{::hx::fsInt,(void *) &FlxUICursorInputFlag_Impl__obj::KEYS_NUMPAD,HX_("KEYS_NUMPAD",f8,1c,03,39)},
	{::hx::fsInt,(void *) &FlxUICursorInputFlag_Impl__obj::GAMEPAD_DPAD,HX_("GAMEPAD_DPAD",2d,e3,43,25)},
	{::hx::fsInt,(void *) &FlxUICursorInputFlag_Impl__obj::GAMEPAD_LEFT_STICK,HX_("GAMEPAD_LEFT_STICK",f6,dd,44,78)},
	{::hx::fsInt,(void *) &FlxUICursorInputFlag_Impl__obj::GAMEPAD_RIGHT_STICK,HX_("GAMEPAD_RIGHT_STICK",2f,51,b1,65)},
	{::hx::fsInt,(void *) &FlxUICursorInputFlag_Impl__obj::GAMEPAD_SHOULDER_BUTTONS,HX_("GAMEPAD_SHOULDER_BUTTONS",c0,3b,6b,64)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void FlxUICursorInputFlag_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxUICursorInputFlag_Impl__obj::KEYS_TAB,"KEYS_TAB");
	HX_MARK_MEMBER_NAME(FlxUICursorInputFlag_Impl__obj::KEYS_WASD,"KEYS_WASD");
	HX_MARK_MEMBER_NAME(FlxUICursorInputFlag_Impl__obj::KEYS_ARROWS,"KEYS_ARROWS");
	HX_MARK_MEMBER_NAME(FlxUICursorInputFlag_Impl__obj::KEYS_NUMPAD,"KEYS_NUMPAD");
	HX_MARK_MEMBER_NAME(FlxUICursorInputFlag_Impl__obj::GAMEPAD_DPAD,"GAMEPAD_DPAD");
	HX_MARK_MEMBER_NAME(FlxUICursorInputFlag_Impl__obj::GAMEPAD_LEFT_STICK,"GAMEPAD_LEFT_STICK");
	HX_MARK_MEMBER_NAME(FlxUICursorInputFlag_Impl__obj::GAMEPAD_RIGHT_STICK,"GAMEPAD_RIGHT_STICK");
	HX_MARK_MEMBER_NAME(FlxUICursorInputFlag_Impl__obj::GAMEPAD_SHOULDER_BUTTONS,"GAMEPAD_SHOULDER_BUTTONS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxUICursorInputFlag_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxUICursorInputFlag_Impl__obj::KEYS_TAB,"KEYS_TAB");
	HX_VISIT_MEMBER_NAME(FlxUICursorInputFlag_Impl__obj::KEYS_WASD,"KEYS_WASD");
	HX_VISIT_MEMBER_NAME(FlxUICursorInputFlag_Impl__obj::KEYS_ARROWS,"KEYS_ARROWS");
	HX_VISIT_MEMBER_NAME(FlxUICursorInputFlag_Impl__obj::KEYS_NUMPAD,"KEYS_NUMPAD");
	HX_VISIT_MEMBER_NAME(FlxUICursorInputFlag_Impl__obj::GAMEPAD_DPAD,"GAMEPAD_DPAD");
	HX_VISIT_MEMBER_NAME(FlxUICursorInputFlag_Impl__obj::GAMEPAD_LEFT_STICK,"GAMEPAD_LEFT_STICK");
	HX_VISIT_MEMBER_NAME(FlxUICursorInputFlag_Impl__obj::GAMEPAD_RIGHT_STICK,"GAMEPAD_RIGHT_STICK");
	HX_VISIT_MEMBER_NAME(FlxUICursorInputFlag_Impl__obj::GAMEPAD_SHOULDER_BUTTONS,"GAMEPAD_SHOULDER_BUTTONS");
};

#endif

::hx::Class FlxUICursorInputFlag_Impl__obj::__mClass;

static ::String FlxUICursorInputFlag_Impl__obj_sStaticFields[] = {
	HX_("KEYS_TAB",2a,ef,20,96),
	HX_("KEYS_WASD",86,08,ac,c8),
	HX_("KEYS_ARROWS",b5,10,79,4f),
	HX_("KEYS_NUMPAD",f8,1c,03,39),
	HX_("GAMEPAD_DPAD",2d,e3,43,25),
	HX_("GAMEPAD_LEFT_STICK",f6,dd,44,78),
	HX_("GAMEPAD_RIGHT_STICK",2f,51,b1,65),
	HX_("GAMEPAD_SHOULDER_BUTTONS",c0,3b,6b,64),
	HX_("has",5a,3f,4f,00),
	::String(null())
};

void FlxUICursorInputFlag_Impl__obj::__register()
{
	FlxUICursorInputFlag_Impl__obj _hx_dummy;
	FlxUICursorInputFlag_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.ui._FlxUICursor.FlxUICursorInputFlag_Impl_",da,ef,27,fe);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxUICursorInputFlag_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxUICursorInputFlag_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxUICursorInputFlag_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< FlxUICursorInputFlag_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxUICursorInputFlag_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxUICursorInputFlag_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxUICursorInputFlag_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxUICursorInputFlag_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_ced91ceff7e84e97_1458_boot)
HXDLIN(1458)		KEYS_TAB = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_ced91ceff7e84e97_1460_boot)
HXDLIN(1460)		KEYS_WASD = 16;
            	}
{
            	HX_STACKFRAME(&_hx_pos_ced91ceff7e84e97_1462_boot)
HXDLIN(1462)		KEYS_ARROWS = 256;
            	}
{
            	HX_STACKFRAME(&_hx_pos_ced91ceff7e84e97_1464_boot)
HXDLIN(1464)		KEYS_NUMPAD = 4096;
            	}
{
            	HX_STACKFRAME(&_hx_pos_ced91ceff7e84e97_1467_boot)
HXDLIN(1467)		GAMEPAD_DPAD = 65536;
            	}
{
            	HX_STACKFRAME(&_hx_pos_ced91ceff7e84e97_1469_boot)
HXDLIN(1469)		GAMEPAD_LEFT_STICK = 1048576;
            	}
{
            	HX_STACKFRAME(&_hx_pos_ced91ceff7e84e97_1471_boot)
HXDLIN(1471)		GAMEPAD_RIGHT_STICK = 16777216;
            	}
{
            	HX_STACKFRAME(&_hx_pos_ced91ceff7e84e97_1473_boot)
HXDLIN(1473)		GAMEPAD_SHOULDER_BUTTONS = 268435456;
            	}
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
} // end namespace _FlxUICursor
