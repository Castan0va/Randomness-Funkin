// Generated by Haxe 4.3.2
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_backend_ClientPrefs
#include <backend/ClientPrefs.h>
#endif
#ifndef INCLUDED_backend_Paths
#include <backend/Paths.h>
#endif
#ifndef INCLUDED_backend_SaveVariables
#include <backend/SaveVariables.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_objects_HealthIcon
#include <objects/HealthIcon.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ac81527997e0445c_3_new,"objects.HealthIcon","new",0x53da0821,"objects.HealthIcon.new","objects/HealthIcon.hx",3,0x9d2b69ce)
static const Float _hx_array_data_ea1163af_1[] = {
	(Float)0,(Float)0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_ac81527997e0445c_20_update,"objects.HealthIcon","update",0x858ddce8,"objects.HealthIcon.update","objects/HealthIcon.hx",20,0x9d2b69ce)
HX_LOCAL_STACK_FRAME(_hx_pos_ac81527997e0445c_29_changeIcon,"objects.HealthIcon","changeIcon",0xdec2cf68,"objects.HealthIcon.changeIcon","objects/HealthIcon.hx",29,0x9d2b69ce)
static const int _hx_array_data_ea1163af_4[] = {
	(int)0,(int)1,
};
HX_LOCAL_STACK_FRAME(_hx_pos_ac81527997e0445c_52_updateHitbox,"objects.HealthIcon","updateHitbox",0x5a8adca0,"objects.HealthIcon.updateHitbox","objects/HealthIcon.hx",52,0x9d2b69ce)
HX_LOCAL_STACK_FRAME(_hx_pos_ac81527997e0445c_59_getCharacter,"objects.HealthIcon","getCharacter",0x54c7c052,"objects.HealthIcon.getCharacter","objects/HealthIcon.hx",59,0x9d2b69ce)
namespace objects{

void HealthIcon_obj::__construct(::String __o__hx_char,::hx::Null< bool >  __o_isPlayer, ::Dynamic __o_allowGPU){
            		::String _hx_char = __o__hx_char;
            		if (::hx::IsNull(__o__hx_char)) _hx_char = HX_("bf",c4,55,00,00);
            		bool isPlayer = __o_isPlayer.Default(false);
            		 ::Dynamic allowGPU = __o_allowGPU;
            		if (::hx::IsNull(__o_allowGPU)) allowGPU = true;
            	HX_STACKFRAME(&_hx_pos_ac81527997e0445c_3_new)
HXLINE(  27)		this->iconOffsets = ::Array_obj< Float >::fromData( _hx_array_data_ea1163af_1,2);
HXLINE(   8)		this->_hx_char = HX_("",00,00,00,00);
HXLINE(   7)		this->isPlayer = false;
HXLINE(   6)		this->isOldIcon = false;
HXLINE(  12)		super::__construct(null(),null(),null());
HXLINE(  13)		this->isOldIcon = (_hx_char == HX_("bf-old",5e,ba,eb,07));
HXLINE(  14)		this->isPlayer = isPlayer;
HXLINE(  15)		this->changeIcon(_hx_char,allowGPU);
HXLINE(  16)		{
HXLINE(  16)			 ::flixel::math::FlxBasePoint this1 = this->scrollFactor;
HXDLIN(  16)			this1->set_x(( (Float)(0) ));
HXDLIN(  16)			this1->set_y(( (Float)(0) ));
            		}
            	}

Dynamic HealthIcon_obj::__CreateEmpty() { return new HealthIcon_obj; }

void *HealthIcon_obj::_hx_vtable = 0;

Dynamic HealthIcon_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HealthIcon_obj > _hx_result = new HealthIcon_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool HealthIcon_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x6627ca45) {
		if (inClassId<=(int)0x2c01639b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
		} else {
			return inClassId==(int)0x6627ca45;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void HealthIcon_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_ac81527997e0445c_20_update)
HXLINE(  21)		this->super::update(elapsed);
HXLINE(  23)		if (::hx::IsNotNull( this->sprTracker )) {
HXLINE(  24)			Float _hx_tmp = this->sprTracker->x;
HXDLIN(  24)			Float _hx_tmp1 = ((_hx_tmp + this->sprTracker->get_width()) + 12);
HXDLIN(  24)			this->setPosition(_hx_tmp1,(this->sprTracker->y - ( (Float)(30) )));
            		}
            	}


