// Generated by Haxe 4.3.2
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTweenManager
#include <flixel/tweens/FlxTweenManager.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_LinearPath
#include <flixel/tweens/motion/LinearPath.h>
#endif
#ifndef INCLUDED_flixel_tweens_motion_Motion
#include <flixel/tweens/motion/Motion.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool
#include <flixel/util/FlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a5dbf3466a77d348_11_new,"flixel.tweens.motion.LinearPath","new",0x6d0ffb80,"flixel.tweens.motion.LinearPath.new","flixel/tweens/motion/LinearPath.hx",11,0x519b896f)
static const Float _hx_array_data_a8147b8e_1[] = {
	(Float)0,
};
static const Float _hx_array_data_a8147b8e_2[] = {
	(Float)0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_a5dbf3466a77d348_41_destroy,"flixel.tweens.motion.LinearPath","destroy",0x4706681a,"flixel.tweens.motion.LinearPath.destroy","flixel/tweens/motion/LinearPath.hx",41,0x519b896f)
HX_LOCAL_STACK_FRAME(_hx_pos_a5dbf3466a77d348_60_setMotion,"flixel.tweens.motion.LinearPath","setMotion",0x1a623e98,"flixel.tweens.motion.LinearPath.setMotion","flixel/tweens/motion/LinearPath.hx",60,0x519b896f)
HX_LOCAL_STACK_FRAME(_hx_pos_a5dbf3466a77d348_79_addPoint,"flixel.tweens.motion.LinearPath","addPoint",0x4da05b4f,"flixel.tweens.motion.LinearPath.addPoint","flixel/tweens/motion/LinearPath.hx",79,0x519b896f)
HX_LOCAL_STACK_FRAME(_hx_pos_a5dbf3466a77d348_90_getPoint,"flixel.tweens.motion.LinearPath","getPoint",0x341a44ba,"flixel.tweens.motion.LinearPath.getPoint","flixel/tweens/motion/LinearPath.hx",90,0x519b896f)
HX_LOCAL_STACK_FRAME(_hx_pos_a5dbf3466a77d348_99_start,"flixel.tweens.motion.LinearPath","start",0xb880a782,"flixel.tweens.motion.LinearPath.start","flixel/tweens/motion/LinearPath.hx",99,0x519b896f)
HX_LOCAL_STACK_FRAME(_hx_pos_a5dbf3466a77d348_106_update,"flixel.tweens.motion.LinearPath","update",0x391d0ee9,"flixel.tweens.motion.LinearPath.update","flixel/tweens/motion/LinearPath.hx",106,0x519b896f)
HX_LOCAL_STACK_FRAME(_hx_pos_a5dbf3466a77d348_168_updatePath,"flixel.tweens.motion.LinearPath","updatePath",0x8544492e,"flixel.tweens.motion.LinearPath.updatePath","flixel/tweens/motion/LinearPath.hx",168,0x519b896f)
namespace flixel{
namespace tweens{
namespace motion{

void LinearPath_obj::__construct( ::Dynamic Options, ::flixel::tweens::FlxTweenManager manager){
            	HX_STACKFRAME(&_hx_pos_a5dbf3466a77d348_11_new)
HXLINE(  24)		this->_index = 0;
HXLINE(  23)		this->_speed = ((Float)0);
HXLINE(  16)		this->distance = ((Float)0);
HXLINE(  33)		super::__construct(Options,manager);
HXLINE(  35)		this->points = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  36)		this->_pointD = ::Array_obj< Float >::fromData( _hx_array_data_a8147b8e_1,1);
HXLINE(  37)		this->_pointT = ::Array_obj< Float >::fromData( _hx_array_data_a8147b8e_2,1);
            	}

Dynamic LinearPath_obj::__CreateEmpty() { return new LinearPath_obj; }

void *LinearPath_obj::_hx_vtable = 0;

Dynamic LinearPath_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LinearPath_obj > _hx_result = new LinearPath_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool LinearPath_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x104846c5) {
		if (inClassId<=(int)0x06fcf94c) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x06fcf94c;
		} else {
			return inClassId==(int)0x104846c5;
		}
	} else {
		return inClassId==(int)0x21dceb90;
	}
}

