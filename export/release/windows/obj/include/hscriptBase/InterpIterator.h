// Generated by Haxe 4.3.2
#ifndef INCLUDED_hscriptBase_InterpIterator
#define INCLUDED_hscriptBase_InterpIterator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hscriptBase,Interp)
HX_DECLARE_CLASS1(hscriptBase,InterpIterator)

namespace hscriptBase{


class HXCPP_CLASS_ATTRIBUTES InterpIterator_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef InterpIterator_obj OBJ_;
		InterpIterator_obj();

	public:
		enum { _hx_ClassId = 0x774c2e26 };

		void __construct( ::hscriptBase::Interp instance, ::Dynamic expr1, ::Dynamic expr2);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hscriptBase.InterpIterator")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"hscriptBase.InterpIterator"); }
		static ::hx::ObjectPtr< InterpIterator_obj > __new( ::hscriptBase::Interp instance, ::Dynamic expr1, ::Dynamic expr2);
		static ::hx::ObjectPtr< InterpIterator_obj > __alloc(::hx::Ctx *_hx_ctx, ::hscriptBase::Interp instance, ::Dynamic expr1, ::Dynamic expr2);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~InterpIterator_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("InterpIterator",02,08,b4,76); }

		int min;
		int max;
		bool hasNext();
		::Dynamic hasNext_dyn();

		int next();
		::Dynamic next_dyn();

};

} // end namespace hscriptBase

#endif /* INCLUDED_hscriptBase_InterpIterator */ 
