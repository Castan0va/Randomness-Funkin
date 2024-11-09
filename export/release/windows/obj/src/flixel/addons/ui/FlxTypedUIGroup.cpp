// Generated by Haxe 4.3.2
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
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
#ifndef INCLUDED_flixel_IFlxBasic
#include <flixel/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_IFlxSprite
#include <flixel/IFlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxTypedUIGroup
#include <flixel/addons/ui/FlxTypedUIGroup.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteContainer
#include <flixel/group/FlxTypedSpriteContainer.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_473dbb22ee0da7b5_30_new,"flixel.addons.ui.FlxTypedUIGroup","new",0x2492b874,"flixel.addons.ui.FlxTypedUIGroup.new","flixel/addons/ui/FlxUIGroup.hx",30,0xd49587d3)
HX_LOCAL_STACK_FRAME(_hx_pos_473dbb22ee0da7b5_49_add,"flixel.addons.ui.FlxTypedUIGroup","add",0x2488da35,"flixel.addons.ui.FlxTypedUIGroup.add","flixel/addons/ui/FlxUIGroup.hx",49,0xd49587d3)
HX_LOCAL_STACK_FRAME(_hx_pos_473dbb22ee0da7b5_59_remove,"flixel.addons.ui.FlxTypedUIGroup","remove",0x01c2f8b0,"flixel.addons.ui.FlxTypedUIGroup.remove","flixel/addons/ui/FlxUIGroup.hx",59,0xd49587d3)
HX_LOCAL_STACK_FRAME(_hx_pos_473dbb22ee0da7b5_70_setScrollFactor,"flixel.addons.ui.FlxTypedUIGroup","setScrollFactor",0xc88a7592,"flixel.addons.ui.FlxTypedUIGroup.setScrollFactor","flixel/addons/ui/FlxUIGroup.hx",70,0xd49587d3)
HX_LOCAL_STACK_FRAME(_hx_pos_473dbb22ee0da7b5_85_hasThis,"flixel.addons.ui.FlxTypedUIGroup","hasThis",0xb216a8ec,"flixel.addons.ui.FlxTypedUIGroup.hasThis","flixel/addons/ui/FlxUIGroup.hx",85,0xd49587d3)
HX_LOCAL_STACK_FRAME(_hx_pos_473dbb22ee0da7b5_93_contains,"flixel.addons.ui.FlxTypedUIGroup","contains",0xb256a98b,"flixel.addons.ui.FlxTypedUIGroup.contains","flixel/addons/ui/FlxUIGroup.hx",93,0xd49587d3)
HX_LOCAL_STACK_FRAME(_hx_pos_473dbb22ee0da7b5_101_calcBounds,"flixel.addons.ui.FlxTypedUIGroup","calcBounds",0x49eb3356,"flixel.addons.ui.FlxTypedUIGroup.calcBounds","flixel/addons/ui/FlxUIGroup.hx",101,0xd49587d3)
HX_LOCAL_STACK_FRAME(_hx_pos_473dbb22ee0da7b5_155_floorAll,"flixel.addons.ui.FlxTypedUIGroup","floorAll",0x71a65621,"flixel.addons.ui.FlxTypedUIGroup.floorAll","flixel/addons/ui/FlxUIGroup.hx",155,0xd49587d3)
namespace flixel{
namespace addons{
namespace ui{

void FlxTypedUIGroup_obj::__construct(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y){
            		Float x = __o_x.Default(((Float)0.0));
            		Float y = __o_y.Default(((Float)0.0));
            	HX_STACKFRAME(&_hx_pos_473dbb22ee0da7b5_30_new)
HXLINE(  41)		this->autoBounds = true;
HXLINE(  38)		this->broadcastToFlxUI = true;
HXLINE(  45)		super::__construct(x,y,null());
            	}

Dynamic FlxTypedUIGroup_obj::__CreateEmpty() { return new FlxTypedUIGroup_obj; }

void *FlxTypedUIGroup_obj::_hx_vtable = 0;

Dynamic FlxTypedUIGroup_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxTypedUIGroup_obj > _hx_result = new FlxTypedUIGroup_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool FlxTypedUIGroup_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c01639b) {
		if (inClassId<=(int)0x296a9148) {
			if (inClassId<=(int)0x288ce903) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x288ce903;
			} else {
				return inClassId==(int)0x296a9148;
			}
		} else {
			return inClassId==(int)0x2c01639b;
		}
	} else {
		if (inClassId<=(int)0x7ccf8994) {
			return inClassId==(int)0x5f6ac8a1 || inClassId==(int)0x7ccf8994;
		} else {
			return inClassId==(int)0x7dab0655;
		}
	}
}

