// Generated by Haxe 4.3.2
#ifndef INCLUDED_flixel_addons_ui_FlxUILine
#define INCLUDED_flixel_addons_ui_FlxUILine

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_addons_ui_FlxUISprite
#include <flixel/addons/ui/FlxUISprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IResizable
#include <flixel/addons/ui/interfaces/IResizable.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,IFlxBasic)
HX_DECLARE_CLASS1(flixel,IFlxSprite)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUILine)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUISprite)
HX_DECLARE_CLASS3(flixel,addons,ui,LineAxis)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIWidget)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IResizable)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace addons{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES FlxUILine_obj : public  ::flixel::addons::ui::FlxUISprite_obj
{
	public:
		typedef  ::flixel::addons::ui::FlxUISprite_obj super;
		typedef FlxUILine_obj OBJ_;
		FlxUILine_obj();

	public:
		enum { _hx_ClassId = 0x7ebfc4f3 };

		void __construct(int X,int Y, ::flixel::addons::ui::LineAxis Axis,Float Length,Float Thickness,int Color);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.ui.FlxUILine")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.ui.FlxUILine"); }
		static ::hx::ObjectPtr< FlxUILine_obj > __new(int X,int Y, ::flixel::addons::ui::LineAxis Axis,Float Length,Float Thickness,int Color);
		static ::hx::ObjectPtr< FlxUILine_obj > __alloc(::hx::Ctx *_hx_ctx,int X,int Y, ::flixel::addons::ui::LineAxis Axis,Float Length,Float Thickness,int Color);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxUILine_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("FlxUILine",3a,ce,7c,84); }

		 ::flixel::addons::ui::LineAxis axis;
		Float length;
		Float thickness;
		 ::flixel::addons::ui::LineAxis set_axis( ::flixel::addons::ui::LineAxis a);
		::Dynamic set_axis_dyn();

		Float set_length(Float l);
		::Dynamic set_length_dyn();

		Float set_thickness(Float t);
		::Dynamic set_thickness_dyn();

		void refresh();
		::Dynamic refresh_dyn();

		void resize(Float width,Float height);

};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_FlxUILine */ 