void LinearPath_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_a5dbf3466a77d348_41_destroy)
HXLINE(  42)		this->super::destroy();
HXLINE(  44)		{
HXLINE(  44)			int _g = 0;
HXDLIN(  44)			::Array< ::Dynamic> _g1 = this->points;
HXDLIN(  44)			while((_g < _g1->length)){
HXLINE(  44)				 ::flixel::math::FlxBasePoint point = _g1->__get(_g).StaticCast<  ::flixel::math::FlxBasePoint >();
HXDLIN(  44)				_g = (_g + 1);
HXLINE(  46)				point = ( ( ::flixel::math::FlxBasePoint)(::flixel::util::FlxDestroyUtil_obj::put(point)) );
            			}
            		}
HXLINE(  48)		this->_last = ( ( ::flixel::math::FlxBasePoint)(::flixel::util::FlxDestroyUtil_obj::put(this->_last)) );
HXLINE(  49)		this->_prevPoint = ( ( ::flixel::math::FlxBasePoint)(::flixel::util::FlxDestroyUtil_obj::put(this->_prevPoint)) );
HXLINE(  50)		this->_nextPoint = ( ( ::flixel::math::FlxBasePoint)(::flixel::util::FlxDestroyUtil_obj::put(this->_nextPoint)) );
            	}


 ::flixel::tweens::motion::LinearPath LinearPath_obj::setMotion(Float DurationOrSpeed,::hx::Null< bool >  __o_UseDuration){
            		bool UseDuration = __o_UseDuration.Default(true);
            	HX_STACKFRAME(&_hx_pos_a5dbf3466a77d348_60_setMotion)
HXLINE(  61)		this->updatePath();
HXLINE(  63)		if (UseDuration) {
HXLINE(  65)			this->duration = DurationOrSpeed;
HXLINE(  66)			this->_speed = (this->distance / DurationOrSpeed);
            		}
            		else {
HXLINE(  70)			this->duration = (this->distance / DurationOrSpeed);
HXLINE(  71)			this->_speed = DurationOrSpeed;
            		}
HXLINE(  74)		this->start();
HXLINE(  75)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC2(LinearPath_obj,setMotion,return )

 ::flixel::tweens::motion::LinearPath LinearPath_obj::addPoint(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y){
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            	HX_STACKFRAME(&_hx_pos_a5dbf3466a77d348_79_addPoint)
HXLINE(  80)		if (::hx::IsNotNull( this->_last )) {
HXLINE(  82)			 ::flixel::tweens::motion::LinearPath _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  82)			_hx_tmp->distance = (_hx_tmp->distance + ::Math_obj::sqrt((((x - this->_last->x) * (x - this->_last->x)) + ((y - this->_last->y) * (y - this->_last->y)))));
HXLINE(  83)			this->_pointD[this->points->length] = this->distance;
            		}
HXLINE(  85)		::Array< ::Dynamic> _hx_tmp1 = this->points;
HXDLIN(  85)		int _hx_tmp2 = this->points->length;
HXDLIN(  85)		 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(x,y);
HXDLIN(  85)		point->_inPool = false;
HXDLIN(  85)		_hx_tmp1[_hx_tmp2] = (this->_last = point);
HXLINE(  86)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC2(LinearPath_obj,addPoint,return )

 ::flixel::math::FlxBasePoint LinearPath_obj::getPoint(::hx::Null< int >  __o_index){
            		int index = __o_index.Default(0);
            	HX_STACKFRAME(&_hx_pos_a5dbf3466a77d348_90_getPoint)
HXLINE(  91)		if ((this->points->length == 0)) {
HXLINE(  93)			HX_STACK_DO_THROW(HX_("No points have been added to the path yet.",c7,a0,28,83));
            		}
HXLINE(  95)		return this->points->__get(::hx::Mod(index,this->points->length)).StaticCast<  ::flixel::math::FlxBasePoint >();
            	}


HX_DEFINE_DYNAMIC_FUNC1(LinearPath_obj,getPoint,return )

 ::flixel::tweens::FlxTween LinearPath_obj::start(){
            	HX_STACKFRAME(&_hx_pos_a5dbf3466a77d348_99_start)
HXLINE( 100)		int _hx_tmp;
HXDLIN( 100)		if (this->backward) {
HXLINE( 100)			_hx_tmp = (this->points->length - 1);
            		}
            		else {
HXLINE( 100)			_hx_tmp = 0;
            		}
HXDLIN( 100)		this->_index = _hx_tmp;
HXLINE( 101)		this->super::start();
HXLINE( 102)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


void LinearPath_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_a5dbf3466a77d348_106_update)
HXLINE( 107)		this->super::update(elapsed);
HXLINE( 108)		Float td;
HXLINE( 109)		Float tt;
HXLINE( 111)		if (::hx::IsNull( this->points )) {
HXLINE( 112)			return;
            		}
HXLINE( 114)		if (!(this->backward)) {
HXLINE( 116)			if ((this->_index < (this->points->length - 1))) {
HXLINE( 118)				while((this->scale > this->_pointT->__get((this->_index + 1)))){
HXLINE( 120)					this->_index++;
HXLINE( 121)					if ((this->_index == (this->points->length - 1))) {
HXLINE( 123)						 ::flixel::tweens::motion::LinearPath _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 123)						_hx_tmp->_index = (_hx_tmp->_index - 1);
HXLINE( 124)						goto _hx_goto_9;
            					}
            				}
            				_hx_goto_9:;
            			}
HXLINE( 129)			td = this->_pointT->__get(this->_index);
HXLINE( 130)			tt = (this->_pointT->__get((this->_index + 1)) - td);
HXLINE( 131)			td = ((this->scale - td) / tt);
HXLINE( 132)			this->_prevPoint = this->points->__get(this->_index).StaticCast<  ::flixel::math::FlxBasePoint >();
HXLINE( 133)			this->_nextPoint = this->points->__get((this->_index + 1)).StaticCast<  ::flixel::math::FlxBasePoint >();
HXLINE( 134)			this->x = (this->_prevPoint->x + ((this->_nextPoint->x - this->_prevPoint->x) * td));
HXLINE( 135)			this->y = (this->_prevPoint->y + ((this->_nextPoint->y - this->_prevPoint->y) * td));
            		}
            		else {
HXLINE( 139)			if ((this->_index > 0)) {
HXLINE( 141)				while((this->scale < this->_pointT->__get((this->_index - 1)))){
HXLINE( 143)					 ::flixel::tweens::motion::LinearPath _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 143)					_hx_tmp1->_index = (_hx_tmp1->_index - 1);
HXLINE( 144)					if ((this->_index == 0)) {
HXLINE( 146)						 ::flixel::tweens::motion::LinearPath _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 146)						_hx_tmp2->_index = (_hx_tmp2->_index + 1);
HXLINE( 147)						goto _hx_goto_10;
            					}
            				}
            				_hx_goto_10:;
            			}
