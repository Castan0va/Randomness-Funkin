// Generated by Haxe 4.3.2
#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxBaseMultiInput
#include <flixel/addons/ui/FlxBaseMultiInput.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_496c6bf68154a4c5_32_new,"flixel.addons.ui.FlxBaseMultiInput","new",0x2c00bc55,"flixel.addons.ui.FlxBaseMultiInput.new","flixel/addons/ui/FlxBaseMultiInput.hx",32,0x748f1d1c)
HX_LOCAL_STACK_FRAME(_hx_pos_496c6bf68154a4c5_37_destroy,"flixel.addons.ui.FlxBaseMultiInput","destroy",0xd1b0b76f,"flixel.addons.ui.FlxBaseMultiInput.destroy","flixel/addons/ui/FlxBaseMultiInput.hx",37,0x748f1d1c)
HX_LOCAL_STACK_FRAME(_hx_pos_496c6bf68154a4c5_44_checkJustPressed,"flixel.addons.ui.FlxBaseMultiInput","checkJustPressed",0x0bc4b0d9,"flixel.addons.ui.FlxBaseMultiInput.checkJustPressed","flixel/addons/ui/FlxBaseMultiInput.hx",44,0x748f1d1c)
HX_LOCAL_STACK_FRAME(_hx_pos_496c6bf68154a4c5_50_checkJustReleased,"flixel.addons.ui.FlxBaseMultiInput","checkJustReleased",0x472c1aa6,"flixel.addons.ui.FlxBaseMultiInput.checkJustReleased","flixel/addons/ui/FlxBaseMultiInput.hx",50,0x748f1d1c)
HX_LOCAL_STACK_FRAME(_hx_pos_496c6bf68154a4c5_56_checkPressed,"flixel.addons.ui.FlxBaseMultiInput","checkPressed",0x898ff825,"flixel.addons.ui.FlxBaseMultiInput.checkPressed","flixel/addons/ui/FlxBaseMultiInput.hx",56,0x748f1d1c)
HX_LOCAL_STACK_FRAME(_hx_pos_496c6bf68154a4c5_65_justPressed,"flixel.addons.ui.FlxBaseMultiInput","justPressed",0x26c076cb,"flixel.addons.ui.FlxBaseMultiInput.justPressed","flixel/addons/ui/FlxBaseMultiInput.hx",65,0x748f1d1c)
HX_LOCAL_STACK_FRAME(_hx_pos_496c6bf68154a4c5_73_justReleased,"flixel.addons.ui.FlxBaseMultiInput","justReleased",0xc87d8874,"flixel.addons.ui.FlxBaseMultiInput.justReleased","flixel/addons/ui/FlxBaseMultiInput.hx",73,0x748f1d1c)
HX_LOCAL_STACK_FRAME(_hx_pos_496c6bf68154a4c5_81_pressed,"flixel.addons.ui.FlxBaseMultiInput","pressed",0xe7115d17,"flixel.addons.ui.FlxBaseMultiInput.pressed","flixel/addons/ui/FlxBaseMultiInput.hx",81,0x748f1d1c)
HX_LOCAL_STACK_FRAME(_hx_pos_496c6bf68154a4c5_85_equals,"flixel.addons.ui.FlxBaseMultiInput","equals",0x1edc296a,"flixel.addons.ui.FlxBaseMultiInput.equals","flixel/addons/ui/FlxBaseMultiInput.hx",85,0x748f1d1c)
HX_LOCAL_STACK_FRAME(_hx_pos_496c6bf68154a4c5_133_passCombosAndForbiddens,"flixel.addons.ui.FlxBaseMultiInput","passCombosAndForbiddens",0x9987f990,"flixel.addons.ui.FlxBaseMultiInput.passCombosAndForbiddens","flixel/addons/ui/FlxBaseMultiInput.hx",133,0x748f1d1c)
HX_LOCAL_STACK_FRAME(_hx_pos_496c6bf68154a4c5_146_checkCombos,"flixel.addons.ui.FlxBaseMultiInput","checkCombos",0xdd515842,"flixel.addons.ui.FlxBaseMultiInput.checkCombos","flixel/addons/ui/FlxBaseMultiInput.hx",146,0x748f1d1c)
HX_LOCAL_STACK_FRAME(_hx_pos_496c6bf68154a4c5_152_checkForbiddens,"flixel.addons.ui.FlxBaseMultiInput","checkForbiddens",0x356abfb7,"flixel.addons.ui.FlxBaseMultiInput.checkForbiddens","flixel/addons/ui/FlxBaseMultiInput.hx",152,0x748f1d1c)
namespace flixel{
namespace addons{
namespace ui{

void FlxBaseMultiInput_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_496c6bf68154a4c5_32_new)
            	}

Dynamic FlxBaseMultiInput_obj::__CreateEmpty() { return new FlxBaseMultiInput_obj; }

void *FlxBaseMultiInput_obj::_hx_vtable = 0;

Dynamic FlxBaseMultiInput_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxBaseMultiInput_obj > _hx_result = new FlxBaseMultiInput_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxBaseMultiInput_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2c2c85f1;
}

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_addons_ui_FlxBaseMultiInput__hx_flixel_util_IFlxDestroyable= {
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxBaseMultiInput_obj::destroy,
};

