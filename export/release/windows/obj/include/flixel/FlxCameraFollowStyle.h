// Generated by Haxe 4.3.2
#ifndef INCLUDED_flixel_FlxCameraFollowStyle
#define INCLUDED_flixel_FlxCameraFollowStyle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(flixel,FlxCameraFollowStyle)
namespace flixel{


class FlxCameraFollowStyle_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef FlxCameraFollowStyle_obj OBJ_;

	public:
		FlxCameraFollowStyle_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("flixel.FlxCameraFollowStyle",fb,4d,2f,fa); }
		::String __ToString() const { return HX_("FlxCameraFollowStyle.",65,a9,b1,ad) + _hx_tag; }

		static ::flixel::FlxCameraFollowStyle LOCKON;
		static inline ::flixel::FlxCameraFollowStyle LOCKON_dyn() { return LOCKON; }
		static ::flixel::FlxCameraFollowStyle NO_DEAD_ZONE;
		static inline ::flixel::FlxCameraFollowStyle NO_DEAD_ZONE_dyn() { return NO_DEAD_ZONE; }
		static ::flixel::FlxCameraFollowStyle PLATFORMER;
		static inline ::flixel::FlxCameraFollowStyle PLATFORMER_dyn() { return PLATFORMER; }
		static ::flixel::FlxCameraFollowStyle SCREEN_BY_SCREEN;
		static inline ::flixel::FlxCameraFollowStyle SCREEN_BY_SCREEN_dyn() { return SCREEN_BY_SCREEN; }
		static ::flixel::FlxCameraFollowStyle TOPDOWN;
		static inline ::flixel::FlxCameraFollowStyle TOPDOWN_dyn() { return TOPDOWN; }
		static ::flixel::FlxCameraFollowStyle TOPDOWN_TIGHT;
		static inline ::flixel::FlxCameraFollowStyle TOPDOWN_TIGHT_dyn() { return TOPDOWN_TIGHT; }
};

} // end namespace flixel

#endif /* INCLUDED_flixel_FlxCameraFollowStyle */ 