HXLINE( 152)			td = this->_pointT->__get(this->_index);
HXLINE( 153)			tt = (this->_pointT->__get((this->_index - 1)) - td);
HXLINE( 154)			td = ((this->scale - td) / tt);
HXLINE( 155)			this->_prevPoint = this->points->__get(this->_index).StaticCast<  ::flixel::math::FlxBasePoint >();
HXLINE( 156)			this->_nextPoint = this->points->__get((this->_index - 1)).StaticCast<  ::flixel::math::FlxBasePoint >();
HXLINE( 157)			this->x = (this->_prevPoint->x + ((this->_nextPoint->x - this->_prevPoint->x) * td));
HXLINE( 158)			this->y = (this->_prevPoint->y + ((this->_nextPoint->y - this->_prevPoint->y) * td));
            		}
HXLINE( 161)		this->super::postUpdate();
            	}


void LinearPath_obj::updatePath(){
            	HX_STACKFRAME(&_hx_pos_a5dbf3466a77d348_168_updatePath)
HXLINE( 169)		if ((this->points->length < 2)) {
HXLINE( 170)			HX_STACK_DO_THROW(HX_("A LinearPath must have at least 2 points to operate.",6c,59,79,af));
            		}
HXLINE( 171)		if ((this->_pointD->length == this->_pointT->length)) {
HXLINE( 172)			return;
            		}
HXLINE( 174)		int i = 0;
HXLINE( 175)		while((i < this->points->length)){
HXLINE( 177)			int i1 = i;
HXDLIN( 177)			i = (i + 1);
HXDLIN( 177)			this->_pointT[i1] = (this->_pointD->__get((i - 1)) / this->distance);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(LinearPath_obj,updatePath,(void))


::hx::ObjectPtr< LinearPath_obj > LinearPath_obj::__new( ::Dynamic Options, ::flixel::tweens::FlxTweenManager manager) {
	::hx::ObjectPtr< LinearPath_obj > __this = new LinearPath_obj();
	__this->__construct(Options,manager);
	return __this;
}

::hx::ObjectPtr< LinearPath_obj > LinearPath_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic Options, ::flixel::tweens::FlxTweenManager manager) {
	LinearPath_obj *__this = (LinearPath_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LinearPath_obj), true, "flixel.tweens.motion.LinearPath"));
	*(void **)__this = LinearPath_obj::_hx_vtable;
	__this->__construct(Options,manager);
	return __this;
}

