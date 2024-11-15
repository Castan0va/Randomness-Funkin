// Generated by Haxe 4.3.2
#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_macro_Compiler
#include <haxe/macro/Compiler.h>
#endif
#ifndef INCLUDED_haxe_macro_ComplexTypeTools
#include <haxe/macro/ComplexTypeTools.h>
#endif
#ifndef INCLUDED_haxe_macro_Context
#include <haxe/macro/Context.h>
#endif
#ifndef INCLUDED_haxe_macro_ExprTools
#include <haxe/macro/ExprTools.h>
#endif
#ifndef INCLUDED_haxe_macro_MacroStringTools
#include <haxe/macro/MacroStringTools.h>
#endif
#ifndef INCLUDED_haxe_macro_Printer
#include <haxe/macro/Printer.h>
#endif
#ifndef INCLUDED_haxe_macro_TypeTools
#include <haxe/macro/TypeTools.h>
#endif
#ifndef INCLUDED_haxe_macro_TypedExprTools
#include <haxe/macro/TypedExprTools.h>
#endif
#ifndef INCLUDED_hscriptBase_Tools
#include <hscriptBase/Tools.h>
#endif
#ifndef INCLUDED_macro_Macro
#include <macro/Macro.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_23fc8acb9a895e00_243_log,"macro.Macro","log",0xb1bb6c20,"macro.Macro.log","macro/Macro.hx",243,0xb4be93f5)
HX_LOCAL_STACK_FRAME(_hx_pos_23fc8acb9a895e00_251_get_definePath,"macro.Macro","get_definePath",0x254e65ad,"macro.Macro.get_definePath","macro/Macro.hx",251,0xb4be93f5)
HX_LOCAL_STACK_FRAME(_hx_pos_23fc8acb9a895e00_262_get_settingsPath,"macro.Macro","get_settingsPath",0x207e7f95,"macro.Macro.get_settingsPath","macro/Macro.hx",262,0xb4be93f5)
HX_LOCAL_STACK_FRAME(_hx_pos_23fc8acb9a895e00_35_boot,"macro.Macro","boot",0xcba71516,"macro.Macro.boot","macro/Macro.hx",35,0xb4be93f5)
HX_LOCAL_STACK_FRAME(_hx_pos_23fc8acb9a895e00_42_boot,"macro.Macro","boot",0xcba71516,"macro.Macro.boot","macro/Macro.hx",42,0xb4be93f5)
HX_LOCAL_STACK_FRAME(_hx_pos_23fc8acb9a895e00_45_boot,"macro.Macro","boot",0xcba71516,"macro.Macro.boot","macro/Macro.hx",45,0xb4be93f5)
HX_LOCAL_STACK_FRAME(_hx_pos_23fc8acb9a895e00_48_boot,"macro.Macro","boot",0xcba71516,"macro.Macro.boot","macro/Macro.hx",48,0xb4be93f5)
HX_LOCAL_STACK_FRAME(_hx_pos_23fc8acb9a895e00_53_boot,"macro.Macro","boot",0xcba71516,"macro.Macro.boot","macro/Macro.hx",53,0xb4be93f5)
static const ::String _hx_array_data_c93a7a0a_10[] = {
	HX_("Special Thanks:",aa,f7,07,a4),HX_("- CrowPlexus\n",73,3c,a6,87),
};
HX_LOCAL_STACK_FRAME(_hx_pos_23fc8acb9a895e00_58_boot,"macro.Macro","boot",0xcba71516,"macro.Macro.boot","macro/Macro.hx",58,0xb4be93f5)
namespace macro{

void Macro_obj::__construct() { }

Dynamic Macro_obj::__CreateEmpty() { return new Macro_obj; }

void *Macro_obj::_hx_vtable = 0;

Dynamic Macro_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Macro_obj > _hx_result = new Macro_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Macro_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x07a9f160;
}

 ::Dynamic Macro_obj::defaultSettings;

 ::haxe::ds::StringMap Macro_obj::allClassesAvailable;

 ::Dynamic Macro_obj::VERSION;

bool Macro_obj::isWindows;

::Array< ::String > Macro_obj::credits;

::Array< ::Dynamic> Macro_obj::macroClasses;

void Macro_obj::log(::String __o_log){
            		::String log = __o_log;
            		if (::hx::IsNull(__o_log)) log = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_23fc8acb9a895e00_243_log)
HXDLIN( 243)		::Sys_obj::println(log);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Macro_obj,log,(void))

