// Generated by Haxe 4.3.2
#include <hxcpp.h>

#ifndef INCLUDED_flxanimate_data_AnimationData
#include <flxanimate/data/AnimationData.h>
#endif
#ifndef INCLUDED_flxanimate_data__AnimationData_Bitmap_Impl_
#include <flxanimate/data/_AnimationData/Bitmap_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_baefe7e52ee85f37_871_get_N,"flxanimate.data._AnimationData.Bitmap_Impl_","get_N",0xa0ee85e0,"flxanimate.data._AnimationData.Bitmap_Impl_.get_N","flxanimate/data/AnimationData.hx",871,0xa9372435)
static const ::String _hx_array_data_8f88b2e9_1[] = {
	HX_("N",4e,00,00,00),HX_("name",4b,72,ff,48),
};
HX_LOCAL_STACK_FRAME(_hx_pos_baefe7e52ee85f37_875_get_POS,"flxanimate.data._AnimationData.Bitmap_Impl_","get_POS",0x9e058786,"flxanimate.data._AnimationData.Bitmap_Impl_.get_POS","flxanimate/data/AnimationData.hx",875,0xa9372435)
static const ::String _hx_array_data_8f88b2e9_3[] = {
	HX_("POS",74,f9,3c,00),HX_("Position",c9,5c,ac,a4),
};
namespace flxanimate{
namespace data{
namespace _AnimationData{

void Bitmap_Impl__obj::__construct() { }

Dynamic Bitmap_Impl__obj::__CreateEmpty() { return new Bitmap_Impl__obj; }

void *Bitmap_Impl__obj::_hx_vtable = 0;

Dynamic Bitmap_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Bitmap_Impl__obj > _hx_result = new Bitmap_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Bitmap_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x181e3037;
}

::String Bitmap_Impl__obj::get_N( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_baefe7e52ee85f37_871_get_N)
HXDLIN( 871)		return ( (::String)(::flxanimate::data::AnimationData_obj::setFieldBool(this1,::Array_obj< ::String >::fromData( _hx_array_data_8f88b2e9_1,2),null())) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Bitmap_Impl__obj,get_N,return )

 ::Dynamic Bitmap_Impl__obj::get_POS( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_baefe7e52ee85f37_875_get_POS)
HXDLIN( 875)		return ::flxanimate::data::AnimationData_obj::setFieldBool(this1,::Array_obj< ::String >::fromData( _hx_array_data_8f88b2e9_3,2),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Bitmap_Impl__obj,get_POS,return )


Bitmap_Impl__obj::Bitmap_Impl__obj()
{
}

bool Bitmap_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"get_N") ) { outValue = get_N_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_POS") ) { outValue = get_POS_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Bitmap_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Bitmap_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class Bitmap_Impl__obj::__mClass;

static ::String Bitmap_Impl__obj_sStaticFields[] = {
	HX_("get_N",25,a5,60,91),
	HX_("get_POS",0b,c2,b1,26),
	::String(null())
};

void Bitmap_Impl__obj::__register()
{
	Bitmap_Impl__obj _hx_dummy;
	Bitmap_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flxanimate.data._AnimationData.Bitmap_Impl_",e9,b2,88,8f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Bitmap_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Bitmap_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Bitmap_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Bitmap_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Bitmap_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flxanimate
} // end namespace data
} // end namespace _AnimationData
