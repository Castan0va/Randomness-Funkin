// Generated by Haxe 4.3.2
#ifndef INCLUDED_flxanimate_data__AnimationData_GlowFilter_Impl_
#define INCLUDED_flxanimate_data__AnimationData_GlowFilter_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flxanimate,data,_AnimationData,GlowFilter_Impl_)

namespace flxanimate{
namespace data{
namespace _AnimationData{


class HXCPP_CLASS_ATTRIBUTES GlowFilter_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef GlowFilter_Impl__obj OBJ_;
		GlowFilter_Impl__obj();

	public:
		enum { _hx_ClassId = 0x0f69ffb5 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flxanimate.data._AnimationData.GlowFilter_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"flxanimate.data._AnimationData.GlowFilter_Impl_"); }

		inline static ::hx::ObjectPtr< GlowFilter_Impl__obj > __new() {
			::hx::ObjectPtr< GlowFilter_Impl__obj > __this = new GlowFilter_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< GlowFilter_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			GlowFilter_Impl__obj *__this = (GlowFilter_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GlowFilter_Impl__obj), false, "flxanimate.data._AnimationData.GlowFilter_Impl_"));
			*(void **)__this = GlowFilter_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GlowFilter_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GlowFilter_Impl_",a5,8c,83,da); }

		static ::String get_C( ::Dynamic this1);
		static ::Dynamic get_C_dyn();

		static Float get_A( ::Dynamic this1);
		static ::Dynamic get_A_dyn();

		static Float get_STR( ::Dynamic this1);
		static ::Dynamic get_STR_dyn();

		static bool get_KK( ::Dynamic this1);
		static ::Dynamic get_KK_dyn();

		static bool get_IN( ::Dynamic this1);
		static ::Dynamic get_IN_dyn();

};

} // end namespace flxanimate
} // end namespace data
} // end namespace _AnimationData

#endif /* INCLUDED_flxanimate_data__AnimationData_GlowFilter_Impl_ */ 