LinearPath_obj::LinearPath_obj()
{
}

void LinearPath_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LinearPath);
	HX_MARK_MEMBER_NAME(distance,"distance");
	HX_MARK_MEMBER_NAME(points,"points");
	HX_MARK_MEMBER_NAME(_pointD,"_pointD");
	HX_MARK_MEMBER_NAME(_pointT,"_pointT");
	HX_MARK_MEMBER_NAME(_speed,"_speed");
	HX_MARK_MEMBER_NAME(_index,"_index");
	HX_MARK_MEMBER_NAME(_last,"_last");
	HX_MARK_MEMBER_NAME(_prevPoint,"_prevPoint");
	HX_MARK_MEMBER_NAME(_nextPoint,"_nextPoint");
	 ::flixel::tweens::motion::Motion_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LinearPath_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(distance,"distance");
	HX_VISIT_MEMBER_NAME(points,"points");
	HX_VISIT_MEMBER_NAME(_pointD,"_pointD");
	HX_VISIT_MEMBER_NAME(_pointT,"_pointT");
	HX_VISIT_MEMBER_NAME(_speed,"_speed");
	HX_VISIT_MEMBER_NAME(_index,"_index");
	HX_VISIT_MEMBER_NAME(_last,"_last");
	HX_VISIT_MEMBER_NAME(_prevPoint,"_prevPoint");
	HX_VISIT_MEMBER_NAME(_nextPoint,"_nextPoint");
	 ::flixel::tweens::motion::Motion_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val LinearPath_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_last") ) { return ::hx::Val( _last ); }
		if (HX_FIELD_EQ(inName,"start") ) { return ::hx::Val( start_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"points") ) { return ::hx::Val( points ); }
		if (HX_FIELD_EQ(inName,"_speed") ) { return ::hx::Val( _speed ); }
		if (HX_FIELD_EQ(inName,"_index") ) { return ::hx::Val( _index ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_pointD") ) { return ::hx::Val( _pointD ); }
		if (HX_FIELD_EQ(inName,"_pointT") ) { return ::hx::Val( _pointT ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { return ::hx::Val( distance ); }
		if (HX_FIELD_EQ(inName,"addPoint") ) { return ::hx::Val( addPoint_dyn() ); }
		if (HX_FIELD_EQ(inName,"getPoint") ) { return ::hx::Val( getPoint_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setMotion") ) { return ::hx::Val( setMotion_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_prevPoint") ) { return ::hx::Val( _prevPoint ); }
		if (HX_FIELD_EQ(inName,"_nextPoint") ) { return ::hx::Val( _nextPoint ); }
		if (HX_FIELD_EQ(inName,"updatePath") ) { return ::hx::Val( updatePath_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val LinearPath_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_last") ) { _last=inValue.Cast<  ::flixel::math::FlxBasePoint >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"points") ) { points=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_speed") ) { _speed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_index") ) { _index=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_pointD") ) { _pointD=inValue.Cast< ::Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_pointT") ) { _pointT=inValue.Cast< ::Array< Float > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { distance=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_prevPoint") ) { _prevPoint=inValue.Cast<  ::flixel::math::FlxBasePoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_nextPoint") ) { _nextPoint=inValue.Cast<  ::flixel::math::FlxBasePoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LinearPath_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("distance",35,93,f9,6b));
	outFields->push(HX_("points",23,12,2e,f7));
	outFields->push(HX_("_pointD",93,23,a5,65));
	outFields->push(HX_("_pointT",a3,23,a5,65));
	outFields->push(HX_("_speed",c8,de,50,7d));
	outFields->push(HX_("_index",53,e2,fb,b9));
	outFields->push(HX_("_last",35,26,be,fa));
	outFields->push(HX_("_prevPoint",1e,d0,88,0d));
	outFields->push(HX_("_nextPoint",1e,4a,77,c9));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo LinearPath_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(LinearPath_obj,distance),HX_("distance",35,93,f9,6b)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(LinearPath_obj,points),HX_("points",23,12,2e,f7)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(LinearPath_obj,_pointD),HX_("_pointD",93,23,a5,65)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(LinearPath_obj,_pointT),HX_("_pointT",a3,23,a5,65)},
	{::hx::fsFloat,(int)offsetof(LinearPath_obj,_speed),HX_("_speed",c8,de,50,7d)},
	{::hx::fsInt,(int)offsetof(LinearPath_obj,_index),HX_("_index",53,e2,fb,b9)},
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(int)offsetof(LinearPath_obj,_last),HX_("_last",35,26,be,fa)},
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(int)offsetof(LinearPath_obj,_prevPoint),HX_("_prevPoint",1e,d0,88,0d)},
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(int)offsetof(LinearPath_obj,_nextPoint),HX_("_nextPoint",1e,4a,77,c9)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *LinearPath_obj_sStaticStorageInfo = 0;
#endif

static ::String LinearPath_obj_sMemberFields[] = {
	HX_("distance",35,93,f9,6b),
	HX_("points",23,12,2e,f7),
	HX_("_pointD",93,23,a5,65),
	HX_("_pointT",a3,23,a5,65),
	HX_("_speed",c8,de,50,7d),
	HX_("_index",53,e2,fb,b9),
	HX_("_last",35,26,be,fa),
	HX_("_prevPoint",1e,d0,88,0d),
	HX_("_nextPoint",1e,4a,77,c9),
	HX_("destroy",fa,2c,86,24),
	HX_("setMotion",78,fb,04,2b),
	HX_("addPoint",6f,da,ec,3f),
	HX_("getPoint",da,c3,66,26),
	HX_("start",62,74,0b,84),
	HX_("update",09,86,05,87),
	HX_("updatePath",4e,d0,06,03),
	::String(null()) };

::hx::Class LinearPath_obj::__mClass;

void LinearPath_obj::__register()
{
	LinearPath_obj _hx_dummy;
	LinearPath_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.tweens.motion.LinearPath",8e,7b,14,a8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LinearPath_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LinearPath_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LinearPath_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LinearPath_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace tweens
} // end namespace motion
