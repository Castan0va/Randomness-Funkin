// Generated by Haxe 4.3.2
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_texture_filter_anisotropic
#include <lime/graphics/opengl/ext/EXT_texture_filter_anisotropic.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d977a03d893e508f_5_new,"lime.graphics.opengl.ext.EXT_texture_filter_anisotropic","new",0x0f604e60,"lime.graphics.opengl.ext.EXT_texture_filter_anisotropic.new","lime/graphics/opengl/ext/EXT_texture_filter_anisotropic.hx",5,0x1cc8fa2e)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void EXT_texture_filter_anisotropic_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_d977a03d893e508f_5_new)
HXLINE(   8)		this->MAX_TEXTURE_MAX_ANISOTROPY_EXT = 34047;
HXLINE(   7)		this->TEXTURE_MAX_ANISOTROPY_EXT = 34046;
            	}

Dynamic EXT_texture_filter_anisotropic_obj::__CreateEmpty() { return new EXT_texture_filter_anisotropic_obj; }

void *EXT_texture_filter_anisotropic_obj::_hx_vtable = 0;

Dynamic EXT_texture_filter_anisotropic_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< EXT_texture_filter_anisotropic_obj > _hx_result = new EXT_texture_filter_anisotropic_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool EXT_texture_filter_anisotropic_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4d1533f6;
}


EXT_texture_filter_anisotropic_obj::EXT_texture_filter_anisotropic_obj()
{
}

::hx::Val EXT_texture_filter_anisotropic_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 26:
		if (HX_FIELD_EQ(inName,"TEXTURE_MAX_ANISOTROPY_EXT") ) { return ::hx::Val( TEXTURE_MAX_ANISOTROPY_EXT ); }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"MAX_TEXTURE_MAX_ANISOTROPY_EXT") ) { return ::hx::Val( MAX_TEXTURE_MAX_ANISOTROPY_EXT ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val EXT_texture_filter_anisotropic_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 26:
		if (HX_FIELD_EQ(inName,"TEXTURE_MAX_ANISOTROPY_EXT") ) { TEXTURE_MAX_ANISOTROPY_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"MAX_TEXTURE_MAX_ANISOTROPY_EXT") ) { MAX_TEXTURE_MAX_ANISOTROPY_EXT=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EXT_texture_filter_anisotropic_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("TEXTURE_MAX_ANISOTROPY_EXT",63,c1,6c,51));
	outFields->push(HX_("MAX_TEXTURE_MAX_ANISOTROPY_EXT",7e,54,e7,a3));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo EXT_texture_filter_anisotropic_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(EXT_texture_filter_anisotropic_obj,TEXTURE_MAX_ANISOTROPY_EXT),HX_("TEXTURE_MAX_ANISOTROPY_EXT",63,c1,6c,51)},
	{::hx::fsInt,(int)offsetof(EXT_texture_filter_anisotropic_obj,MAX_TEXTURE_MAX_ANISOTROPY_EXT),HX_("MAX_TEXTURE_MAX_ANISOTROPY_EXT",7e,54,e7,a3)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *EXT_texture_filter_anisotropic_obj_sStaticStorageInfo = 0;
#endif

static ::String EXT_texture_filter_anisotropic_obj_sMemberFields[] = {
	HX_("TEXTURE_MAX_ANISOTROPY_EXT",63,c1,6c,51),
	HX_("MAX_TEXTURE_MAX_ANISOTROPY_EXT",7e,54,e7,a3),
	::String(null()) };

::hx::Class EXT_texture_filter_anisotropic_obj::__mClass;

void EXT_texture_filter_anisotropic_obj::__register()
{
	EXT_texture_filter_anisotropic_obj _hx_dummy;
	EXT_texture_filter_anisotropic_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl.ext.EXT_texture_filter_anisotropic",6e,de,49,cd);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(EXT_texture_filter_anisotropic_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< EXT_texture_filter_anisotropic_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EXT_texture_filter_anisotropic_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EXT_texture_filter_anisotropic_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
