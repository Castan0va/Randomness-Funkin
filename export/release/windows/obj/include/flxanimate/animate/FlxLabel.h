// Generated by Haxe 4.3.2
#ifndef INCLUDED_flxanimate_animate_FlxLabel
#define INCLUDED_flxanimate_animate_FlxLabel

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flxanimate,animate,FlxLabel)

namespace flxanimate{
namespace animate{


class HXCPP_CLASS_ATTRIBUTES FlxLabel_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxLabel_obj OBJ_;
		FlxLabel_obj();

	public:
		enum { _hx_ClassId = 0x587b1c54 };

		void __construct(::String name,int frame);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flxanimate.animate.FlxLabel")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flxanimate.animate.FlxLabel"); }
		static ::hx::ObjectPtr< FlxLabel_obj > __new(::String name,int frame);
		static ::hx::ObjectPtr< FlxLabel_obj > __alloc(::hx::Ctx *_hx_ctx,::String name,int frame);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxLabel_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxLabel",42,18,89,2c); }

		int frame;
		::String name;
		::Array< ::Dynamic> callbacks;
		void fireCallbacks();
		::Dynamic fireCallbacks_dyn();

		void removeCallbacks();
		::Dynamic removeCallbacks_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

};

} // end namespace flxanimate
} // end namespace animate

#endif /* INCLUDED_flxanimate_animate_FlxLabel */ 