void *FlxBaseMultiInput_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xd4fe2fcd: return &_hx_flixel_addons_ui_FlxBaseMultiInput__hx_flixel_util_IFlxDestroyable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void FlxBaseMultiInput_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_496c6bf68154a4c5_37_destroy)
HXLINE(  38)		this->combos = null();
HXLINE(  39)		this->forbiddens = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseMultiInput_obj,destroy,(void))

bool FlxBaseMultiInput_obj::checkJustPressed(){
            	HX_STACKFRAME(&_hx_pos_496c6bf68154a4c5_44_checkJustPressed)
HXDLIN(  44)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseMultiInput_obj,checkJustPressed,return )

bool FlxBaseMultiInput_obj::checkJustReleased(){
            	HX_STACKFRAME(&_hx_pos_496c6bf68154a4c5_50_checkJustReleased)
HXDLIN(  50)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseMultiInput_obj,checkJustReleased,return )

bool FlxBaseMultiInput_obj::checkPressed(){
            	HX_STACKFRAME(&_hx_pos_496c6bf68154a4c5_56_checkPressed)
HXDLIN(  56)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseMultiInput_obj,checkPressed,return )

bool FlxBaseMultiInput_obj::justPressed(){
            	HX_STACKFRAME(&_hx_pos_496c6bf68154a4c5_65_justPressed)
HXDLIN(  65)		if (this->checkJustPressed()) {
HXDLIN(  65)			return this->passCombosAndForbiddens(null(),null());
            		}
            		else {
HXDLIN(  65)			return false;
            		}
HXDLIN(  65)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseMultiInput_obj,justPressed,return )

bool FlxBaseMultiInput_obj::justReleased(){
            	HX_STACKFRAME(&_hx_pos_496c6bf68154a4c5_73_justReleased)
HXDLIN(  73)		if (this->checkJustReleased()) {
HXDLIN(  73)			if (::hx::IsNotNull( this->forbiddens )) {
HXDLIN(  73)				return this->checkForbiddens(false);
            			}
            			else {
HXDLIN(  73)				return true;
            			}
            		}
            		else {
HXDLIN(  73)			return false;
            		}
HXDLIN(  73)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseMultiInput_obj,justReleased,return )

bool FlxBaseMultiInput_obj::pressed(){
            	HX_STACKFRAME(&_hx_pos_496c6bf68154a4c5_81_pressed)
HXDLIN(  81)		if (this->checkPressed()) {
HXDLIN(  81)			return this->passCombosAndForbiddens(null(),null());
            		}
            		else {
HXDLIN(  81)			return false;
            		}
HXDLIN(  81)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseMultiInput_obj,pressed,return )

