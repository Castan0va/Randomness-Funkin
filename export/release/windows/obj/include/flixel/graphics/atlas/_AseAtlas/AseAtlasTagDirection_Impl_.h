// Generated by Haxe 4.3.2
#ifndef INCLUDED_flixel_graphics_atlas__AseAtlas_AseAtlasTagDirection_Impl_
#define INCLUDED_flixel_graphics_atlas__AseAtlas_AseAtlasTagDirection_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(flixel,graphics,atlas,_AseAtlas,AseAtlasTagDirection_Impl_)

namespace flixel{
namespace graphics{
namespace atlas{
namespace _AseAtlas{


class HXCPP_CLASS_ATTRIBUTES AseAtlasTagDirection_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef AseAtlasTagDirection_Impl__obj OBJ_;
		AseAtlasTagDirection_Impl__obj();

	public:
		enum { _hx_ClassId = 0x7dd1d690 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.graphics.atlas._AseAtlas.AseAtlasTagDirection_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"flixel.graphics.atlas._AseAtlas.AseAtlasTagDirection_Impl_"); }

		inline static ::hx::ObjectPtr< AseAtlasTagDirection_Impl__obj > __new() {
			::hx::ObjectPtr< AseAtlasTagDirection_Impl__obj > __this = new AseAtlasTagDirection_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< AseAtlasTagDirection_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			AseAtlasTagDirection_Impl__obj *__this = (AseAtlasTagDirection_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AseAtlasTagDirection_Impl__obj), false, "flixel.graphics.atlas._AseAtlas.AseAtlasTagDirection_Impl_"));
			*(void **)__this = AseAtlasTagDirection_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AseAtlasTagDirection_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AseAtlasTagDirection_Impl_",3d,0e,7b,64); }

		static void __boot();
		static ::String FORWARD;
		static ::String REVERSE;
		static ::String PINGPONG;
		static ::String PINGPONG_REVERSE;
		static bool isForward(::String this1);
		static ::Dynamic isForward_dyn();

		static bool isReverse(::String this1);
		static ::Dynamic isReverse_dyn();

		static bool isPingPong(::String this1);
		static ::Dynamic isPingPong_dyn();

};

} // end namespace flixel
} // end namespace graphics
} // end namespace atlas
} // end namespace _AseAtlas

#endif /* INCLUDED_flixel_graphics_atlas__AseAtlas_AseAtlasTagDirection_Impl_ */ 
