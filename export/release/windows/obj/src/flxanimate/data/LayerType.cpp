// Generated by Haxe 4.3.2
#include <hxcpp.h>

#ifndef INCLUDED_flxanimate_data_LayerType
#include <flxanimate/data/LayerType.h>
#endif
namespace flxanimate{
namespace data{

::flxanimate::data::LayerType LayerType_obj::Clipped(::String layer)
{
	return ::hx::CreateEnum< LayerType_obj >(HX_("Clipped",df,2f,19,d0),2,1)->_hx_init(0,layer);
}

::flxanimate::data::LayerType LayerType_obj::Clipper;

::flxanimate::data::LayerType LayerType_obj::Folder;

::flxanimate::data::LayerType LayerType_obj::Normal;

bool LayerType_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Clipped",df,2f,19,d0)) { outValue = LayerType_obj::Clipped_dyn(); return true; }
	if (inName==HX_("Clipper",ed,2f,19,d0)) { outValue = LayerType_obj::Clipper; return true; }
	if (inName==HX_("Folder",ce,ea,24,2e)) { outValue = LayerType_obj::Folder; return true; }
	if (inName==HX_("Normal",47,e6,fd,64)) { outValue = LayerType_obj::Normal; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(LayerType_obj)

int LayerType_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Clipped",df,2f,19,d0)) return 2;
	if (inName==HX_("Clipper",ed,2f,19,d0)) return 1;
	if (inName==HX_("Folder",ce,ea,24,2e)) return 3;
	if (inName==HX_("Normal",47,e6,fd,64)) return 0;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(LayerType_obj,Clipped,return)

int LayerType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Clipped",df,2f,19,d0)) return 1;
	if (inName==HX_("Clipper",ed,2f,19,d0)) return 0;
	if (inName==HX_("Folder",ce,ea,24,2e)) return 0;
	if (inName==HX_("Normal",47,e6,fd,64)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val LayerType_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Clipped",df,2f,19,d0)) return Clipped_dyn();
	if (inName==HX_("Clipper",ed,2f,19,d0)) return Clipper;
	if (inName==HX_("Folder",ce,ea,24,2e)) return Folder;
	if (inName==HX_("Normal",47,e6,fd,64)) return Normal;
	return super::__Field(inName,inCallProp);
}

static ::String LayerType_obj_sStaticFields[] = {
	HX_("Normal",47,e6,fd,64),
	HX_("Clipper",ed,2f,19,d0),
	HX_("Clipped",df,2f,19,d0),
	HX_("Folder",ce,ea,24,2e),
	::String(null())
};

::hx::Class LayerType_obj::__mClass;

Dynamic __Create_LayerType_obj() { return new LayerType_obj; }

void LayerType_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("flxanimate.data.LayerType",e6,56,2a,3a), ::hx::TCanCast< LayerType_obj >,LayerType_obj_sStaticFields,0,
	&__Create_LayerType_obj, &__Create,
	&super::__SGetClass(), &CreateLayerType_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &LayerType_obj::__GetStatic;
}

void LayerType_obj::__boot()
{
Clipper = ::hx::CreateConstEnum< LayerType_obj >(HX_("Clipper",ed,2f,19,d0),1);
Folder = ::hx::CreateConstEnum< LayerType_obj >(HX_("Folder",ce,ea,24,2e),3);
Normal = ::hx::CreateConstEnum< LayerType_obj >(HX_("Normal",47,e6,fd,64),0);
}


} // end namespace flxanimate
} // end namespace data
