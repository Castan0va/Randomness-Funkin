// Generated by Haxe 4.3.2
#ifndef INCLUDED_states_stages_objects_DadBattleFog
#define INCLUDED_states_stages_objects_DadBattleFog

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS3(states,stages,objects,DadBattleFog)

namespace states{
namespace stages{
namespace objects{


class HXCPP_CLASS_ATTRIBUTES DadBattleFog_obj : public  ::flixel::group::FlxTypedSpriteGroup_obj
{
	public:
		typedef  ::flixel::group::FlxTypedSpriteGroup_obj super;
		typedef DadBattleFog_obj OBJ_;
		DadBattleFog_obj();

	public:
		enum { _hx_ClassId = 0x53cc277c };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="states.stages.objects.DadBattleFog")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"states.stages.objects.DadBattleFog"); }
		static ::hx::ObjectPtr< DadBattleFog_obj > __new();
		static ::hx::ObjectPtr< DadBattleFog_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DadBattleFog_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DadBattleFog",7f,41,ef,21); }

};

} // end namespace states
} // end namespace stages
} // end namespace objects

#endif /* INCLUDED_states_stages_objects_DadBattleFog */ 
