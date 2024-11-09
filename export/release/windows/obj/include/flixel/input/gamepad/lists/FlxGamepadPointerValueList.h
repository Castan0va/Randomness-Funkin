// Generated by Haxe 4.3.2
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxGamepadPointerValueList
#define INCLUDED_flixel_input_gamepad_lists_FlxGamepadPointerValueList

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepad)
HX_DECLARE_CLASS4(flixel,input,gamepad,lists,FlxGamepadPointerValueList)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace input{
namespace gamepad{
namespace lists{


class HXCPP_CLASS_ATTRIBUTES FlxGamepadPointerValueList_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxGamepadPointerValueList_obj OBJ_;
		FlxGamepadPointerValueList_obj();

	public:
		enum { _hx_ClassId = 0x07140817 };

		void __construct( ::flixel::input::gamepad::FlxGamepad gamepad);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.input.gamepad.lists.FlxGamepadPointerValueList")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.input.gamepad.lists.FlxGamepadPointerValueList"); }
		static ::hx::ObjectPtr< FlxGamepadPointerValueList_obj > __new( ::flixel::input::gamepad::FlxGamepad gamepad);
		static ::hx::ObjectPtr< FlxGamepadPointerValueList_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::input::gamepad::FlxGamepad gamepad);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxGamepadPointerValueList_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxGamepadPointerValueList",81,f8,63,82); }

		 ::flixel::input::gamepad::FlxGamepad gamepad;
		Float get_X();
		::Dynamic get_X_dyn();

		Float get_Y();
		::Dynamic get_Y_dyn();

		Float getAxis(int id);
		::Dynamic getAxis_dyn();

		bool get_isSupported();
		::Dynamic get_isSupported_dyn();

};

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace lists

#endif /* INCLUDED_flixel_input_gamepad_lists_FlxGamepadPointerValueList */ 