::String Macro_obj::get_definePath(){
            	HX_STACKFRAME(&_hx_pos_23fc8acb9a895e00_251_get_definePath)
HXLINE( 252)		::String env;
HXDLIN( 252)		if (::macro::Macro_obj::isWindows) {
HXLINE( 252)			env = ::Sys_obj::getEnv(HX_("USERPROFILE",1e,72,55,c2));
            		}
            		else {
HXLINE( 252)			env = ::Sys_obj::getEnv(HX_("HOME",1f,92,d3,2f));
            		}
HXLINE( 253)		bool _hx_tmp;
HXDLIN( 253)		if (::macro::Macro_obj::isWindows) {
HXLINE( 253)			_hx_tmp = !(::StringTools_obj::endsWith(env,HX_("\\",5c,00,00,00)));
            		}
            		else {
HXLINE( 253)			_hx_tmp = false;
            		}
HXDLIN( 253)		if (_hx_tmp) {
HXLINE( 254)			env = (env + HX_("\\",5c,00,00,00));
            		}
            		else {
HXLINE( 255)			bool _hx_tmp1;
HXDLIN( 255)			if (!(::macro::Macro_obj::isWindows)) {
HXLINE( 255)				_hx_tmp1 = !(::StringTools_obj::endsWith(env,HX_("/",2f,00,00,00)));
            			}
            			else {
HXLINE( 255)				_hx_tmp1 = false;
            			}
HXDLIN( 255)			if (_hx_tmp1) {
HXLINE( 256)				env = (env + HX_("/",2f,00,00,00));
            			}
            		}
HXLINE( 258)		return (env + HX_("defines.cocoa",f3,df,67,f8));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Macro_obj,get_definePath,return )

::String Macro_obj::get_settingsPath(){
            	HX_STACKFRAME(&_hx_pos_23fc8acb9a895e00_262_get_settingsPath)
HXLINE( 263)		::String env;
HXDLIN( 263)		if (::macro::Macro_obj::isWindows) {
HXLINE( 263)			env = ::Sys_obj::getEnv(HX_("USERPROFILE",1e,72,55,c2));
            		}
            		else {
HXLINE( 263)			env = ::Sys_obj::getEnv(HX_("HOME",1f,92,d3,2f));
            		}
HXLINE( 264)		bool _hx_tmp;
HXDLIN( 264)		if (::macro::Macro_obj::isWindows) {
HXLINE( 264)			_hx_tmp = !(::StringTools_obj::endsWith(env,HX_("\\",5c,00,00,00)));
            		}
            		else {
HXLINE( 264)			_hx_tmp = false;
            		}
HXDLIN( 264)		if (_hx_tmp) {
HXLINE( 265)			env = (env + HX_("\\",5c,00,00,00));
            		}
            		else {
HXLINE( 266)			bool _hx_tmp1;
HXDLIN( 266)			if (!(::macro::Macro_obj::isWindows)) {
HXLINE( 266)				_hx_tmp1 = !(::StringTools_obj::endsWith(env,HX_("/",2f,00,00,00)));
            			}
            			else {
HXLINE( 266)				_hx_tmp1 = false;
            			}
HXDLIN( 266)			if (_hx_tmp1) {
HXLINE( 267)				env = (env + HX_("/",2f,00,00,00));
            			}
            		}
HXLINE( 269)		return (env + HX_("settings.cocoa",3e,ff,ca,0a));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Macro_obj,get_settingsPath,return )


Macro_obj::Macro_obj()
{
}

bool Macro_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"log") ) { outValue = log_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"VERSION") ) { outValue = ( VERSION ); return true; }
		if (HX_FIELD_EQ(inName,"credits") ) { outValue = ( credits ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isWindows") ) { outValue = ( isWindows ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"definePath") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_definePath() ); return true; } }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"settingsPath") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_settingsPath() ); return true; } }
		if (HX_FIELD_EQ(inName,"macroClasses") ) { outValue = ( macroClasses ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_definePath") ) { outValue = get_definePath_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"defaultSettings") ) { outValue = ( defaultSettings ); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_settingsPath") ) { outValue = get_settingsPath_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"allClassesAvailable") ) { outValue = ( allClassesAvailable ); return true; }
	}
	return false;
}

bool Macro_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"VERSION") ) { VERSION=ioValue.Cast<  ::Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"credits") ) { credits=ioValue.Cast< ::Array< ::String > >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isWindows") ) { isWindows=ioValue.Cast< bool >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"macroClasses") ) { macroClasses=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"defaultSettings") ) { defaultSettings=ioValue.Cast<  ::Dynamic >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"allClassesAvailable") ) { allClassesAvailable=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Macro_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Macro_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &Macro_obj::defaultSettings,HX_("defaultSettings",c4,3a,4b,b4)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &Macro_obj::allClassesAvailable,HX_("allClassesAvailable",84,cd,69,db)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &Macro_obj::VERSION,HX_("VERSION",f8,ba,c5,fc)},
	{::hx::fsBool,(void *) &Macro_obj::isWindows,HX_("isWindows",b9,5b,73,ec)},
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &Macro_obj::credits,HX_("credits",1a,0e,5e,13)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(void *) &Macro_obj::macroClasses,HX_("macroClasses",fa,5f,d7,22)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Macro_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Macro_obj::defaultSettings,"defaultSettings");
	HX_MARK_MEMBER_NAME(Macro_obj::allClassesAvailable,"allClassesAvailable");
	HX_MARK_MEMBER_NAME(Macro_obj::VERSION,"VERSION");
	HX_MARK_MEMBER_NAME(Macro_obj::isWindows,"isWindows");
	HX_MARK_MEMBER_NAME(Macro_obj::credits,"credits");
	HX_MARK_MEMBER_NAME(Macro_obj::macroClasses,"macroClasses");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Macro_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Macro_obj::defaultSettings,"defaultSettings");
	HX_VISIT_MEMBER_NAME(Macro_obj::allClassesAvailable,"allClassesAvailable");
	HX_VISIT_MEMBER_NAME(Macro_obj::VERSION,"VERSION");
	HX_VISIT_MEMBER_NAME(Macro_obj::isWindows,"isWindows");
	HX_VISIT_MEMBER_NAME(Macro_obj::credits,"credits");
	HX_VISIT_MEMBER_NAME(Macro_obj::macroClasses,"macroClasses");
};

