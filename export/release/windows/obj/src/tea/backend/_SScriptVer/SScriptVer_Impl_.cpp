// Generated by Haxe 4.3.2
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_http_HttpBase
#include <haxe/http/HttpBase.h>
#endif
#ifndef INCLUDED_sys_Http
#include <sys/Http.h>
#endif
#ifndef INCLUDED_tea_backend__SScriptVer_SScriptVer_Impl_
#include <tea/backend/_SScriptVer/SScriptVer_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_2b35f4a61850a86d_10__new,"tea.backend._SScriptVer.SScriptVer_Impl_","_new",0x7d5fe248,"tea.backend._SScriptVer.SScriptVer_Impl_._new","tea/backend/SScriptVer.hx",10,0x6b99805f)
HX_LOCAL_STACK_FRAME(_hx_pos_2b35f4a61850a86d_17_setVer,"tea.backend._SScriptVer.SScriptVer_Impl_","setVer",0x592c8488,"tea.backend._SScriptVer.SScriptVer_Impl_.setVer","tea/backend/SScriptVer.hx",17,0x6b99805f)
HX_LOCAL_STACK_FRAME(_hx_pos_2b35f4a61850a86d_33_checkVer,"tea.backend._SScriptVer.SScriptVer_Impl_","checkVer",0xcb137ae2,"tea.backend._SScriptVer.SScriptVer_Impl_.checkVer","tea/backend/SScriptVer.hx",33,0x6b99805f)
HX_LOCAL_STACK_FRAME(_hx_pos_2b35f4a61850a86d_46_checkVer,"tea.backend._SScriptVer.SScriptVer_Impl_","checkVer",0xcb137ae2,"tea.backend._SScriptVer.SScriptVer_Impl_.checkVer","tea/backend/SScriptVer.hx",46,0x6b99805f)
HX_LOCAL_STACK_FRAME(_hx_pos_2b35f4a61850a86d_26_checkVer,"tea.backend._SScriptVer.SScriptVer_Impl_","checkVer",0xcb137ae2,"tea.backend._SScriptVer.SScriptVer_Impl_.checkVer","tea/backend/SScriptVer.hx",26,0x6b99805f)
HX_LOCAL_STACK_FRAME(_hx_pos_2b35f4a61850a86d_53_fromString,"tea.backend._SScriptVer.SScriptVer_Impl_","fromString",0x63342202,"tea.backend._SScriptVer.SScriptVer_Impl_.fromString","tea/backend/SScriptVer.hx",53,0x6b99805f)
HX_LOCAL_STACK_FRAME(_hx_pos_2b35f4a61850a86d_63_toString,"tea.backend._SScriptVer.SScriptVer_Impl_","toString",0x56959d13,"tea.backend._SScriptVer.SScriptVer_Impl_.toString","tea/backend/SScriptVer.hx",63,0x6b99805f)
HX_LOCAL_STACK_FRAME(_hx_pos_2b35f4a61850a86d_66_toInt,"tea.backend._SScriptVer.SScriptVer_Impl_","toInt",0x4e843b6d,"tea.backend._SScriptVer.SScriptVer_Impl_.toInt","tea/backend/SScriptVer.hx",66,0x6b99805f)
HX_LOCAL_STACK_FRAME(_hx_pos_2b35f4a61850a86d_9_boot,"tea.backend._SScriptVer.SScriptVer_Impl_","boot",0x7f5c5119,"tea.backend._SScriptVer.SScriptVer_Impl_.boot","tea/backend/SScriptVer.hx",9,0x6b99805f)
namespace tea{
namespace backend{
namespace _SScriptVer{

void SScriptVer_Impl__obj::__construct() { }

Dynamic SScriptVer_Impl__obj::__CreateEmpty() { return new SScriptVer_Impl__obj; }

void *SScriptVer_Impl__obj::_hx_vtable = 0;

Dynamic SScriptVer_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SScriptVer_Impl__obj > _hx_result = new SScriptVer_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SScriptVer_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x25d44945;
}

 ::Dynamic SScriptVer_Impl__obj::newerVer;

