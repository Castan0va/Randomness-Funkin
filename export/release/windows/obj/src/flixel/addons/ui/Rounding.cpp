// Generated by Haxe 4.3.2
#include <hxcpp.h>

#ifndef INCLUDED_flixel_addons_ui_Rounding
#include <flixel/addons/ui/Rounding.h>
#endif
namespace flixel{
namespace addons{
namespace ui{

::flixel::addons::ui::Rounding Rounding_obj::Ceil;

::flixel::addons::ui::Rounding Rounding_obj::Floor;

::flixel::addons::ui::Rounding Rounding_obj::None;

::flixel::addons::ui::Rounding Rounding_obj::Round;

bool Rounding_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Ceil",25,4b,96,2c)) { outValue = Rounding_obj::Ceil; return true; }
	if (inName==HX_("Floor",ac,41,c4,95)) { outValue = Rounding_obj::Floor; return true; }
	if (inName==HX_("None",d8,3e,e3,33)) { outValue = Rounding_obj::None; return true; }
	if (inName==HX_("Round",2e,68,93,80)) { outValue = Rounding_obj::Round; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Rounding_obj)

int Rounding_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Ceil",25,4b,96,2c)) return 1;
	if (inName==HX_("Floor",ac,41,c4,95)) return 0;
	if (inName==HX_("None",d8,3e,e3,33)) return 3;
	if (inName==HX_("Round",2e,68,93,80)) return 2;
	return super::__FindIndex(inName);
}

int Rounding_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Ceil",25,4b,96,2c)) return 0;
	if (inName==HX_("Floor",ac,41,c4,95)) return 0;
	if (inName==HX_("None",d8,3e,e3,33)) return 0;
	if (inName==HX_("Round",2e,68,93,80)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val Rounding_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Ceil",25,4b,96,2c)) return Ceil;
	if (inName==HX_("Floor",ac,41,c4,95)) return Floor;
	if (inName==HX_("None",d8,3e,e3,33)) return None;
	if (inName==HX_("Round",2e,68,93,80)) return Round;
	return super::__Field(inName,inCallProp);
}

static ::String Rounding_obj_sStaticFields[] = {
	HX_("Floor",ac,41,c4,95),
	HX_("Ceil",25,4b,96,2c),
	HX_("Round",2e,68,93,80),
	HX_("None",d8,3e,e3,33),
	::String(null())
};

::hx::Class Rounding_obj::__mClass;

Dynamic __Create_Rounding_obj() { return new Rounding_obj; }

void Rounding_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("flixel.addons.ui.Rounding",a5,13,ac,48), ::hx::TCanCast< Rounding_obj >,Rounding_obj_sStaticFields,0,
	&__Create_Rounding_obj, &__Create,
	&super::__SGetClass(), &CreateRounding_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Rounding_obj::__GetStatic;
}

void Rounding_obj::__boot()
{
Ceil = ::hx::CreateConstEnum< Rounding_obj >(HX_("Ceil",25,4b,96,2c),1);
Floor = ::hx::CreateConstEnum< Rounding_obj >(HX_("Floor",ac,41,c4,95),0);
None = ::hx::CreateConstEnum< Rounding_obj >(HX_("None",d8,3e,e3,33),3);
Round = ::hx::CreateConstEnum< Rounding_obj >(HX_("Round",2e,68,93,80),2);
}


} // end namespace flixel
} // end namespace addons
} // end namespace ui