bool FlxBaseMultiInput_obj::equals( ::flixel::addons::ui::FlxBaseMultiInput other){
            	HX_STACKFRAME(&_hx_pos_496c6bf68154a4c5_85_equals)
HXLINE(  86)		if (::hx::IsNull( other )) {
HXLINE(  88)			return false;
            		}
HXLINE(  90)		 ::ValueType _hx_tmp = ::Type_obj::_hx_typeof(other);
HXDLIN(  90)		if (::hx::IsPointerNotEq( _hx_tmp,::Type_obj::_hx_typeof(::hx::ObjectPtr<OBJ_>(this)) )) {
HXLINE(  92)			return false;
            		}
HXLINE(  94)		if ((this->input != other->input)) {
HXLINE(  96)			return false;
            		}
HXLINE(  98)		if ((::hx::IsNull( this->combos ) != ::hx::IsNull( other->combos ))) {
HXLINE( 100)			return false;
            		}
HXLINE( 102)		if ((::hx::IsNull( this->forbiddens ) != ::hx::IsNull( other->forbiddens ))) {
HXLINE( 104)			return false;
            		}
HXLINE( 106)		bool _hx_tmp1;
HXDLIN( 106)		if (::hx::IsNotNull( this->combos )) {
HXLINE( 106)			_hx_tmp1 = ::hx::IsNotNull( other->combos );
            		}
            		else {
HXLINE( 106)			_hx_tmp1 = false;
            		}
HXDLIN( 106)		if (_hx_tmp1) {
HXLINE( 108)			int _g = 0;
HXDLIN( 108)			::Array< int > _g1 = this->combos;
HXDLIN( 108)			while((_g < _g1->length)){
HXLINE( 108)				int i = _g1->__get(_g);
HXDLIN( 108)				_g = (_g + 1);
HXLINE( 110)				if ((other->combos->indexOf(i,null()) == -1)) {
HXLINE( 112)					return false;
            				}
            			}
            		}
HXLINE( 116)		bool _hx_tmp2;
HXDLIN( 116)		if (::hx::IsNotNull( this->forbiddens )) {
HXLINE( 116)			_hx_tmp2 = ::hx::IsNotNull( other->forbiddens );
            		}
            		else {
HXLINE( 116)			_hx_tmp2 = false;
            		}
HXDLIN( 116)		if (_hx_tmp2) {
HXLINE( 118)			int _g2 = 0;
HXDLIN( 118)			::Array< int > _g3 = this->forbiddens;
HXDLIN( 118)			while((_g2 < _g3->length)){
HXLINE( 118)				int i1 = _g3->__get(_g2);
HXDLIN( 118)				_g2 = (_g2 + 1);
HXLINE( 120)				if ((other->forbiddens->indexOf(i1,null()) == -1)) {
HXLINE( 122)					return false;
            				}
            			}
            		}
HXLINE( 126)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseMultiInput_obj,equals,return )

bool FlxBaseMultiInput_obj::passCombosAndForbiddens(::hx::Null< bool >  __o_comboValue,::hx::Null< bool >  __o_forbiddenValue){
            		bool comboValue = __o_comboValue.Default(true);
            		bool forbiddenValue = __o_forbiddenValue.Default(false);
            	HX_STACKFRAME(&_hx_pos_496c6bf68154a4c5_133_passCombosAndForbiddens)
HXLINE( 135)		bool passCombos;
HXDLIN( 135)		if (::hx::IsNotNull( this->combos )) {
HXLINE( 135)			passCombos = this->checkCombos(comboValue);
            		}
            		else {
HXLINE( 135)			passCombos = true;
            		}
HXLINE( 137)		bool passForbiddens;
HXDLIN( 137)		if (::hx::IsNotNull( this->forbiddens )) {
HXLINE( 137)			passForbiddens = this->checkForbiddens(forbiddenValue);
            		}
            		else {
HXLINE( 137)			passForbiddens = true;
            		}
HXLINE( 140)		if (passCombos) {
HXLINE( 140)			return passForbiddens;
            		}
            		else {
HXLINE( 140)			return false;
            		}
HXDLIN( 140)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxBaseMultiInput_obj,passCombosAndForbiddens,return )

bool FlxBaseMultiInput_obj::checkCombos(bool value){
            	HX_STACKFRAME(&_hx_pos_496c6bf68154a4c5_146_checkCombos)
HXDLIN( 146)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseMultiInput_obj,checkCombos,return )

bool FlxBaseMultiInput_obj::checkForbiddens(bool value){
            	HX_STACKFRAME(&_hx_pos_496c6bf68154a4c5_152_checkForbiddens)
HXDLIN( 152)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseMultiInput_obj,checkForbiddens,return )