static ::flixel::IFlxSprite_obj _hx_flixel_addons_ui_FlxTypedUIGroup__hx_flixel_IFlxSprite= {
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxTypedUIGroup_obj::set_active,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxTypedUIGroup_obj::set_visible,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxTypedUIGroup_obj::set_alive,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxTypedUIGroup_obj::set_exists,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxTypedUIGroup_obj::draw,
	( void (::hx::Object::*)(Float))&::flixel::addons::ui::FlxTypedUIGroup_obj::update,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxTypedUIGroup_obj::destroy,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxTypedUIGroup_obj::kill,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxTypedUIGroup_obj::revive,
	( ::String (::hx::Object::*)())&::flixel::addons::ui::FlxTypedUIGroup_obj::toString,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxTypedUIGroup_obj::set_x,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxTypedUIGroup_obj::set_y,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxTypedUIGroup_obj::set_alpha,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxTypedUIGroup_obj::set_angle,
	( int (::hx::Object::*)(int))&::flixel::addons::ui::FlxTypedUIGroup_obj::set_facing,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxTypedUIGroup_obj::set_moves,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxTypedUIGroup_obj::set_immovable,
	( void (::hx::Object::*)(Float,Float))&::flixel::addons::ui::FlxTypedUIGroup_obj::reset,
	( void (::hx::Object::*)(::hx::Null< Float > ,::hx::Null< Float > ))&::flixel::addons::ui::FlxTypedUIGroup_obj::setPosition,
};

static ::flixel::IFlxBasic_obj _hx_flixel_addons_ui_FlxTypedUIGroup__hx_flixel_IFlxBasic= {
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxTypedUIGroup_obj::set_active,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxTypedUIGroup_obj::set_visible,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxTypedUIGroup_obj::set_alive,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxTypedUIGroup_obj::set_exists,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxTypedUIGroup_obj::draw,
	( void (::hx::Object::*)(Float))&::flixel::addons::ui::FlxTypedUIGroup_obj::update,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxTypedUIGroup_obj::destroy,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxTypedUIGroup_obj::kill,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxTypedUIGroup_obj::revive,
	( ::String (::hx::Object::*)())&::flixel::addons::ui::FlxTypedUIGroup_obj::toString,
};

static ::flixel::addons::ui::interfaces::IFlxUIWidget_obj _hx_flixel_addons_ui_FlxTypedUIGroup__hx_flixel_addons_ui_interfaces_IFlxUIWidget= {
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxTypedUIGroup_obj::set_active,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxTypedUIGroup_obj::set_visible,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxTypedUIGroup_obj::set_alive,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxTypedUIGroup_obj::set_exists,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxTypedUIGroup_obj::draw,
	( void (::hx::Object::*)(Float))&::flixel::addons::ui::FlxTypedUIGroup_obj::update,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxTypedUIGroup_obj::destroy,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxTypedUIGroup_obj::kill,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxTypedUIGroup_obj::revive,
	( ::String (::hx::Object::*)())&::flixel::addons::ui::FlxTypedUIGroup_obj::toString,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxTypedUIGroup_obj::set_x,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxTypedUIGroup_obj::set_y,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxTypedUIGroup_obj::set_alpha,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxTypedUIGroup_obj::set_angle,
	( int (::hx::Object::*)(int))&::flixel::addons::ui::FlxTypedUIGroup_obj::set_facing,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxTypedUIGroup_obj::set_moves,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxTypedUIGroup_obj::set_immovable,
	( void (::hx::Object::*)(Float,Float))&::flixel::addons::ui::FlxTypedUIGroup_obj::reset,
	( void (::hx::Object::*)(::hx::Null< Float > ,::hx::Null< Float > ))&::flixel::addons::ui::FlxTypedUIGroup_obj::setPosition,
	( Float (::hx::Object::*)())&::flixel::addons::ui::FlxTypedUIGroup_obj::get_width,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxTypedUIGroup_obj::set_width,
	( Float (::hx::Object::*)())&::flixel::addons::ui::FlxTypedUIGroup_obj::get_height,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxTypedUIGroup_obj::set_height,
};

