// Generated by Haxe 4.3.2
#ifndef INCLUDED_lime_graphics_opengl_ext_QCOM_perfmon_global_mode
#define INCLUDED_lime_graphics_opengl_ext_QCOM_perfmon_global_mode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_8723c151069cfd66_6_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,QCOM_perfmon_global_mode)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES QCOM_perfmon_global_mode_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef QCOM_perfmon_global_mode_obj OBJ_;
		QCOM_perfmon_global_mode_obj();

	public:
		enum { _hx_ClassId = 0x74dd6666 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.QCOM_perfmon_global_mode")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.QCOM_perfmon_global_mode"); }

		inline static ::hx::ObjectPtr< QCOM_perfmon_global_mode_obj > __new() {
			::hx::ObjectPtr< QCOM_perfmon_global_mode_obj > __this = new QCOM_perfmon_global_mode_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< QCOM_perfmon_global_mode_obj > __alloc(::hx::Ctx *_hx_ctx) {
			QCOM_perfmon_global_mode_obj *__this = (QCOM_perfmon_global_mode_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(QCOM_perfmon_global_mode_obj), false, "lime.graphics.opengl.ext.QCOM_perfmon_global_mode"));
			*(void **)__this = QCOM_perfmon_global_mode_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_8723c151069cfd66_6_new)
HXDLIN(   6)		( ( ::lime::graphics::opengl::ext::QCOM_perfmon_global_mode)(__this) )->PERFMON_GLOBAL_MODE_QCOM = 36768;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~QCOM_perfmon_global_mode_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("QCOM_perfmon_global_mode",74,f2,13,ad); }

		int PERFMON_GLOBAL_MODE_QCOM;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_QCOM_perfmon_global_mode */ 
