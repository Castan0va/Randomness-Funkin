// Generated by Haxe 4.3.2
#ifndef INCLUDED_flxanimate_effects_FlxTint
#define INCLUDED_flxanimate_effects_FlxTint

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flxanimate_effects_FlxColorEffect
#include <flxanimate/effects/FlxColorEffect.h>
#endif
HX_DECLARE_CLASS2(flxanimate,effects,FlxColorEffect)
HX_DECLARE_CLASS2(flxanimate,effects,FlxTint)

namespace flxanimate{
namespace effects{


class HXCPP_CLASS_ATTRIBUTES FlxTint_obj : public  ::flxanimate::effects::FlxColorEffect_obj
{
	public:
		typedef  ::flxanimate::effects::FlxColorEffect_obj super;
		typedef FlxTint_obj OBJ_;
		FlxTint_obj();

	public:
		enum { _hx_ClassId = 0x75bbd45a };

		void __construct(int tint,Float multiplier);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flxanimate.effects.FlxTint")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flxanimate.effects.FlxTint"); }
		static ::hx::ObjectPtr< FlxTint_obj > __new(int tint,Float multiplier);
		static ::hx::ObjectPtr< FlxTint_obj > __alloc(::hx::Ctx *_hx_ctx,int tint,Float multiplier);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxTint_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxTint",6d,06,55,dd); }

		int tint;
		void process();

		int set_tint(int value);
		::Dynamic set_tint_dyn();

};

} // end namespace flxanimate
} // end namespace effects

#endif /* INCLUDED_flxanimate_effects_FlxTint */ 