#endif

::hx::Class Macro_obj::__mClass;

static ::String Macro_obj_sStaticFields[] = {
	HX_("defaultSettings",c4,3a,4b,b4),
	HX_("allClassesAvailable",84,cd,69,db),
	HX_("VERSION",f8,ba,c5,fc),
	HX_("isWindows",b9,5b,73,ec),
	HX_("credits",1a,0e,5e,13),
	HX_("macroClasses",fa,5f,d7,22),
	HX_("log",84,54,52,00),
	HX_("get_definePath",c9,4f,97,fc),
	HX_("get_settingsPath",b1,28,6b,0b),
	::String(null())
};

void Macro_obj::__register()
{
	Macro_obj _hx_dummy;
	Macro_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("macro.Macro",0a,7a,3a,c9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Macro_obj::__GetStatic;
	__mClass->mSetStaticField = &Macro_obj::__SetStatic;
	__mClass->mMarkFunc = Macro_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Macro_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Macro_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Macro_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Macro_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Macro_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Macro_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_23fc8acb9a895e00_35_boot)
HXDLIN(  35)		defaultSettings =  ::Dynamic(::hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("includeAll",d9,fb,9d,ca),false)
            			->setFixed(1,HX_("showMacro",cf,d5,7a,31),true)
            			->setFixed(2,HX_("loopCost",d1,92,32,34),25));
            	}
{
            	HX_STACKFRAME(&_hx_pos_23fc8acb9a895e00_42_boot)
HXDLIN(  42)		allClassesAvailable = ::hscriptBase::Tools_obj::names->copy();
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::Dynamic _hx_run(){
            			HX_STACKFRAME(&_hx_pos_23fc8acb9a895e00_45_boot)
HXDLIN(  45)			 ::Dynamic this1 = 0;
HXDLIN(  45)			{
HXDLIN(  45)				::String string = HX_("",00,00,00,00);
HXDLIN(  45)				{
HXDLIN(  45)					{
HXDLIN(  45)						int i = 7;
HXDLIN(  45)						string = (string + ::Std_obj::string(i));
            					}
HXDLIN(  45)					{
HXDLIN(  45)						int i1 = 7;
HXDLIN(  45)						string = (string + ::Std_obj::string(i1));
            					}
HXDLIN(  45)					{
HXDLIN(  45)						int i2 = 0;
HXDLIN(  45)						string = (string + ::Std_obj::string(i2));
            					}
            				}
HXDLIN(  45)				this1 = ::Std_obj::parseInt(string);
            			}
HXDLIN(  45)			return this1;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_23fc8acb9a895e00_45_boot)
HXDLIN(  45)		VERSION =  ::Dynamic(new _hx_Closure_0())();
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		bool _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_23fc8acb9a895e00_48_boot)
HXDLIN(  48)			 ::EReg _hx_tmp =  ::EReg_obj::__alloc( HX_CTX ,HX_("^win",7e,b6,7c,3e),HX_("i",69,00,00,00));
HXDLIN(  48)			return _hx_tmp->match(::Sys_obj::systemName());
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_23fc8acb9a895e00_48_boot)
HXDLIN(  48)		isWindows = ( (bool)( ::Dynamic(new _hx_Closure_0())()) );
            	}
{
            	HX_STACKFRAME(&_hx_pos_23fc8acb9a895e00_53_boot)
HXDLIN(  53)		credits = ::Array_obj< ::String >::fromData( _hx_array_data_c93a7a0a_10,2);
            	}
{
            	HX_STACKFRAME(&_hx_pos_23fc8acb9a895e00_58_boot)
HXDLIN(  58)		macroClasses = ::Array_obj< ::Dynamic>::__new(8)->init(0,::hx::ClassOf< ::haxe::macro::Compiler >())->init(1,::hx::ClassOf< ::haxe::macro::Context >())->init(2,::hx::ClassOf< ::haxe::macro::MacroStringTools >())->init(3,::hx::ClassOf< ::haxe::macro::Printer >())->init(4,::hx::ClassOf< ::haxe::macro::ComplexTypeTools >())->init(5,::hx::ClassOf< ::haxe::macro::TypedExprTools >())->init(6,::hx::ClassOf< ::haxe::macro::ExprTools >())->init(7,::hx::ClassOf< ::haxe::macro::TypeTools >());
            	}
}

} // end namespace macro
