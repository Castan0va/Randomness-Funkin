// Generated by Haxe 4.3.2
#include <hxcpp.h>

#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif
#ifndef INCLUDED_openfl_display__internal_DrawCommandBuffer
#include <openfl/display/_internal/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl_display__internal_DrawCommandReader
#include <openfl/display/_internal/DrawCommandReader.h>
#endif
#ifndef INCLUDED_openfl_display__internal__DrawCommandReader_DrawQuadsView_Impl_
#include <openfl/display/_internal/_DrawCommandReader/DrawQuadsView_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_f1d9779608552548_622__new,"openfl.display._internal._DrawCommandReader.DrawQuadsView_Impl_","_new",0x21cd6e09,"openfl.display._internal._DrawCommandReader.DrawQuadsView_Impl_._new","openfl/display/_internal/DrawCommandReader.hx",622,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_f1d9779608552548_631_get_rects,"openfl.display._internal._DrawCommandReader.DrawQuadsView_Impl_","get_rects",0x64acd57e,"openfl.display._internal._DrawCommandReader.DrawQuadsView_Impl_.get_rects","openfl/display/_internal/DrawCommandReader.hx",631,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_f1d9779608552548_638_get_indices,"openfl.display._internal._DrawCommandReader.DrawQuadsView_Impl_","get_indices",0x38b63396,"openfl.display._internal._DrawCommandReader.DrawQuadsView_Impl_.get_indices","openfl/display/_internal/DrawCommandReader.hx",638,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_f1d9779608552548_645_get_transforms,"openfl.display._internal._DrawCommandReader.DrawQuadsView_Impl_","get_transforms",0x602cd478,"openfl.display._internal._DrawCommandReader.DrawQuadsView_Impl_.get_transforms","openfl/display/_internal/DrawCommandReader.hx",645,0x29f77eb3)
namespace openfl{
namespace display{
namespace _internal{
namespace _DrawCommandReader{

void DrawQuadsView_Impl__obj::__construct() { }

Dynamic DrawQuadsView_Impl__obj::__CreateEmpty() { return new DrawQuadsView_Impl__obj; }

void *DrawQuadsView_Impl__obj::_hx_vtable = 0;

Dynamic DrawQuadsView_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DrawQuadsView_Impl__obj > _hx_result = new DrawQuadsView_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DrawQuadsView_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6b8a0478;
}

 ::openfl::display::_internal::DrawCommandReader DrawQuadsView_Impl__obj::_new( ::openfl::display::_internal::DrawCommandReader d){
            	HX_STACKFRAME(&_hx_pos_f1d9779608552548_622__new)
HXDLIN( 622)		return d;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawQuadsView_Impl__obj,_new,return )

 ::openfl::_Vector::FloatVector DrawQuadsView_Impl__obj::get_rects( ::openfl::display::_internal::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_f1d9779608552548_631_get_rects)
HXDLIN( 631)		return ( ( ::openfl::_Vector::FloatVector)(this1->buffer->o->__get(this1->oPos)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawQuadsView_Impl__obj,get_rects,return )

 ::openfl::_Vector::IntVector DrawQuadsView_Impl__obj::get_indices( ::openfl::display::_internal::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_f1d9779608552548_638_get_indices)
HXDLIN( 638)		return ( ( ::openfl::_Vector::IntVector)(this1->buffer->o->__get((this1->oPos + 1))) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawQuadsView_Impl__obj,get_indices,return )

 ::openfl::_Vector::FloatVector DrawQuadsView_Impl__obj::get_transforms( ::openfl::display::_internal::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_f1d9779608552548_645_get_transforms)
HXDLIN( 645)		return ( ( ::openfl::_Vector::FloatVector)(this1->buffer->o->__get((this1->oPos + 2))) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawQuadsView_Impl__obj,get_transforms,return )


DrawQuadsView_Impl__obj::DrawQuadsView_Impl__obj()
{
}

bool DrawQuadsView_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_rects") ) { outValue = get_rects_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_indices") ) { outValue = get_indices_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_transforms") ) { outValue = get_transforms_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *DrawQuadsView_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *DrawQuadsView_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class DrawQuadsView_Impl__obj::__mClass;

static ::String DrawQuadsView_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("get_rects",26,8f,65,2a),
	HX_("get_indices",3e,a7,4e,69),
	HX_("get_transforms",d0,19,2a,11),
	::String(null())
};

void DrawQuadsView_Impl__obj::__register()
{
	DrawQuadsView_Impl__obj _hx_dummy;
	DrawQuadsView_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal._DrawCommandReader.DrawQuadsView_Impl_",c6,c8,14,dc);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DrawQuadsView_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(DrawQuadsView_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< DrawQuadsView_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DrawQuadsView_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DrawQuadsView_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal
} // end namespace _DrawCommandReader
