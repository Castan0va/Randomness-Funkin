// Generated by Haxe 4.3.2
#ifndef INCLUDED_openfl_utils__internal_format_amf_AMFTools
#define INCLUDED_openfl_utils__internal_format_amf_AMFTools

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS5(openfl,utils,_internal,format,amf,AMFTools)
HX_DECLARE_CLASS5(openfl,utils,_internal,format,amf,AMFValue)

namespace openfl{
namespace utils{
namespace _internal{
namespace format{
namespace amf{


class HXCPP_CLASS_ATTRIBUTES AMFTools_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef AMFTools_obj OBJ_;
		AMFTools_obj();

	public:
		enum { _hx_ClassId = 0x5b06c781 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.utils._internal.format.amf.AMFTools")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.utils._internal.format.amf.AMFTools"); }

		inline static ::hx::ObjectPtr< AMFTools_obj > __new() {
			::hx::ObjectPtr< AMFTools_obj > __this = new AMFTools_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< AMFTools_obj > __alloc(::hx::Ctx *_hx_ctx) {
			AMFTools_obj *__this = (AMFTools_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AMFTools_obj), false, "openfl.utils._internal.format.amf.AMFTools"));
			*(void **)__this = AMFTools_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AMFTools_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AMFTools",e1,f5,1a,ac); }

		static  ::openfl::utils::_internal::format::amf::AMFValue encode( ::Dynamic o);
		static ::Dynamic encode_dyn();

		static  ::Dynamic number( ::openfl::utils::_internal::format::amf::AMFValue a);
		static ::Dynamic number_dyn();

		static ::String string( ::openfl::utils::_internal::format::amf::AMFValue a);
		static ::Dynamic string_dyn();

		static  ::haxe::ds::StringMap object( ::openfl::utils::_internal::format::amf::AMFValue a);
		static ::Dynamic object_dyn();

		static  ::Dynamic abool( ::openfl::utils::_internal::format::amf::AMFValue a);
		static ::Dynamic abool_dyn();

		static ::Array< ::Dynamic> array( ::openfl::utils::_internal::format::amf::AMFValue a);
		static ::Dynamic array_dyn();

		static  ::Dynamic unwrapValue( ::openfl::utils::_internal::format::amf::AMFValue val);
		static ::Dynamic unwrapValue_dyn();

};

} // end namespace openfl
} // end namespace utils
} // end namespace _internal
} // end namespace format
} // end namespace amf

#endif /* INCLUDED_openfl_utils__internal_format_amf_AMFTools */ 
