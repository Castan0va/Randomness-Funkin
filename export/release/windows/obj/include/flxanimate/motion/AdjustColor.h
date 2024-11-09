// Generated by Haxe 4.3.2
#ifndef INCLUDED_flxanimate_motion_AdjustColor
#define INCLUDED_flxanimate_motion_AdjustColor

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flxanimate,motion,AdjustColor)
HX_DECLARE_CLASS2(flxanimate,motion,ColorMatrix)
HX_DECLARE_CLASS2(flxanimate,motion,DynamicMatrix)

namespace flxanimate{
namespace motion{


class HXCPP_CLASS_ATTRIBUTES AdjustColor_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef AdjustColor_obj OBJ_;
		AdjustColor_obj();

	public:
		enum { _hx_ClassId = 0x4ce41d2f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flxanimate.motion.AdjustColor")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flxanimate.motion.AdjustColor"); }
		static ::hx::ObjectPtr< AdjustColor_obj > __new();
		static ::hx::ObjectPtr< AdjustColor_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AdjustColor_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AdjustColor",34,c6,a7,3e); }

		static void __boot();
		static ::Array< Float > s_arrayOfDeltaIndex;
		 ::flxanimate::motion::ColorMatrix m_brightnessMatrix;
		 ::flxanimate::motion::ColorMatrix m_contrastMatrix;
		 ::flxanimate::motion::ColorMatrix m_saturationMatrix;
		 ::flxanimate::motion::ColorMatrix m_hueMatrix;
		 ::flxanimate::motion::ColorMatrix m_finalMatrix;
		Float brightness;
		Float contrast;
		Float saturation;
		Float hue;
		Float set_brightness(Float value);
		::Dynamic set_brightness_dyn();

		Float set_contrast(Float value);
		::Dynamic set_contrast_dyn();

		Float set_saturation(Float value);
		::Dynamic set_saturation_dyn();

		Float set_hue(Float value);
		::Dynamic set_hue_dyn();

		bool allValuesAreSet();
		::Dynamic allValuesAreSet_dyn();

		::Array< Float > calculateFinalFlatArray();
		::Dynamic calculateFinalFlatArray_dyn();

		bool calculateFinalMatrix();
		::Dynamic calculateFinalMatrix_dyn();

};

} // end namespace flxanimate
} // end namespace motion

#endif /* INCLUDED_flxanimate_motion_AdjustColor */ 
