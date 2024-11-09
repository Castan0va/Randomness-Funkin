// Generated by Haxe 4.3.2
#ifndef INCLUDED_options_ModSettingsSubState
#define INCLUDED_options_ModSettingsSubState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_options_BaseOptionsMenu
#include <options/BaseOptionsMenu.h>
#endif
HX_DECLARE_CLASS1(backend,MusicBeatSubstate)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS1(flixel,FlxSubState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedContainer)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(options,BaseOptionsMenu)
HX_DECLARE_CLASS1(options,ModSettingsSubState)

namespace options{


class HXCPP_CLASS_ATTRIBUTES ModSettingsSubState_obj : public  ::options::BaseOptionsMenu_obj
{
	public:
		typedef  ::options::BaseOptionsMenu_obj super;
		typedef ModSettingsSubState_obj OBJ_;
		ModSettingsSubState_obj();

	public:
		enum { _hx_ClassId = 0x0a0d9144 };

		void __construct(::cpp::VirtualArray options,::String folder,::String name);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="options.ModSettingsSubState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"options.ModSettingsSubState"); }
		static ::hx::ObjectPtr< ModSettingsSubState_obj > __new(::cpp::VirtualArray options,::String folder,::String name);
		static ::hx::ObjectPtr< ModSettingsSubState_obj > __alloc(::hx::Ctx *_hx_ctx,::cpp::VirtualArray options,::String folder,::String name);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ModSettingsSubState_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ModSettingsSubState",36,af,82,1d); }

		 ::haxe::ds::StringMap save;
		::String folder;
		bool _crashed;
		void update(Float elapsed);

		void close();

};

} // end namespace options

#endif /* INCLUDED_options_ModSettingsSubState */ 