void *FlxTypedUIGroup_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x897c83aa: return &_hx_flixel_addons_ui_FlxTypedUIGroup__hx_flixel_IFlxSprite;
		case (int)0x284cfea9: return &_hx_flixel_addons_ui_FlxTypedUIGroup__hx_flixel_IFlxBasic;
		case (int)0x998525de: return &_hx_flixel_addons_ui_FlxTypedUIGroup__hx_flixel_addons_ui_interfaces_IFlxUIWidget;
	}
	return super::_hx_getInterface(inHash);
}

 ::Dynamic FlxTypedUIGroup_obj::add( ::Dynamic sprite){
            	HX_STACKFRAME(&_hx_pos_473dbb22ee0da7b5_49_add)
HXLINE(  50)		 ::Dynamic obj = this->super::add(sprite);
HXLINE(  51)		if (this->autoBounds) {
HXLINE(  53)			this->calcBounds(null());
            		}
HXLINE(  55)		return sprite;
            	}


 ::Dynamic FlxTypedUIGroup_obj::remove( ::Dynamic sprite,::hx::Null< bool >  __o_splice){
            		bool splice = __o_splice.Default(false);
            	HX_STACKFRAME(&_hx_pos_473dbb22ee0da7b5_59_remove)
HXLINE(  60)		 ::Dynamic obj = this->super::remove(sprite,splice);
HXLINE(  61)		if (this->autoBounds) {
HXLINE(  63)			this->calcBounds(null());
            		}
HXLINE(  65)		return obj;
            	}


