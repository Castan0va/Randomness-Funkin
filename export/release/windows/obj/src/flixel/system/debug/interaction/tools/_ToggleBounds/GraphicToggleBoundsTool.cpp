// Generated by Haxe 4.3.2
#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_debug_interaction_tools__ToggleBounds_GraphicToggleBoundsTool
#include <flixel/system/debug/interaction/tools/_ToggleBounds/GraphicToggleBoundsTool.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_01921aa16a4e28a8_19_new,"flixel.system.debug.interaction.tools._ToggleBounds.GraphicToggleBoundsTool","new",0xf95ccfbe,"flixel.system.debug.interaction.tools._ToggleBounds.GraphicToggleBoundsTool.new","flixel/system/debug/interaction/tools/ToggleBounds.hx",19,0x3ea2f7db)
namespace flixel{
namespace _hx_system{
namespace debug{
namespace interaction{
namespace tools{
namespace _ToggleBounds{

void GraphicToggleBoundsTool_obj::__construct(int width,int height, ::Dynamic transparent, ::Dynamic fillColor){
            	HX_STACKFRAME(&_hx_pos_01921aa16a4e28a8_19_new)
HXDLIN(  19)		super::__construct(width,height,transparent,fillColor);
            	}

Dynamic GraphicToggleBoundsTool_obj::__CreateEmpty() { return new GraphicToggleBoundsTool_obj; }

void *GraphicToggleBoundsTool_obj::_hx_vtable = 0;

Dynamic GraphicToggleBoundsTool_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GraphicToggleBoundsTool_obj > _hx_result = new GraphicToggleBoundsTool_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool GraphicToggleBoundsTool_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x073e5103) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x073e5103;
	} else {
		return inClassId==(int)0x48e0ac8a;
	}
}


::hx::ObjectPtr< GraphicToggleBoundsTool_obj > GraphicToggleBoundsTool_obj::__new(int width,int height, ::Dynamic transparent, ::Dynamic fillColor) {
	::hx::ObjectPtr< GraphicToggleBoundsTool_obj > __this = new GraphicToggleBoundsTool_obj();
	__this->__construct(width,height,transparent,fillColor);
	return __this;
}

::hx::ObjectPtr< GraphicToggleBoundsTool_obj > GraphicToggleBoundsTool_obj::__alloc(::hx::Ctx *_hx_ctx,int width,int height, ::Dynamic transparent, ::Dynamic fillColor) {
	GraphicToggleBoundsTool_obj *__this = (GraphicToggleBoundsTool_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GraphicToggleBoundsTool_obj), true, "flixel.system.debug.interaction.tools._ToggleBounds.GraphicToggleBoundsTool"));
	*(void **)__this = GraphicToggleBoundsTool_obj::_hx_vtable;
	__this->__construct(width,height,transparent,fillColor);
	return __this;
}

GraphicToggleBoundsTool_obj::GraphicToggleBoundsTool_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *GraphicToggleBoundsTool_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *GraphicToggleBoundsTool_obj_sStaticStorageInfo = 0;
#endif

::hx::Class GraphicToggleBoundsTool_obj::__mClass;

void GraphicToggleBoundsTool_obj::__register()
{
	GraphicToggleBoundsTool_obj _hx_dummy;
	GraphicToggleBoundsTool_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.debug.interaction.tools._ToggleBounds.GraphicToggleBoundsTool",cc,d8,96,d4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< GraphicToggleBoundsTool_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GraphicToggleBoundsTool_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GraphicToggleBoundsTool_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace interaction
} // end namespace tools
} // end namespace _ToggleBounds
