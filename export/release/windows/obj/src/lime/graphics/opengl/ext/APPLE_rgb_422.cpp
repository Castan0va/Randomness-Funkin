// Generated by Haxe 4.3.2
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_APPLE_rgb_422
#include <lime/graphics/opengl/ext/APPLE_rgb_422.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7884905029fdefd8_4_new,"lime.graphics.opengl.ext.APPLE_rgb_422","new",0x2a5502cd,"lime.graphics.opengl.ext.APPLE_rgb_422.new","lime/graphics/opengl/ext/APPLE_rgb_422.hx",4,0xcbee61e5)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void APPLE_rgb_422_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_7884905029fdefd8_4_new)
HXLINE(   8)		this->UNSIGNED_SHORT_8_8_REV_APPLE = 34235;
HXLINE(   7)		this->UNSIGNED_SHORT_8_8_APPLE = 34234;
HXLINE(   6)		this->RGB_422_APPLE = 35359;
            	}

Dynamic APPLE_rgb_422_obj::__CreateEmpty() { return new APPLE_rgb_422_obj; }

void *APPLE_rgb_422_obj::_hx_vtable = 0;

Dynamic APPLE_rgb_422_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< APPLE_rgb_422_obj > _hx_result = new APPLE_rgb_422_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool APPLE_rgb_422_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7052c56f;
}


APPLE_rgb_422_obj::APPLE_rgb_422_obj()
{
}

::hx::Val APPLE_rgb_422_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"RGB_422_APPLE") ) { return ::hx::Val( RGB_422_APPLE ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"UNSIGNED_SHORT_8_8_APPLE") ) { return ::hx::Val( UNSIGNED_SHORT_8_8_APPLE ); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"UNSIGNED_SHORT_8_8_REV_APPLE") ) { return ::hx::Val( UNSIGNED_SHORT_8_8_REV_APPLE ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val APPLE_rgb_422_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"RGB_422_APPLE") ) { RGB_422_APPLE=inValue.Cast< int >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"UNSIGNED_SHORT_8_8_APPLE") ) { UNSIGNED_SHORT_8_8_APPLE=inValue.Cast< int >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"UNSIGNED_SHORT_8_8_REV_APPLE") ) { UNSIGNED_SHORT_8_8_REV_APPLE=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void APPLE_rgb_422_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("RGB_422_APPLE",5d,91,df,ea));
	outFields->push(HX_("UNSIGNED_SHORT_8_8_APPLE",ff,40,5e,85));
	outFields->push(HX_("UNSIGNED_SHORT_8_8_REV_APPLE",43,98,55,0b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo APPLE_rgb_422_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(APPLE_rgb_422_obj,RGB_422_APPLE),HX_("RGB_422_APPLE",5d,91,df,ea)},
	{::hx::fsInt,(int)offsetof(APPLE_rgb_422_obj,UNSIGNED_SHORT_8_8_APPLE),HX_("UNSIGNED_SHORT_8_8_APPLE",ff,40,5e,85)},
	{::hx::fsInt,(int)offsetof(APPLE_rgb_422_obj,UNSIGNED_SHORT_8_8_REV_APPLE),HX_("UNSIGNED_SHORT_8_8_REV_APPLE",43,98,55,0b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *APPLE_rgb_422_obj_sStaticStorageInfo = 0;
#endif

static ::String APPLE_rgb_422_obj_sMemberFields[] = {
	HX_("RGB_422_APPLE",5d,91,df,ea),
	HX_("UNSIGNED_SHORT_8_8_APPLE",ff,40,5e,85),
	HX_("UNSIGNED_SHORT_8_8_REV_APPLE",43,98,55,0b),
	::String(null()) };

::hx::Class APPLE_rgb_422_obj::__mClass;

void APPLE_rgb_422_obj::__register()
{
	APPLE_rgb_422_obj _hx_dummy;
	APPLE_rgb_422_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl.ext.APPLE_rgb_422",5b,98,f6,0a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(APPLE_rgb_422_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< APPLE_rgb_422_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = APPLE_rgb_422_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = APPLE_rgb_422_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
