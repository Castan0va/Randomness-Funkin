// Generated by Haxe 4.3.2
#include <hxcpp.h>

#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_NativeWindowBoundsEvent
#include <openfl/events/NativeWindowBoundsEvent.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9a121b49e54f4376_106_new,"openfl.events.NativeWindowBoundsEvent","new",0x10f59ed9,"openfl.events.NativeWindowBoundsEvent.new","openfl/events/NativeWindowBoundsEvent.hx",106,0x8fa658d7)
HX_LOCAL_STACK_FRAME(_hx_pos_9a121b49e54f4376_113_clone,"openfl.events.NativeWindowBoundsEvent","clone",0x1ff03216,"openfl.events.NativeWindowBoundsEvent.clone","openfl/events/NativeWindowBoundsEvent.hx",113,0x8fa658d7)
HX_LOCAL_STACK_FRAME(_hx_pos_9a121b49e54f4376_124_toString,"openfl.events.NativeWindowBoundsEvent","toString",0x25b0eb93,"openfl.events.NativeWindowBoundsEvent.toString","openfl/events/NativeWindowBoundsEvent.hx",124,0x8fa658d7)
static const ::String _hx_array_data_c97d3e67_3[] = {
	HX_("type",ba,f2,08,4d),HX_("bubbles",67,bb,56,61),HX_("cancelable",14,a0,79,c4),HX_("beforeBounds",54,38,81,92),HX_("afterBounds",b1,dd,7d,b7),
};
HX_LOCAL_STACK_FRAME(_hx_pos_9a121b49e54f4376_32_boot,"openfl.events.NativeWindowBoundsEvent","boot",0xbe0e5f99,"openfl.events.NativeWindowBoundsEvent.boot","openfl/events/NativeWindowBoundsEvent.hx",32,0x8fa658d7)
HX_LOCAL_STACK_FRAME(_hx_pos_9a121b49e54f4376_48_boot,"openfl.events.NativeWindowBoundsEvent","boot",0xbe0e5f99,"openfl.events.NativeWindowBoundsEvent.boot","openfl/events/NativeWindowBoundsEvent.hx",48,0x8fa658d7)
HX_LOCAL_STACK_FRAME(_hx_pos_9a121b49e54f4376_64_boot,"openfl.events.NativeWindowBoundsEvent","boot",0xbe0e5f99,"openfl.events.NativeWindowBoundsEvent.boot","openfl/events/NativeWindowBoundsEvent.hx",64,0x8fa658d7)
HX_LOCAL_STACK_FRAME(_hx_pos_9a121b49e54f4376_80_boot,"openfl.events.NativeWindowBoundsEvent","boot",0xbe0e5f99,"openfl.events.NativeWindowBoundsEvent.boot","openfl/events/NativeWindowBoundsEvent.hx",80,0x8fa658d7)
namespace openfl{
namespace events{

void NativeWindowBoundsEvent_obj::__construct(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable, ::openfl::geom::Rectangle beforeBounds, ::openfl::geom::Rectangle afterBounds){
            		bool bubbles = __o_bubbles.Default(false);
            		bool cancelable = __o_cancelable.Default(false);
            	HX_STACKFRAME(&_hx_pos_9a121b49e54f4376_106_new)
HXLINE( 107)		super::__construct(type,bubbles,cancelable);
HXLINE( 108)		this->beforeBounds = beforeBounds;
HXLINE( 109)		this->afterBounds = afterBounds;
            	}

Dynamic NativeWindowBoundsEvent_obj::__CreateEmpty() { return new NativeWindowBoundsEvent_obj; }

void *NativeWindowBoundsEvent_obj::_hx_vtable = 0;

Dynamic NativeWindowBoundsEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NativeWindowBoundsEvent_obj > _hx_result = new NativeWindowBoundsEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool NativeWindowBoundsEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x08ec4c31) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x08ec4c31;
	} else {
		return inClassId==(int)0x0d56a8b1;
	}
}

 ::openfl::events::Event NativeWindowBoundsEvent_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_9a121b49e54f4376_113_clone)
HXLINE( 114)		 ::openfl::events::NativeWindowBoundsEvent event =  ::openfl::events::NativeWindowBoundsEvent_obj::__alloc( HX_CTX ,this->type,this->bubbles,this->cancelable,this->beforeBounds,this->afterBounds);
HXLINE( 116)		event->target = this->target;
HXLINE( 117)		event->currentTarget = this->currentTarget;
HXLINE( 118)		event->eventPhase = this->eventPhase;
HXLINE( 119)		return event;
            	}


::String NativeWindowBoundsEvent_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_9a121b49e54f4376_124_toString)
HXDLIN( 124)		return this->_hx___formatToString(HX_("NativeWindowBoundsEvent",9e,77,6f,f1),::Array_obj< ::String >::fromData( _hx_array_data_c97d3e67_3,5));
            	}


::String NativeWindowBoundsEvent_obj::MOVING;

::String NativeWindowBoundsEvent_obj::MOVE;

::String NativeWindowBoundsEvent_obj::RESIZING;

::String NativeWindowBoundsEvent_obj::RESIZE;


::hx::ObjectPtr< NativeWindowBoundsEvent_obj > NativeWindowBoundsEvent_obj::__new(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable, ::openfl::geom::Rectangle beforeBounds, ::openfl::geom::Rectangle afterBounds) {
	::hx::ObjectPtr< NativeWindowBoundsEvent_obj > __this = new NativeWindowBoundsEvent_obj();
	__this->__construct(type,__o_bubbles,__o_cancelable,beforeBounds,afterBounds);
	return __this;
}