::hx::ObjectPtr< FlxBaseMultiInput_obj > FlxBaseMultiInput_obj::__new() {
	::hx::ObjectPtr< FlxBaseMultiInput_obj > __this = new FlxBaseMultiInput_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< FlxBaseMultiInput_obj > FlxBaseMultiInput_obj::__alloc(::hx::Ctx *_hx_ctx) {
	FlxBaseMultiInput_obj *__this = (FlxBaseMultiInput_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxBaseMultiInput_obj), true, "flixel.addons.ui.FlxBaseMultiInput"));
	*(void **)__this = FlxBaseMultiInput_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FlxBaseMultiInput_obj::FlxBaseMultiInput_obj()
{
}

void FlxBaseMultiInput_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxBaseMultiInput);
	HX_MARK_MEMBER_NAME(input,"input");
	HX_MARK_MEMBER_NAME(combos,"combos");
	HX_MARK_MEMBER_NAME(forbiddens,"forbiddens");
	HX_MARK_END_CLASS();
}

void FlxBaseMultiInput_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(input,"input");
	HX_VISIT_MEMBER_NAME(combos,"combos");
	HX_VISIT_MEMBER_NAME(forbiddens,"forbiddens");
}

::hx::Val FlxBaseMultiInput_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"input") ) { return ::hx::Val( input ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"combos") ) { return ::hx::Val( combos ); }
		if (HX_FIELD_EQ(inName,"equals") ) { return ::hx::Val( equals_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"pressed") ) { return ::hx::Val( pressed_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"forbiddens") ) { return ::hx::Val( forbiddens ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"justPressed") ) { return ::hx::Val( justPressed_dyn() ); }
		if (HX_FIELD_EQ(inName,"checkCombos") ) { return ::hx::Val( checkCombos_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"checkPressed") ) { return ::hx::Val( checkPressed_dyn() ); }
		if (HX_FIELD_EQ(inName,"justReleased") ) { return ::hx::Val( justReleased_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"checkForbiddens") ) { return ::hx::Val( checkForbiddens_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"checkJustPressed") ) { return ::hx::Val( checkJustPressed_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"checkJustReleased") ) { return ::hx::Val( checkJustReleased_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"passCombosAndForbiddens") ) { return ::hx::Val( passCombosAndForbiddens_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxBaseMultiInput_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"input") ) { input=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"combos") ) { combos=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"forbiddens") ) { forbiddens=inValue.Cast< ::Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxBaseMultiInput_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("input",0a,c4,1d,be));
	outFields->push(HX_("combos",65,1c,26,c7));
	outFields->push(HX_("forbiddens",5a,d1,f7,49));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxBaseMultiInput_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(FlxBaseMultiInput_obj,input),HX_("input",0a,c4,1d,be)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(FlxBaseMultiInput_obj,combos),HX_("combos",65,1c,26,c7)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(FlxBaseMultiInput_obj,forbiddens),HX_("forbiddens",5a,d1,f7,49)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxBaseMultiInput_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxBaseMultiInput_obj_sMemberFields[] = {
	HX_("input",0a,c4,1d,be),
	HX_("combos",65,1c,26,c7),
	HX_("forbiddens",5a,d1,f7,49),
	HX_("destroy",fa,2c,86,24),
	HX_("checkJustPressed",ee,b1,87,a7),
	HX_("checkJustReleased",f1,0b,0a,f6),
	HX_("checkPressed",ba,8a,6d,27),
	HX_("justPressed",d6,0d,a7,f2),
	HX_("justReleased",09,1b,5b,66),
	HX_("pressed",a2,d2,e6,39),
	HX_("equals",3f,ee,f2,bf),
	HX_("passCombosAndForbiddens",1b,75,ba,2f),
	HX_("checkCombos",4d,ef,37,a9),
	HX_("checkForbiddens",42,38,51,c3),
	::String(null()) };

::hx::Class FlxBaseMultiInput_obj::__mClass;

void FlxBaseMultiInput_obj::__register()
{
	FlxBaseMultiInput_obj _hx_dummy;
	FlxBaseMultiInput_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.ui.FlxBaseMultiInput",e3,ed,d4,e7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxBaseMultiInput_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxBaseMultiInput_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxBaseMultiInput_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxBaseMultiInput_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
