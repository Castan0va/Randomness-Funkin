// Generated by Haxe 4.3.2
#ifndef INCLUDED_tea_backend_crypto_Base32
#define INCLUDED_tea_backend_crypto_Base32

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_crypto_BaseCode
#include <haxe/crypto/BaseCode.h>
#endif
HX_DECLARE_CLASS2(haxe,crypto,BaseCode)
HX_DECLARE_CLASS3(tea,backend,crypto,Base32)

namespace tea{
namespace backend{
namespace crypto{


class HXCPP_CLASS_ATTRIBUTES Base32_obj : public  ::haxe::crypto::BaseCode_obj
{
	public:
		typedef  ::haxe::crypto::BaseCode_obj super;
		typedef Base32_obj OBJ_;
		Base32_obj();

	public:
		enum { _hx_ClassId = 0x1af39d41 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="tea.backend.crypto.Base32")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"tea.backend.crypto.Base32"); }
		static ::hx::ObjectPtr< Base32_obj > __new();
		static ::hx::ObjectPtr< Base32_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Base32_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Base32",10,6f,bc,89); }

		static void __boot();
		static ::String CHARS;
};

} // end namespace tea
} // end namespace backend
} // end namespace crypto

#endif /* INCLUDED_tea_backend_crypto_Base32 */ 
