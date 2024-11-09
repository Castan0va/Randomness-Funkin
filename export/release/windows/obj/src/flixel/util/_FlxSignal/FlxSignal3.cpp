// Generated by Haxe 4.3.2
#include <hxcpp.h>

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxSignal
#include <flixel/util/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxBaseSignal
#include <flixel/util/_FlxSignal/FlxBaseSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal3
#include <flixel/util/_FlxSignal/FlxSignal3.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignalHandler
#include <flixel/util/_FlxSignal/FlxSignalHandler.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_540d1a6e6f832f77_251_new,"flixel.util._FlxSignal.FlxSignal3","new",0x3e934d64,"flixel.util._FlxSignal.FlxSignal3.new","flixel/util/FlxSignal.hx",251,0x3c758c5e)
HX_LOCAL_STACK_FRAME(_hx_pos_540d1a6e6f832f77_293_dispatch3,"flixel.util._FlxSignal.FlxSignal3","dispatch3",0x11c22c3d,"flixel.util._FlxSignal.FlxSignal3.dispatch3","flixel/util/FlxSignal.hx",293,0x3c758c5e)
namespace flixel{
namespace util{
namespace _FlxSignal{

void FlxSignal3_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_540d1a6e6f832f77_251_new)
HXLINE( 252)		super::__construct();
HXLINE( 253)		this->dispatch = this->dispatch3_dyn();
            	}

Dynamic FlxSignal3_obj::__CreateEmpty() { return new FlxSignal3_obj; }

void *FlxSignal3_obj::_hx_vtable = 0;

Dynamic FlxSignal3_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxSignal3_obj > _hx_result = new FlxSignal3_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxSignal3_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4515ccf2) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x4515ccf2;
	} else {
		return inClassId==(int)0x6170b6f6;
	}
}

void FlxSignal3_obj::dispatch3( ::Dynamic value1, ::Dynamic value2, ::Dynamic value3){
            	HX_STACKFRAME(&_hx_pos_540d1a6e6f832f77_293_dispatch3)
HXLINE( 294)		this->processingListeners = true;
HXLINE( 295)		{
HXLINE( 295)			int _g = 0;
HXDLIN( 295)			::Array< ::Dynamic> _g1 = this->handlers;
HXDLIN( 295)			while((_g < _g1->length)){
HXLINE( 295)				 ::flixel::util::_FlxSignal::FlxSignalHandler handler = _g1->__get(_g).StaticCast<  ::flixel::util::_FlxSignal::FlxSignalHandler >();
HXDLIN( 295)				_g = (_g + 1);
HXLINE( 297)				handler->listener(value1,value2,value3);
HXLINE( 299)				if (handler->dispatchOnce) {
HXLINE( 300)					if (this->processingListeners) {
HXLINE( 300)						this->pendingRemove->push(handler);
            					}
            					else {
HXLINE( 300)						this->handlers->remove(handler);
HXDLIN( 300)						handler->destroy();
            					}
            				}
            			}
            		}
HXLINE( 303)		this->processingListeners = false;
HXLINE( 305)		{
HXLINE( 305)			int _g2 = 0;
HXDLIN( 305)			::Array< ::Dynamic> _g3 = this->pendingRemove;
HXDLIN( 305)			while((_g2 < _g3->length)){
HXLINE( 305)				 ::flixel::util::_FlxSignal::FlxSignalHandler handler1 = _g3->__get(_g2).StaticCast<  ::flixel::util::_FlxSignal::FlxSignalHandler >();
HXDLIN( 305)				_g2 = (_g2 + 1);
HXLINE( 307)				if (this->processingListeners) {
HXLINE( 307)					this->pendingRemove->push(handler1);
            				}
            				else {
HXLINE( 307)					this->handlers->remove(handler1);
HXDLIN( 307)					handler1->destroy();
            				}
            			}
            		}
HXLINE( 309)		if ((this->pendingRemove->length > 0)) {
HXLINE( 310)			this->pendingRemove = ::Array_obj< ::Dynamic>::__new(0);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxSignal3_obj,dispatch3,(void))


::hx::ObjectPtr< FlxSignal3_obj > FlxSignal3_obj::__new() {
	::hx::ObjectPtr< FlxSignal3_obj > __this = new FlxSignal3_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< FlxSignal3_obj > FlxSignal3_obj::__alloc(::hx::Ctx *_hx_ctx) {
	FlxSignal3_obj *__this = (FlxSignal3_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxSignal3_obj), true, "flixel.util._FlxSignal.FlxSignal3"));
	*(void **)__this = FlxSignal3_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FlxSignal3_obj::FlxSignal3_obj()
{
}

::hx::Val FlxSignal3_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"dispatch3") ) { return ::hx::Val( dispatch3_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxSignal3_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *FlxSignal3_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxSignal3_obj_sMemberFields[] = {
	HX_("dispatch3",39,14,f1,78),
	::String(null()) };

::hx::Class FlxSignal3_obj::__mClass;

void FlxSignal3_obj::__register()
{
	FlxSignal3_obj _hx_dummy;
	FlxSignal3_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.util._FlxSignal.FlxSignal3",72,0b,c8,8f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxSignal3_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxSignal3_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxSignal3_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxSignal3_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace util
} // end namespace _FlxSignal