void HealthIcon_obj::changeIcon(::String _hx_char, ::Dynamic __o_allowGPU){
            		 ::Dynamic allowGPU = __o_allowGPU;
            		if (::hx::IsNull(__o_allowGPU)) allowGPU = true;
            	HX_STACKFRAME(&_hx_pos_ac81527997e0445c_29_changeIcon)
HXDLIN(  29)		if ((this->_hx_char != _hx_char)) {
HXLINE(  30)			::String name = (HX_("icons/",15,dc,d6,45) + _hx_char);
HXLINE(  31)			if (!(::backend::Paths_obj::fileExists(((HX_("images/",77,50,74,c1) + name) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),null(),null()))) {
HXLINE(  31)				name = (HX_("icons/icon-",5f,da,21,72) + _hx_char);
            			}
HXLINE(  32)			if (!(::backend::Paths_obj::fileExists(((HX_("images/",77,50,74,c1) + name) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),null(),null()))) {
HXLINE(  32)				name = HX_("icons/icon-face",7c,aa,dd,e7);
            			}
HXLINE(  34)			 ::flixel::graphics::FlxGraphic graphic = ::backend::Paths_obj::image(name,null(),allowGPU);
HXLINE(  35)			this->loadGraphic(graphic,true,::Math_obj::floor((( (Float)(graphic->width) ) / ( (Float)(2) ))),::Math_obj::floor(( (Float)(graphic->height) )),null(),null());
HXLINE(  36)			this->iconOffsets[0] = ((this->get_width() - ( (Float)(150) )) / ( (Float)(2) ));
HXLINE(  37)			this->iconOffsets[1] = ((this->get_height() - ( (Float)(150) )) / ( (Float)(2) ));
HXLINE(  38)			this->updateHitbox();
HXLINE(  40)			this->animation->add(_hx_char,::Array_obj< int >::fromData( _hx_array_data_ea1163af_4,2),0,false,this->isPlayer,null());
HXLINE(  41)			this->animation->play(_hx_char,null(),null(),null());
HXLINE(  42)			this->_hx_char = _hx_char;
HXLINE(  44)			if (::StringTools_obj::endsWith(_hx_char,HX_("-pixel",39,03,b3,c0))) {
HXLINE(  45)				this->set_antialiasing(false);
            			}
            			else {
HXLINE(  47)				this->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(HealthIcon_obj,changeIcon,(void))

void HealthIcon_obj::updateHitbox(){
            	HX_STACKFRAME(&_hx_pos_ac81527997e0445c_52_updateHitbox)
HXLINE(  53)		this->super::updateHitbox();
HXLINE(  54)		this->offset->set_x(this->iconOffsets->__get(0));
HXLINE(  55)		this->offset->set_y(this->iconOffsets->__get(1));
            	}


::String HealthIcon_obj::getCharacter(){
            	HX_STACKFRAME(&_hx_pos_ac81527997e0445c_59_getCharacter)
HXDLIN(  59)		return this->_hx_char;
            	}


HX_DEFINE_DYNAMIC_FUNC0(HealthIcon_obj,getCharacter,return )


::hx::ObjectPtr< HealthIcon_obj > HealthIcon_obj::__new(::String __o__hx_char,::hx::Null< bool >  __o_isPlayer, ::Dynamic __o_allowGPU) {
	::hx::ObjectPtr< HealthIcon_obj > __this = new HealthIcon_obj();
	__this->__construct(__o__hx_char,__o_isPlayer,__o_allowGPU);
	return __this;
}

::hx::ObjectPtr< HealthIcon_obj > HealthIcon_obj::__alloc(::hx::Ctx *_hx_ctx,::String __o__hx_char,::hx::Null< bool >  __o_isPlayer, ::Dynamic __o_allowGPU) {
	HealthIcon_obj *__this = (HealthIcon_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HealthIcon_obj), true, "objects.HealthIcon"));
	*(void **)__this = HealthIcon_obj::_hx_vtable;
	__this->__construct(__o__hx_char,__o_isPlayer,__o_allowGPU);
	return __this;
}

HealthIcon_obj::HealthIcon_obj()
{
}

void HealthIcon_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HealthIcon);
	HX_MARK_MEMBER_NAME(sprTracker,"sprTracker");
	HX_MARK_MEMBER_NAME(isOldIcon,"isOldIcon");
	HX_MARK_MEMBER_NAME(isPlayer,"isPlayer");
	HX_MARK_MEMBER_NAME(_hx_char,"char");
	HX_MARK_MEMBER_NAME(iconOffsets,"iconOffsets");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void HealthIcon_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(sprTracker,"sprTracker");
	HX_VISIT_MEMBER_NAME(isOldIcon,"isOldIcon");
	HX_VISIT_MEMBER_NAME(isPlayer,"isPlayer");
	HX_VISIT_MEMBER_NAME(_hx_char,"char");
	HX_VISIT_MEMBER_NAME(iconOffsets,"iconOffsets");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val HealthIcon_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"char") ) { return ::hx::Val( _hx_char ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isPlayer") ) { return ::hx::Val( isPlayer ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isOldIcon") ) { return ::hx::Val( isOldIcon ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sprTracker") ) { return ::hx::Val( sprTracker ); }
		if (HX_FIELD_EQ(inName,"changeIcon") ) { return ::hx::Val( changeIcon_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"iconOffsets") ) { return ::hx::Val( iconOffsets ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"updateHitbox") ) { return ::hx::Val( updateHitbox_dyn() ); }
		if (HX_FIELD_EQ(inName,"getCharacter") ) { return ::hx::Val( getCharacter_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val HealthIcon_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"char") ) { _hx_char=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isPlayer") ) { isPlayer=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isOldIcon") ) { isOldIcon=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sprTracker") ) { sprTracker=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"iconOffsets") ) { iconOffsets=inValue.Cast< ::Array< Float > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HealthIcon_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("sprTracker",03,a3,e2,78));
	outFields->push(HX_("isOldIcon",f6,08,f6,fe));
	outFields->push(HX_("isPlayer",eb,86,22,90));
	outFields->push(HX_("char",d6,5e,bf,41));
	outFields->push(HX_("iconOffsets",07,1b,16,e7));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo HealthIcon_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(HealthIcon_obj,sprTracker),HX_("sprTracker",03,a3,e2,78)},
	{::hx::fsBool,(int)offsetof(HealthIcon_obj,isOldIcon),HX_("isOldIcon",f6,08,f6,fe)},
	{::hx::fsBool,(int)offsetof(HealthIcon_obj,isPlayer),HX_("isPlayer",eb,86,22,90)},
	{::hx::fsString,(int)offsetof(HealthIcon_obj,_hx_char),HX_("char",d6,5e,bf,41)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(HealthIcon_obj,iconOffsets),HX_("iconOffsets",07,1b,16,e7)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *HealthIcon_obj_sStaticStorageInfo = 0;
#endif

static ::String HealthIcon_obj_sMemberFields[] = {
	HX_("sprTracker",03,a3,e2,78),
	HX_("isOldIcon",f6,08,f6,fe),
	HX_("isPlayer",eb,86,22,90),
	HX_("char",d6,5e,bf,41),
	HX_("update",09,86,05,87),
	HX_("iconOffsets",07,1b,16,e7),
	HX_("changeIcon",09,1d,fc,1f),
	HX_("updateHitbox",81,94,eb,56),
	HX_("getCharacter",33,78,28,51),
	::String(null()) };

::hx::Class HealthIcon_obj::__mClass;

void HealthIcon_obj::__register()
{
	HealthIcon_obj _hx_dummy;
	HealthIcon_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("objects.HealthIcon",af,63,11,ea);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(HealthIcon_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< HealthIcon_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HealthIcon_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HealthIcon_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace objects