void FlxTypedUIGroup_obj::setScrollFactor(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_473dbb22ee0da7b5_70_setScrollFactor)
HXDLIN(  70)		int _g = 0;
HXDLIN(  70)		::cpp::VirtualArray _g1 = this->group->members;
HXDLIN(  70)		while((_g < _g1->get_length())){
HXDLIN(  70)			 ::Dynamic sprite = _g1->__get(_g);
HXDLIN(  70)			_g = (_g + 1);
HXLINE(  72)			if (::hx::IsNotNull( sprite )) {
HXLINE(  74)				 ::flixel::math::FlxBasePoint this1 = ( ( ::flixel::FlxObject)(sprite) )->scrollFactor;
HXDLIN(  74)				this1->set_x(x);
HXDLIN(  74)				this1->set_y(y);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedUIGroup_obj,setScrollFactor,(void))

bool FlxTypedUIGroup_obj::hasThis( ::Dynamic sprite){
            	HX_STACKFRAME(&_hx_pos_473dbb22ee0da7b5_85_hasThis)
HXDLIN(  85)		return this->contains(sprite);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedUIGroup_obj,hasThis,return )

bool FlxTypedUIGroup_obj::contains( ::Dynamic sprite){
            	HX_STACKFRAME(&_hx_pos_473dbb22ee0da7b5_93_contains)
HXDLIN(  93)		return this->group->members->contains(sprite);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedUIGroup_obj,contains,return )

void FlxTypedUIGroup_obj::calcBounds( ::flixel::math::FlxRect rect){
            	HX_STACKFRAME(&_hx_pos_473dbb22ee0da7b5_101_calcBounds)
HXLINE( 102)		bool _hx_tmp;
HXDLIN( 102)		if (::hx::IsNotNull( this->group->members )) {
HXLINE( 102)			_hx_tmp = (this->group->members->get_length() == 0);
            		}
            		else {
HXLINE( 102)			_hx_tmp = true;
            		}
HXDLIN( 102)		if (_hx_tmp) {
HXLINE( 104)			this->set_width(this->set_height(( (Float)(0) )));
HXLINE( 105)			if (::hx::IsNotNull( rect )) {
HXLINE( 105)				rect->x = ( (Float)(0) );
HXDLIN( 105)				rect->y = ( (Float)(0) );
HXDLIN( 105)				rect->width = ( (Float)(0) );
HXDLIN( 105)				rect->height = ( (Float)(0) );
            			}
HXLINE( 106)			return;
            		}
HXLINE( 109)		Float left = ::Math_obj::POSITIVE_INFINITY;
HXLINE( 110)		Float right = ::Math_obj::NEGATIVE_INFINITY;
HXLINE( 111)		Float top = ::Math_obj::POSITIVE_INFINITY;
HXLINE( 112)		Float bottom = ::Math_obj::NEGATIVE_INFINITY;
HXLINE( 113)		{
HXLINE( 113)			int _g = 0;
HXDLIN( 113)			::cpp::VirtualArray _g1 = this->group->members;
HXDLIN( 113)			while((_g < _g1->get_length())){
HXLINE( 113)				 ::Dynamic sprite = _g1->__get(_g);
HXDLIN( 113)				_g = (_g + 1);
HXLINE( 115)				if (::hx::IsNotNull( sprite )) {
HXLINE( 117)					if ((( ( ::flixel::FlxObject)(sprite) )->x < left)) {
HXLINE( 119)						left = ( ( ::flixel::FlxObject)(sprite) )->x;
            					}
HXLINE( 122)					Float sprite1 = ( ( ::flixel::FlxObject)(sprite) )->x;
HXDLIN( 122)					if (((sprite1 + ( ( ::flixel::FlxObject)(sprite) )->get_width()) > right)) {
HXLINE( 124)						Float sprite2 = ( ( ::flixel::FlxObject)(sprite) )->x;
HXDLIN( 124)						right = (sprite2 + ( ( ::flixel::FlxObject)(sprite) )->get_width());
            					}
HXLINE( 127)					if ((( ( ::flixel::FlxObject)(sprite) )->y < top)) {
HXLINE( 129)						top = ( ( ::flixel::FlxObject)(sprite) )->y;
            					}
HXLINE( 132)					Float sprite3 = ( ( ::flixel::FlxObject)(sprite) )->y;
HXDLIN( 132)					if (((sprite3 + ( ( ::flixel::FlxObject)(sprite) )->get_height()) > bottom)) {
HXLINE( 134)						Float sprite4 = ( ( ::flixel::FlxObject)(sprite) )->y;
HXDLIN( 134)						bottom = (sprite4 + ( ( ::flixel::FlxObject)(sprite) )->get_height());
            					}
            				}
            			}
            		}
HXLINE( 139)		this->set_width((right - left));
HXLINE( 140)		this->set_height((bottom - top));
HXLINE( 141)		if (::hx::IsNotNull( rect )) {
HXLINE( 143)			rect->x = left;
HXLINE( 144)			rect->y = top;
HXLINE( 145)			rect->width = this->get_width();
HXLINE( 146)			rect->height = this->get_height();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedUIGroup_obj,calcBounds,(void))

void FlxTypedUIGroup_obj::floorAll(){
            	HX_STACKFRAME(&_hx_pos_473dbb22ee0da7b5_155_floorAll)
HXDLIN( 155)		int _g = 0;
HXDLIN( 155)		::cpp::VirtualArray _g1 = this->group->members;
HXDLIN( 155)		while((_g < _g1->get_length())){
HXDLIN( 155)			 ::Dynamic sprite = _g1->__get(_g);
HXDLIN( 155)			_g = (_g + 1);
HXLINE( 157)			( ( ::flixel::FlxObject)(sprite) )->set_x(( (Float)(::Math_obj::floor(( ( ::flixel::FlxObject)(sprite) )->x)) ));
HXLINE( 158)			( ( ::flixel::FlxObject)(sprite) )->set_y(( (Float)(::Math_obj::floor(( ( ::flixel::FlxObject)(sprite) )->y)) ));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedUIGroup_obj,floorAll,(void))


::hx::ObjectPtr< FlxTypedUIGroup_obj > FlxTypedUIGroup_obj::__new(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y) {
	::hx::ObjectPtr< FlxTypedUIGroup_obj > __this = new FlxTypedUIGroup_obj();
	__this->__construct(__o_x,__o_y);
	return __this;
}

::hx::ObjectPtr< FlxTypedUIGroup_obj > FlxTypedUIGroup_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y) {
	FlxTypedUIGroup_obj *__this = (FlxTypedUIGroup_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxTypedUIGroup_obj), true, "flixel.addons.ui.FlxTypedUIGroup"));
	*(void **)__this = FlxTypedUIGroup_obj::_hx_vtable;
	__this->__construct(__o_x,__o_y);
	return __this;
}

