// Generated by Haxe 4.3.2
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_TileData
#include <openfl/display/TileData.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_45b4d85657e4cce4_240_new,"openfl.display.TileData","new",0x98a9a4d4,"openfl.display.TileData.new","openfl/display/Tileset.hx",240,0x8bc15676)
HX_LOCAL_STACK_FRAME(_hx_pos_45b4d85657e4cce4_251___update,"openfl.display.TileData","__update",0x4ca47835,"openfl.display.TileData.__update","openfl/display/Tileset.hx",251,0x8bc15676)
HX_LOCAL_STACK_FRAME(_hx_pos_45b4d85657e4cce4_226_boot,"openfl.display.TileData","boot",0xf3df953e,"openfl.display.TileData.boot","openfl/display/Tileset.hx",226,0x8bc15676)
namespace openfl{
namespace display{

void TileData_obj::__construct( ::openfl::geom::Rectangle rect){
            	HX_STACKFRAME(&_hx_pos_45b4d85657e4cce4_240_new)
HXDLIN( 240)		if (::hx::IsNotNull( rect )) {
HXLINE( 242)			this->x = ::Std_obj::_hx_int(rect->x);
HXLINE( 243)			this->y = ::Std_obj::_hx_int(rect->y);
HXLINE( 244)			this->width = ::Std_obj::_hx_int(rect->width);
HXLINE( 245)			this->height = ::Std_obj::_hx_int(rect->height);
            		}
            	}

Dynamic TileData_obj::__CreateEmpty() { return new TileData_obj; }

void *TileData_obj::_hx_vtable = 0;

Dynamic TileData_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TileData_obj > _hx_result = new TileData_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool TileData_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x48653d0a;
}

void TileData_obj::_hx___update( ::openfl::display::BitmapData bitmapData){
            	HX_STACKFRAME(&_hx_pos_45b4d85657e4cce4_251___update)
HXDLIN( 251)		if (::hx::IsNotNull( bitmapData )) {
HXLINE( 253)			int bitmapWidth = bitmapData->width;
HXLINE( 254)			int bitmapHeight = bitmapData->height;
HXLINE( 274)			this->_hx___uvX = (( (Float)(this->x) ) / ( (Float)(bitmapWidth) ));
HXLINE( 275)			this->_hx___uvY = (( (Float)(this->y) ) / ( (Float)(bitmapHeight) ));
HXLINE( 276)			this->_hx___uvWidth = (( (Float)((this->x + this->width)) ) / ( (Float)(bitmapWidth) ));
HXLINE( 277)			this->_hx___uvHeight = (( (Float)((this->y + this->height)) ) / ( (Float)(bitmapHeight) ));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TileData_obj,_hx___update,(void))


::hx::ObjectPtr< TileData_obj > TileData_obj::__new( ::openfl::geom::Rectangle rect) {
	::hx::ObjectPtr< TileData_obj > __this = new TileData_obj();
	__this->__construct(rect);
	return __this;
}

::hx::ObjectPtr< TileData_obj > TileData_obj::__alloc(::hx::Ctx *_hx_ctx, ::openfl::geom::Rectangle rect) {
	TileData_obj *__this = (TileData_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TileData_obj), true, "openfl.display.TileData"));
	*(void **)__this = TileData_obj::_hx_vtable;
	__this->__construct(rect);
	return __this;
}

TileData_obj::TileData_obj()
{
}

void TileData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TileData);
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(_hx___bitmapData,"__bitmapData");
	HX_MARK_MEMBER_NAME(_hx___uvHeight,"__uvHeight");
	HX_MARK_MEMBER_NAME(_hx___uvWidth,"__uvWidth");
	HX_MARK_MEMBER_NAME(_hx___uvX,"__uvX");
	HX_MARK_MEMBER_NAME(_hx___uvY,"__uvY");
	HX_MARK_END_CLASS();
}

void TileData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(_hx___bitmapData,"__bitmapData");
	HX_VISIT_MEMBER_NAME(_hx___uvHeight,"__uvHeight");
	HX_VISIT_MEMBER_NAME(_hx___uvWidth,"__uvWidth");
	HX_VISIT_MEMBER_NAME(_hx___uvX,"__uvX");
	HX_VISIT_MEMBER_NAME(_hx___uvY,"__uvY");
}

::hx::Val TileData_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return ::hx::Val( width ); }
		if (HX_FIELD_EQ(inName,"__uvX") ) { return ::hx::Val( _hx___uvX ); }
		if (HX_FIELD_EQ(inName,"__uvY") ) { return ::hx::Val( _hx___uvY ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return ::hx::Val( height ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__update") ) { return ::hx::Val( _hx___update_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__uvWidth") ) { return ::hx::Val( _hx___uvWidth ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__uvHeight") ) { return ::hx::Val( _hx___uvHeight ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__bitmapData") ) { return ::hx::Val( _hx___bitmapData ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TileData_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__uvX") ) { _hx___uvX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__uvY") ) { _hx___uvY=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__uvWidth") ) { _hx___uvWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__uvHeight") ) { _hx___uvHeight=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__bitmapData") ) { _hx___bitmapData=inValue.Cast<  ::openfl::display::BitmapData >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TileData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("__bitmapData",d9,30,54,6c));
	outFields->push(HX_("__uvHeight",48,d4,0b,29));
	outFields->push(HX_("__uvWidth",c5,50,4a,0e));
	outFields->push(HX_("__uvX",b7,8f,35,f2));
	outFields->push(HX_("__uvY",b8,8f,35,f2));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TileData_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(TileData_obj,height),HX_("height",e7,07,4c,02)},
	{::hx::fsInt,(int)offsetof(TileData_obj,width),HX_("width",06,b6,62,ca)},
	{::hx::fsInt,(int)offsetof(TileData_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsInt,(int)offsetof(TileData_obj,y),HX_("y",79,00,00,00)},
	{::hx::fsObject /*  ::openfl::display::BitmapData */ ,(int)offsetof(TileData_obj,_hx___bitmapData),HX_("__bitmapData",d9,30,54,6c)},
	{::hx::fsFloat,(int)offsetof(TileData_obj,_hx___uvHeight),HX_("__uvHeight",48,d4,0b,29)},
	{::hx::fsFloat,(int)offsetof(TileData_obj,_hx___uvWidth),HX_("__uvWidth",c5,50,4a,0e)},
	{::hx::fsFloat,(int)offsetof(TileData_obj,_hx___uvX),HX_("__uvX",b7,8f,35,f2)},
	{::hx::fsFloat,(int)offsetof(TileData_obj,_hx___uvY),HX_("__uvY",b8,8f,35,f2)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TileData_obj_sStaticStorageInfo = 0;
#endif

static ::String TileData_obj_sMemberFields[] = {
	HX_("height",e7,07,4c,02),
	HX_("width",06,b6,62,ca),
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("__bitmapData",d9,30,54,6c),
	HX_("__uvHeight",48,d4,0b,29),
	HX_("__uvWidth",c5,50,4a,0e),
	HX_("__uvX",b7,8f,35,f2),
	HX_("__uvY",b8,8f,35,f2),
	HX_("__update",29,f1,34,2f),
	::String(null()) };

::hx::Class TileData_obj::__mClass;

void TileData_obj::__register()
{
	TileData_obj _hx_dummy;
	TileData_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display.TileData",e2,ea,21,f1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TileData_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TileData_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TileData_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TileData_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void TileData_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_45b4d85657e4cce4_226_boot)
HXDLIN( 226)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
}

} // end namespace openfl
} // end namespace display
