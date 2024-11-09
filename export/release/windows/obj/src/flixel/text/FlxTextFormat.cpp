// Generated by Haxe 4.3.2
#include <hxcpp.h>

#ifndef INCLUDED_flixel_text_FlxTextFormat
#include <flixel/text/FlxTextFormat.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a69907c6a733237a_1197_new,"flixel.text.FlxTextFormat","new",0x67be2279,"flixel.text.FlxTextFormat.new","flixel/text/FlxText.hx",1197,0xdf165a6e)
HX_LOCAL_STACK_FRAME(_hx_pos_a69907c6a733237a_1203_set_leading,"flixel.text.FlxTextFormat","set_leading",0x68682d02,"flixel.text.FlxTextFormat.set_leading","flixel/text/FlxText.hx",1203,0xdf165a6e)
namespace flixel{
namespace text{

void FlxTextFormat_obj::__construct( ::Dynamic fontColor, ::Dynamic bold, ::Dynamic italic, ::Dynamic borderColor, ::Dynamic underline){
            	HX_GC_STACKFRAME(&_hx_pos_a69907c6a733237a_1197_new)
HXLINE(1198)		this->format =  ::openfl::text::TextFormat_obj::__alloc( HX_CTX ,null(),null(),fontColor,bold,italic,underline,null(),null(),null(),null(),null(),null(),null());
HXLINE(1199)		int _hx_tmp;
HXDLIN(1199)		if (::hx::IsNull( borderColor )) {
HXLINE(1199)			_hx_tmp = 0;
            		}
            		else {
HXLINE(1199)			_hx_tmp = ( (int)(borderColor) );
            		}
HXDLIN(1199)		this->borderColor = _hx_tmp;
            	}

Dynamic FlxTextFormat_obj::__CreateEmpty() { return new FlxTextFormat_obj; }

void *FlxTextFormat_obj::_hx_vtable = 0;

Dynamic FlxTextFormat_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxTextFormat_obj > _hx_result = new FlxTextFormat_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool FlxTextFormat_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x184412c5;
}

int FlxTextFormat_obj::set_leading(int value){
            	HX_STACKFRAME(&_hx_pos_a69907c6a733237a_1203_set_leading)
HXLINE(1204)		this->format->leading = value;
HXLINE(1205)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTextFormat_obj,set_leading,return )


::hx::ObjectPtr< FlxTextFormat_obj > FlxTextFormat_obj::__new( ::Dynamic fontColor, ::Dynamic bold, ::Dynamic italic, ::Dynamic borderColor, ::Dynamic underline) {
	::hx::ObjectPtr< FlxTextFormat_obj > __this = new FlxTextFormat_obj();
	__this->__construct(fontColor,bold,italic,borderColor,underline);
	return __this;
}

::hx::ObjectPtr< FlxTextFormat_obj > FlxTextFormat_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic fontColor, ::Dynamic bold, ::Dynamic italic, ::Dynamic borderColor, ::Dynamic underline) {
	FlxTextFormat_obj *__this = (FlxTextFormat_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxTextFormat_obj), true, "flixel.text.FlxTextFormat"));
	*(void **)__this = FlxTextFormat_obj::_hx_vtable;
	__this->__construct(fontColor,bold,italic,borderColor,underline);
	return __this;
}

FlxTextFormat_obj::FlxTextFormat_obj()
{
}

void FlxTextFormat_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTextFormat);
	HX_MARK_MEMBER_NAME(leading,"leading");
	HX_MARK_MEMBER_NAME(borderColor,"borderColor");
	HX_MARK_MEMBER_NAME(format,"format");
	HX_MARK_END_CLASS();
}

void FlxTextFormat_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(leading,"leading");
	HX_VISIT_MEMBER_NAME(borderColor,"borderColor");
	HX_VISIT_MEMBER_NAME(format,"format");
}

::hx::Val FlxTextFormat_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { return ::hx::Val( format ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"leading") ) { return ::hx::Val( leading ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderColor") ) { return ::hx::Val( borderColor ); }
		if (HX_FIELD_EQ(inName,"set_leading") ) { return ::hx::Val( set_leading_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxTextFormat_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { format=inValue.Cast<  ::openfl::text::TextFormat >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"leading") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_leading(inValue.Cast< int >()) );leading=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderColor") ) { borderColor=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTextFormat_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("leading",c6,32,61,09));
	outFields->push(HX_("borderColor",d7,3c,d5,d6));
	outFields->push(HX_("format",37,8f,8e,fd));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxTextFormat_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(FlxTextFormat_obj,leading),HX_("leading",c6,32,61,09)},
	{::hx::fsInt,(int)offsetof(FlxTextFormat_obj,borderColor),HX_("borderColor",d7,3c,d5,d6)},
	{::hx::fsObject /*  ::openfl::text::TextFormat */ ,(int)offsetof(FlxTextFormat_obj,format),HX_("format",37,8f,8e,fd)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxTextFormat_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxTextFormat_obj_sMemberFields[] = {
	HX_("leading",c6,32,61,09),
	HX_("borderColor",d7,3c,d5,d6),
	HX_("format",37,8f,8e,fd),
	HX_("set_leading",e9,99,c8,99),
	::String(null()) };

::hx::Class FlxTextFormat_obj::__mClass;

void FlxTextFormat_obj::__register()
{
	FlxTextFormat_obj _hx_dummy;
	FlxTextFormat_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.text.FlxTextFormat",07,72,93,cd);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxTextFormat_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxTextFormat_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxTextFormat_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxTextFormat_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace text