FlxTypedUIGroup_obj::FlxTypedUIGroup_obj()
{
}

void FlxTypedUIGroup_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTypedUIGroup);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(broadcastToFlxUI,"broadcastToFlxUI");
	HX_MARK_MEMBER_NAME(autoBounds,"autoBounds");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTypedUIGroup_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(broadcastToFlxUI,"broadcastToFlxUI");
	HX_VISIT_MEMBER_NAME(autoBounds,"autoBounds");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxTypedUIGroup_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasThis") ) { return ::hx::Val( hasThis_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"contains") ) { return ::hx::Val( contains_dyn() ); }
		if (HX_FIELD_EQ(inName,"floorAll") ) { return ::hx::Val( floorAll_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"autoBounds") ) { return ::hx::Val( autoBounds ); }
		if (HX_FIELD_EQ(inName,"calcBounds") ) { return ::hx::Val( calcBounds_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"setScrollFactor") ) { return ::hx::Val( setScrollFactor_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"broadcastToFlxUI") ) { return ::hx::Val( broadcastToFlxUI ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxTypedUIGroup_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"autoBounds") ) { autoBounds=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"broadcastToFlxUI") ) { broadcastToFlxUI=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTypedUIGroup_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("broadcastToFlxUI",ca,32,56,1a));
	outFields->push(HX_("autoBounds",44,97,e8,d1));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxTypedUIGroup_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(FlxTypedUIGroup_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsBool,(int)offsetof(FlxTypedUIGroup_obj,broadcastToFlxUI),HX_("broadcastToFlxUI",ca,32,56,1a)},
	{::hx::fsBool,(int)offsetof(FlxTypedUIGroup_obj,autoBounds),HX_("autoBounds",44,97,e8,d1)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxTypedUIGroup_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxTypedUIGroup_obj_sMemberFields[] = {
	HX_("name",4b,72,ff,48),
	HX_("broadcastToFlxUI",ca,32,56,1a),
	HX_("autoBounds",44,97,e8,d1),
	HX_("add",21,f2,49,00),
	HX_("remove",44,9c,88,04),
	HX_("setScrollFactor",7e,bf,85,5a),
	HX_("hasThis",d8,26,40,1c),
	HX_("contains",1f,5a,7b,2c),
	HX_("calcBounds",ea,30,0c,1b),
	HX_("floorAll",b5,06,cb,eb),
	::String(null()) };

::hx::Class FlxTypedUIGroup_obj::__mClass;

void FlxTypedUIGroup_obj::__register()
{
	FlxTypedUIGroup_obj _hx_dummy;
	FlxTypedUIGroup_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.ui.FlxTypedUIGroup",82,ae,d0,ca);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxTypedUIGroup_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxTypedUIGroup_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxTypedUIGroup_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxTypedUIGroup_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
