// Generated by Haxe 4.3.2
#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_debug_interaction_tools__Transform_GraphicTransformCursorScaleY
#include <flixel/system/debug/interaction/tools/_Transform/GraphicTransformCursorScaleY.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3b7ca870e5742c90_25_new,"flixel.system.debug.interaction.tools._Transform.GraphicTransformCursorScaleY","new",0x69e275e5,"flixel.system.debug.interaction.tools._Transform.GraphicTransformCursorScaleY.new","flixel/system/debug/interaction/tools/Transform.hx",25,0xb006466c)
namespace flixel{
namespace _hx_system{
namespace debug{
namespace interaction{
namespace tools{
namespace _Transform{

void GraphicTransformCursorScaleY_obj::__construct(int width,int height, ::Dynamic transparent, ::Dynamic fillColor){
            	HX_STACKFRAME(&_hx_pos_3b7ca870e5742c90_25_new)
HXDLIN(  25)		super::__construct(width,height,transparent,fillColor);
            	}

Dynamic GraphicTransformCursorScaleY_obj::__CreateEmpty() { return new GraphicTransformCursorScaleY_obj; }

void *GraphicTransformCursorScaleY_obj::_hx_vtable = 0;

Dynamic GraphicTransformCursorScaleY_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GraphicTransformCursorScaleY_obj > _hx_result = new GraphicTransformCursorScaleY_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool GraphicTransformCursorScaleY_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x073e5103) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x073e5103;
	} else {
		return inClassId==(int)0x321a0f27;
	}
}


::hx::ObjectPtr< GraphicTransformCursorScaleY_obj > GraphicTransformCursorScaleY_obj::__new(int width,int height, ::Dynamic transparent, ::Dynamic fillColor) {
	::hx::ObjectPtr< GraphicTransformCursorScaleY_obj > __this = new GraphicTransformCursorScaleY_obj();
	__this->__construct(width,height,transparent,fillColor);
	return __this;
}

::hx::ObjectPtr< GraphicTransformCursorScaleY_obj > GraphicTransformCursorScaleY_obj::__alloc(::hx::Ctx *_hx_ctx,int width,int height, ::Dynamic transparent, ::Dynamic fillColor) {
	GraphicTransformCursorScaleY_obj *__this = (GraphicTransformCursorScaleY_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GraphicTransformCursorScaleY_obj), true, "flixel.system.debug.interaction.tools._Transform.GraphicTransformCursorScaleY"));
	*(void **)__this = GraphicTransformCursorScaleY_obj::_hx_vtable;
	__this->__construct(width,height,transparent,fillColor);
	return __this;
}

GraphicTransformCursorScaleY_obj::GraphicTransformCursorScaleY_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *GraphicTransformCursorScaleY_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *GraphicTransformCursorScaleY_obj_sStaticStorageInfo = 0;
#endif

::hx::Class GraphicTransformCursorScaleY_obj::__mClass;

void GraphicTransformCursorScaleY_obj::__register()
{
	GraphicTransformCursorScaleY_obj _hx_dummy;
	GraphicTransformCursorScaleY_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.debug.interaction.tools._Transform.GraphicTransformCursorScaleY",73,9f,d6,3a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< GraphicTransformCursorScaleY_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GraphicTransformCursorScaleY_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GraphicTransformCursorScaleY_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace interaction
} // end namespace tools
} // end namespace _Transform
