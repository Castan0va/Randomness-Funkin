// Generated by Haxe 4.3.2
#ifndef INCLUDED_lime__internal_backend_native_RenderEventInfo
#define INCLUDED_lime__internal_backend_native_RenderEventInfo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_e2a4e584e1f8ec25_828_new)
HX_DECLARE_CLASS4(lime,_internal,backend,native,RenderEventInfo)

namespace lime{
namespace _internal{
namespace backend{
namespace native{


class HXCPP_CLASS_ATTRIBUTES RenderEventInfo_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef RenderEventInfo_obj OBJ_;
		RenderEventInfo_obj();

	public:
		enum { _hx_ClassId = 0x7660a6a6 };

		void __construct( ::Dynamic type);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime._internal.backend.native.RenderEventInfo")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime._internal.backend.native.RenderEventInfo"); }

		inline static ::hx::ObjectPtr< RenderEventInfo_obj > __new( ::Dynamic type) {
			::hx::ObjectPtr< RenderEventInfo_obj > __this = new RenderEventInfo_obj();
			__this->__construct(type);
			return __this;
		}

		inline static ::hx::ObjectPtr< RenderEventInfo_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic type) {
			RenderEventInfo_obj *__this = (RenderEventInfo_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(RenderEventInfo_obj), false, "lime._internal.backend.native.RenderEventInfo"));
			*(void **)__this = RenderEventInfo_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_e2a4e584e1f8ec25_828_new)
HXDLIN( 828)		( ( ::lime::_internal::backend::native::RenderEventInfo)(__this) )->type = ( (int)(type) );
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~RenderEventInfo_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("RenderEventInfo",52,a3,fc,3d); }

		int type;
		 ::lime::_internal::backend::native::RenderEventInfo clone();
		::Dynamic clone_dyn();

};

} // end namespace lime
} // end namespace _internal
} // end namespace backend
} // end namespace native

#endif /* INCLUDED_lime__internal_backend_native_RenderEventInfo */ 