 ::Dynamic SScriptVer_Impl__obj::_new(int num1,int num2,int num3){
            	HX_STACKFRAME(&_hx_pos_2b35f4a61850a86d_10__new)
HXDLIN(  10)		 ::Dynamic this1 = 0;
HXLINE(  13)		{
HXLINE(  13)			::String string = HX_("",00,00,00,00);
HXDLIN(  13)			{
HXLINE(  13)				{
HXLINE(  13)					int i = num1;
HXDLIN(  13)					string = (string + ::Std_obj::string(i));
            				}
HXDLIN(  13)				{
HXLINE(  13)					int i1 = num2;
HXDLIN(  13)					string = (string + ::Std_obj::string(i1));
            				}
HXDLIN(  13)				{
HXLINE(  13)					int i2 = num3;
HXDLIN(  13)					string = (string + ::Std_obj::string(i2));
            				}
            			}
HXDLIN(  13)			this1 = ::Std_obj::parseInt(string);
            		}
HXLINE(  10)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(SScriptVer_Impl__obj,_new,return )

void SScriptVer_Impl__obj::setVer( ::Dynamic this1,int num1,int num2,int num3){
            	HX_STACKFRAME(&_hx_pos_2b35f4a61850a86d_17_setVer)
HXLINE(  18)		::String string = HX_("",00,00,00,00);
HXLINE(  19)		{
HXLINE(  19)			{
HXLINE(  19)				int i = num1;
HXLINE(  20)				string = (string + ::Std_obj::string(i));
            			}
HXLINE(  19)			{
HXLINE(  19)				int i1 = num2;
HXLINE(  20)				string = (string + ::Std_obj::string(i1));
            			}
HXLINE(  19)			{
HXLINE(  19)				int i2 = num3;
HXLINE(  20)				string = (string + ::Std_obj::string(i2));
            			}
            		}
HXLINE(  22)		this1 = ::Std_obj::parseInt(string);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(SScriptVer_Impl__obj,setVer,(void))

 ::Dynamic SScriptVer_Impl__obj::checkVer( ::Dynamic this1){
            		HX_BEGIN_LOCAL_FUNC_S4(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,this1,int,me,::Array< ::Dynamic>,returnValue,::Array< ::Dynamic>,me2) HXARGC(1)
            		void _hx_run(::String data){
            			HX_GC_STACKFRAME(&_hx_pos_2b35f4a61850a86d_33_checkVer)
HXLINE(  34)			me2[0] = ::tea::backend::_SScriptVer::SScriptVer_Impl__obj::fromString(data);
HXLINE(  35)			if ((me < ( (int)(me2->__get(0)) ))) {
HXLINE(  37)				returnValue[0] = false;
HXLINE(  38)				::tea::backend::_SScriptVer::SScriptVer_Impl__obj::newerVer = me2->__get(0);
            			}
            			else {
HXLINE(  42)				returnValue[0] = true;
HXLINE(  43)				::tea::backend::_SScriptVer::SScriptVer_Impl__obj::newerVer = this1;
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1,::Array< ::Dynamic>,returnValue) HXARGC(1)
            		void _hx_run(::String msg){
            			HX_GC_STACKFRAME(&_hx_pos_2b35f4a61850a86d_46_checkVer)
HXLINE(  46)			returnValue[0] = null();
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_2b35f4a61850a86d_26_checkVer)
HXLINE(  27)		::Array< ::Dynamic> returnValue = ::Array_obj< ::Dynamic>::__new(1)->init(0,null());
HXLINE(  29)		int me = ( (int)(this1) );
HXLINE(  30)		::Array< ::Dynamic> me2 = ::Array_obj< ::Dynamic>::__new(1)->init(0,::tea::backend::_SScriptVer::SScriptVer_Impl__obj::fromString(::Std_obj::string(this1).split(HX_("",00,00,00,00))->join(HX_(".",2e,00,00,00))));
HXLINE(  31)		 ::sys::Http http =  ::sys::Http_obj::__alloc( HX_CTX ,HX_("https://raw.githubusercontent.com/TahirKarabekiroglu/SScript/testing/gitVer.txt",43,85,5d,c4));
HXLINE(  32)		http->onData =  ::Dynamic(new _hx_Closure_0(this1,me,returnValue,me2));
HXLINE(  46)		http->onError =  ::Dynamic(new _hx_Closure_1(returnValue));
HXLINE(  48)		http->request(null());
HXLINE(  49)		return returnValue->__get(0);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SScriptVer_Impl__obj,checkVer,return )

 ::Dynamic SScriptVer_Impl__obj::fromString(::String string){
            	HX_STACKFRAME(&_hx_pos_2b35f4a61850a86d_53_fromString)
HXLINE(  54)		::Array< int > nums = ::Array_obj< int >::__new(0);
HXLINE(  56)		{
HXLINE(  56)			int _g = 0;
HXDLIN(  56)			::Array< ::String > _g1 = ::StringTools_obj::trim(string).split(HX_(".",2e,00,00,00));
HXDLIN(  56)			while((_g < _g1->length)){
HXLINE(  56)				::String i = _g1->__get(_g);
HXDLIN(  56)				_g = (_g + 1);
HXLINE(  57)				nums->push(::Std_obj::parseInt(i));
            			}
            		}
HXLINE(  59)		 ::Dynamic this1 = 0;
HXDLIN(  59)		{
HXLINE(  59)			::String string1 = HX_("",00,00,00,00);
HXDLIN(  59)			{
HXLINE(  59)				{
HXLINE(  59)					int i1 = nums->__get(0);
HXDLIN(  59)					string1 = (string1 + ::Std_obj::string(i1));
            				}
HXDLIN(  59)				{
HXLINE(  59)					int i2 = nums->__get(1);
HXDLIN(  59)					string1 = (string1 + ::Std_obj::string(i2));
            				}
HXDLIN(  59)				{
HXLINE(  59)					int i3 = nums->__get(2);
HXDLIN(  59)					string1 = (string1 + ::Std_obj::string(i3));
            				}
            			}
HXDLIN(  59)			this1 = ::Std_obj::parseInt(string1);
            		}
HXDLIN(  59)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SScriptVer_Impl__obj,fromString,return )

::String SScriptVer_Impl__obj::toString( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_2b35f4a61850a86d_63_toString)
HXDLIN(  63)		return ::Std_obj::string(this1).split(HX_("",00,00,00,00))->join(HX_(".",2e,00,00,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SScriptVer_Impl__obj,toString,return )

int SScriptVer_Impl__obj::toInt( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_2b35f4a61850a86d_66_toInt)
HXDLIN(  66)		return ( (int)(this1) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SScriptVer_Impl__obj,toInt,return )


SScriptVer_Impl__obj::SScriptVer_Impl__obj()
{
}

bool SScriptVer_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"toInt") ) { outValue = toInt_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"setVer") ) { outValue = setVer_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"checkVer") ) { outValue = checkVer_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *SScriptVer_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo SScriptVer_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &SScriptVer_Impl__obj::newerVer,HX_("newerVer",96,57,31,03)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void SScriptVer_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SScriptVer_Impl__obj::newerVer,"newerVer");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SScriptVer_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SScriptVer_Impl__obj::newerVer,"newerVer");
};

#endif

::hx::Class SScriptVer_Impl__obj::__mClass;

static ::String SScriptVer_Impl__obj_sStaticFields[] = {
	HX_("newerVer",96,57,31,03),
	HX_("_new",61,15,1f,3f),
	HX_("setVer",e1,6f,71,6f),
	HX_("checkVer",7b,ae,ec,ac),
	HX_("fromString",db,2d,74,54),
	HX_("toString",ac,d0,6e,38),
	HX_("toInt",34,be,11,14),
	::String(null())
};

void SScriptVer_Impl__obj::__register()
{
	SScriptVer_Impl__obj _hx_dummy;
	SScriptVer_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tea.backend._SScriptVer.SScriptVer_Impl_",e7,bc,f4,9d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SScriptVer_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = SScriptVer_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(SScriptVer_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< SScriptVer_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SScriptVer_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SScriptVer_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SScriptVer_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void SScriptVer_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_2b35f4a61850a86d_9_boot)
HXDLIN(   9)		newerVer = null();
            	}
}

} // end namespace tea
} // end namespace backend
} // end namespace _SScriptVer