::hx::ObjectPtr< NativeWindowBoundsEvent_obj > NativeWindowBoundsEvent_obj::__alloc(::hx::Ctx *_hx_ctx,::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable, ::openfl::geom::Rectangle beforeBounds, ::openfl::geom::Rectangle afterBounds) {
	NativeWindowBoundsEvent_obj *__this = (NativeWindowBoundsEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NativeWindowBoundsEvent_obj), true, "openfl.events.NativeWindowBoundsEvent"));
	*(void **)__this = NativeWindowBoundsEvent_obj::_hx_vtable;
	__this->__construct(type,__o_bubbles,__o_cancelable,beforeBounds,afterBounds);
	return __this;
}

NativeWindowBoundsEvent_obj::NativeWindowBoundsEvent_obj()
{
}

void NativeWindowBoundsEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NativeWindowBoundsEvent);
	HX_MARK_MEMBER_NAME(beforeBounds,"beforeBounds");
	HX_MARK_MEMBER_NAME(afterBounds,"afterBounds");
	 ::openfl::events::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void NativeWindowBoundsEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(beforeBounds,"beforeBounds");
	HX_VISIT_MEMBER_NAME(afterBounds,"afterBounds");
	 ::openfl::events::Event_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val NativeWindowBoundsEvent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"afterBounds") ) { return ::hx::Val( afterBounds ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"beforeBounds") ) { return ::hx::Val( beforeBounds ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val NativeWindowBoundsEvent_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"afterBounds") ) { afterBounds=inValue.Cast<  ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"beforeBounds") ) { beforeBounds=inValue.Cast<  ::openfl::geom::Rectangle >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void NativeWindowBoundsEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("beforeBounds",54,38,81,92));
	outFields->push(HX_("afterBounds",b1,dd,7d,b7));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo NativeWindowBoundsEvent_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::geom::Rectangle */ ,(int)offsetof(NativeWindowBoundsEvent_obj,beforeBounds),HX_("beforeBounds",54,38,81,92)},
	{::hx::fsObject /*  ::openfl::geom::Rectangle */ ,(int)offsetof(NativeWindowBoundsEvent_obj,afterBounds),HX_("afterBounds",b1,dd,7d,b7)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo NativeWindowBoundsEvent_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &NativeWindowBoundsEvent_obj::MOVING,HX_("MOVING",8e,9e,32,7f)},
	{::hx::fsString,(void *) &NativeWindowBoundsEvent_obj::MOVE,HX_("MOVE",11,ab,21,33)},
	{::hx::fsString,(void *) &NativeWindowBoundsEvent_obj::RESIZING,HX_("RESIZING",31,b8,05,fb)},
	{::hx::fsString,(void *) &NativeWindowBoundsEvent_obj::RESIZE,HX_("RESIZE",f4,05,fe,ba)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String NativeWindowBoundsEvent_obj_sMemberFields[] = {
	HX_("beforeBounds",54,38,81,92),
	HX_("afterBounds",b1,dd,7d,b7),
	HX_("clone",5d,13,63,48),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

static void NativeWindowBoundsEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NativeWindowBoundsEvent_obj::MOVING,"MOVING");
	HX_MARK_MEMBER_NAME(NativeWindowBoundsEvent_obj::MOVE,"MOVE");
	HX_MARK_MEMBER_NAME(NativeWindowBoundsEvent_obj::RESIZING,"RESIZING");
	HX_MARK_MEMBER_NAME(NativeWindowBoundsEvent_obj::RESIZE,"RESIZE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void NativeWindowBoundsEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NativeWindowBoundsEvent_obj::MOVING,"MOVING");
	HX_VISIT_MEMBER_NAME(NativeWindowBoundsEvent_obj::MOVE,"MOVE");
	HX_VISIT_MEMBER_NAME(NativeWindowBoundsEvent_obj::RESIZING,"RESIZING");
	HX_VISIT_MEMBER_NAME(NativeWindowBoundsEvent_obj::RESIZE,"RESIZE");
};

#endif

::hx::Class NativeWindowBoundsEvent_obj::__mClass;

static ::String NativeWindowBoundsEvent_obj_sStaticFields[] = {
	HX_("MOVING",8e,9e,32,7f),
	HX_("MOVE",11,ab,21,33),
	HX_("RESIZING",31,b8,05,fb),
	HX_("RESIZE",f4,05,fe,ba),
	::String(null())
};

void NativeWindowBoundsEvent_obj::__register()
{
	NativeWindowBoundsEvent_obj _hx_dummy;
	NativeWindowBoundsEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.events.NativeWindowBoundsEvent",67,3e,7d,c9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = NativeWindowBoundsEvent_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(NativeWindowBoundsEvent_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(NativeWindowBoundsEvent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< NativeWindowBoundsEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = NativeWindowBoundsEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NativeWindowBoundsEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NativeWindowBoundsEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void NativeWindowBoundsEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_9a121b49e54f4376_32_boot)
HXDLIN(  32)		MOVING = HX_("moving",8e,f2,af,cc);
            	}
{
            	HX_STACKFRAME(&_hx_pos_9a121b49e54f4376_48_boot)
HXDLIN(  48)		MOVE = HX_("move",11,e3,60,48);
            	}
{
            	HX_STACKFRAME(&_hx_pos_9a121b49e54f4376_64_boot)
HXDLIN(  64)		RESIZING = HX_("resizing",31,28,80,a1);
            	}
{
            	HX_STACKFRAME(&_hx_pos_9a121b49e54f4376_80_boot)
HXDLIN(  80)		RESIZE = HX_("resize",f4,59,7b,08);
            	}
}

} // end namespace openfl
} // end namespace events
