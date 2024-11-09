// Generated by Haxe 4.3.2
#ifndef INCLUDED_flxanimate_display_FlxAnimateFilterRenderer
#define INCLUDED_flxanimate_display_FlxAnimateFilterRenderer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flxanimate,display,FlxAnimateFilterRenderer)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectRenderer)
HX_DECLARE_CLASS2(openfl,display,Graphics)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,OpenGLRenderer)
HX_DECLARE_CLASS2(openfl,display3D,Context3D)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,filters,BitmapFilter)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace flxanimate{
namespace display{


class HXCPP_CLASS_ATTRIBUTES FlxAnimateFilterRenderer_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxAnimateFilterRenderer_obj OBJ_;
		FlxAnimateFilterRenderer_obj();

	public:
		enum { _hx_ClassId = 0x58c662dd };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flxanimate.display.FlxAnimateFilterRenderer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flxanimate.display.FlxAnimateFilterRenderer"); }
		static ::hx::ObjectPtr< FlxAnimateFilterRenderer_obj > __new();
		static ::hx::ObjectPtr< FlxAnimateFilterRenderer_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxAnimateFilterRenderer_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxAnimateFilterRenderer",ea,85,40,af); }

		 ::openfl::display::OpenGLRenderer renderer;
		 ::openfl::display3D::Context3D context;
		void setRenderer( ::openfl::display::DisplayObjectRenderer renderer, ::openfl::geom::Rectangle rect);
		::Dynamic setRenderer_dyn();

		 ::openfl::display::BitmapData applyFilter( ::openfl::display::BitmapData bmp,::Array< ::Dynamic> filters, ::openfl::geom::Rectangle rect);
		::Dynamic applyFilter_dyn();

		 ::openfl::display::BitmapData applyBlend( ::Dynamic blend, ::openfl::display::BitmapData bitmap);
		::Dynamic applyBlend_dyn();

		 ::openfl::display::BitmapData graphicstoBitmapData( ::openfl::display::Graphics gfx);
		::Dynamic graphicstoBitmapData_dyn();

};

} // end namespace flxanimate
} // end namespace display

#endif /* INCLUDED_flxanimate_display_FlxAnimateFilterRenderer */ 
