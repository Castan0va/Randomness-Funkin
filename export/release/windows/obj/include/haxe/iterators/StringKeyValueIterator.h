// Generated by Haxe 4.3.2
#ifndef INCLUDED_haxe_iterators_StringKeyValueIterator
#define INCLUDED_haxe_iterators_StringKeyValueIterator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_f769983672387093_39_new)
HX_DECLARE_CLASS2(haxe,iterators,StringKeyValueIterator)

namespace haxe{
namespace iterators{


class HXCPP_CLASS_ATTRIBUTES StringKeyValueIterator_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef StringKeyValueIterator_obj OBJ_;
		StringKeyValueIterator_obj();

	public:
		enum { _hx_ClassId = 0x0a24f310 };

		void __construct(::String s);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.iterators.StringKeyValueIterator")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.iterators.StringKeyValueIterator"); }

		inline static ::hx::ObjectPtr< StringKeyValueIterator_obj > __new(::String s) {
			::hx::ObjectPtr< StringKeyValueIterator_obj > __this = new StringKeyValueIterator_obj();
			__this->__construct(s);
			return __this;
		}

		inline static ::hx::ObjectPtr< StringKeyValueIterator_obj > __alloc(::hx::Ctx *_hx_ctx,::String s) {
			StringKeyValueIterator_obj *__this = (StringKeyValueIterator_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(StringKeyValueIterator_obj), true, "haxe.iterators.StringKeyValueIterator"));
			*(void **)__this = StringKeyValueIterator_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_f769983672387093_39_new)
HXDLIN(  39)		( ( ::haxe::iterators::StringKeyValueIterator)(__this) )->s = s;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~StringKeyValueIterator_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("StringKeyValueIterator",71,f8,2e,4e); }

		::String s;
};

} // end namespace haxe
} // end namespace iterators

#endif /* INCLUDED_haxe_iterators_StringKeyValueIterator */ 
