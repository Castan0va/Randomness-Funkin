// Generated by Haxe 4.3.2
#ifndef INCLUDED_flixel_group__FlxSpriteContainer_SpriteContainer
#define INCLUDED_flixel_group__FlxSpriteContainer_SpriteContainer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_group_FlxTypedContainer
#include <flixel/group/FlxTypedContainer.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,group,FlxTypedContainer)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteContainer)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS3(flixel,group,_FlxSpriteContainer,SpriteContainer)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace group{
namespace _FlxSpriteContainer{


class HXCPP_CLASS_ATTRIBUTES SpriteContainer_obj : public  ::flixel::group::FlxTypedContainer_obj
{
	public:
		typedef  ::flixel::group::FlxTypedContainer_obj super;
		typedef SpriteContainer_obj OBJ_;
		SpriteContainer_obj();

	public:
		enum { _hx_ClassId = 0x7bcb14f6 };

		void __construct( ::flixel::group::FlxTypedSpriteContainer parent,int maxSize);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.group._FlxSpriteContainer.SpriteContainer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.group._FlxSpriteContainer.SpriteContainer"); }
		static ::hx::ObjectPtr< SpriteContainer_obj > __new( ::flixel::group::FlxTypedSpriteContainer parent,int maxSize);
		static ::hx::ObjectPtr< SpriteContainer_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::group::FlxTypedSpriteContainer parent,int maxSize);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SpriteContainer_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SpriteContainer",5c,58,15,24); }

		 ::flixel::group::FlxTypedSpriteContainer parentSprite;
		 ::flixel::group::FlxTypedContainer get_container();

		::Array< ::Dynamic> getCamerasLegacy();

		::Array< ::Dynamic> getCameras();

};

} // end namespace flixel
} // end namespace group
} // end namespace _FlxSpriteContainer

#endif /* INCLUDED_flixel_group__FlxSpriteContainer_SpriteContainer */ 
