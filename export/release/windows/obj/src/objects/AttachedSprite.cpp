// Generated by Haxe 4.3.2
#include <hxcpp.h>

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
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
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
#ifndef INCLUDED_objects_AttachedSprite
#include <objects/AttachedSprite.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c3710fcdea33d1bc_3_new,"objects.AttachedSprite","new",0x8f6c4f75,"objects.AttachedSprite.new","objects/AttachedSprite.hx",3,0x84af047a)
HX_LOCAL_STACK_FRAME(_hx_pos_c3710fcdea33d1bc_30_update,"objects.AttachedSprite","update",0x76e7e214,"objects.AttachedSprite.update","objects/AttachedSprite.hx",30,0x84af047a)
namespace objects{

void AttachedSprite_obj::__construct(::String file,::String anim,::String library, ::Dynamic __o_loop){
            		 ::Dynamic loop = __o_loop;
            		if (::hx::IsNull(__o_loop)) loop = false;
            	HX_STACKFRAME(&_hx_pos_c3710fcdea33d1bc_3_new)
HXLINE(  13)		this->copyVisible = false;
HXLINE(  12)		this->copyAlpha = true;
HXLINE(  11)		this->copyAngle = true;
HXLINE(   9)		this->alphaMult = ((Float)1);
HXLINE(   8)		this->angleAdd = ((Float)0);
HXLINE(   7)		this->yAdd = ((Float)0);
HXLINE(   6)		this->xAdd = ((Float)0);
HXLINE(  17)		super::__construct(null(),null(),null());
HXLINE(  18)		if (::hx::IsNotNull( anim )) {
HXLINE(  19)			 ::flixel::graphics::FlxGraphic imageLoaded = ::backend::Paths_obj::image(file,library,true);
HXDLIN(  19)			bool xmlExists = false;
HXDLIN(  19)			::String xml = ::backend::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + file) + HX_(".xml",69,3e,c3,1e)));
HXDLIN(  19)			if (::sys::FileSystem_obj::exists(xml)) {
HXLINE(  19)				xmlExists = true;
            			}
HXDLIN(  19)			 ::Dynamic _hx_tmp;
HXDLIN(  19)			if (xmlExists) {
HXLINE(  19)				_hx_tmp = ::sys::io::File_obj::getContent(xml);
            			}
            			else {
HXLINE(  19)				_hx_tmp = ::backend::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + file) + HX_(".xml",69,3e,c3,1e)),null(),library,null());
            			}
HXDLIN(  19)			this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(imageLoaded,_hx_tmp));
HXLINE(  20)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),anim,24,loop,null(),null());
HXLINE(  21)			this->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
            		}
            		else {
HXLINE(  22)			if (::hx::IsNotNull( file )) {
HXLINE(  23)				this->loadGraphic(::backend::Paths_obj::image(file,null(),null()),null(),null(),null(),null(),null());
            			}
            		}
HXLINE(  25)		this->set_antialiasing(::backend::ClientPrefs_obj::data->antialiasing);
HXLINE(  26)		{
HXLINE(  26)			 ::flixel::math::FlxBasePoint this1 = this->scrollFactor;
HXDLIN(  26)			this1->set_x(( (Float)(0) ));
HXDLIN(  26)			this1->set_y(( (Float)(0) ));
            		}
            	}

Dynamic AttachedSprite_obj::__CreateEmpty() { return new AttachedSprite_obj; }

void *AttachedSprite_obj::_hx_vtable = 0;

Dynamic AttachedSprite_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AttachedSprite_obj > _hx_result = new AttachedSprite_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool AttachedSprite_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x41750f7d) {
		if (inClassId<=(int)0x2c01639b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
		} else {
			return inClassId==(int)0x41750f7d;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void AttachedSprite_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_c3710fcdea33d1bc_30_update)
HXLINE(  31)		this->super::update(elapsed);
HXLINE(  33)		if (::hx::IsNotNull( this->sprTracker )) {
HXLINE(  34)			this->setPosition((this->sprTracker->x + this->xAdd),(this->sprTracker->y + this->yAdd));
HXLINE(  35)			{
HXLINE(  35)				 ::flixel::math::FlxBasePoint this1 = this->scrollFactor;
HXDLIN(  35)				Float y = this->sprTracker->scrollFactor->y;
HXDLIN(  35)				this1->set_x(this->sprTracker->scrollFactor->x);
HXDLIN(  35)				this1->set_y(y);
            			}
HXLINE(  37)			if (this->copyAngle) {
HXLINE(  38)				this->set_angle((this->sprTracker->angle + this->angleAdd));
            			}
HXLINE(  40)			if (this->copyAlpha) {
HXLINE(  41)				this->set_alpha((this->sprTracker->alpha * this->alphaMult));
            			}
HXLINE(  43)			if (this->copyVisible) {
HXLINE(  44)				this->set_visible(this->sprTracker->visible);
            			}
            		}
            	}



::hx::ObjectPtr< AttachedSprite_obj > AttachedSprite_obj::__new(::String file,::String anim,::String library, ::Dynamic __o_loop) {
	::hx::ObjectPtr< AttachedSprite_obj > __this = new AttachedSprite_obj();
	__this->__construct(file,anim,library,__o_loop);
	return __this;
}

::hx::ObjectPtr< AttachedSprite_obj > AttachedSprite_obj::__alloc(::hx::Ctx *_hx_ctx,::String file,::String anim,::String library, ::Dynamic __o_loop) {
	AttachedSprite_obj *__this = (AttachedSprite_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AttachedSprite_obj), true, "objects.AttachedSprite"));
	*(void **)__this = AttachedSprite_obj::_hx_vtable;
	__this->__construct(file,anim,library,__o_loop);
	return __this;
}

AttachedSprite_obj::AttachedSprite_obj()
{
}

void AttachedSprite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AttachedSprite);
	HX_MARK_MEMBER_NAME(sprTracker,"sprTracker");
	HX_MARK_MEMBER_NAME(xAdd,"xAdd");
	HX_MARK_MEMBER_NAME(yAdd,"yAdd");
	HX_MARK_MEMBER_NAME(angleAdd,"angleAdd");
	HX_MARK_MEMBER_NAME(alphaMult,"alphaMult");
	HX_MARK_MEMBER_NAME(copyAngle,"copyAngle");
	HX_MARK_MEMBER_NAME(copyAlpha,"copyAlpha");
	HX_MARK_MEMBER_NAME(copyVisible,"copyVisible");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AttachedSprite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(sprTracker,"sprTracker");
	HX_VISIT_MEMBER_NAME(xAdd,"xAdd");
	HX_VISIT_MEMBER_NAME(yAdd,"yAdd");
	HX_VISIT_MEMBER_NAME(angleAdd,"angleAdd");
	HX_VISIT_MEMBER_NAME(alphaMult,"alphaMult");
	HX_VISIT_MEMBER_NAME(copyAngle,"copyAngle");
	HX_VISIT_MEMBER_NAME(copyAlpha,"copyAlpha");
	HX_VISIT_MEMBER_NAME(copyVisible,"copyVisible");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val AttachedSprite_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"xAdd") ) { return ::hx::Val( xAdd ); }
		if (HX_FIELD_EQ(inName,"yAdd") ) { return ::hx::Val( yAdd ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"angleAdd") ) { return ::hx::Val( angleAdd ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"alphaMult") ) { return ::hx::Val( alphaMult ); }
		if (HX_FIELD_EQ(inName,"copyAngle") ) { return ::hx::Val( copyAngle ); }
		if (HX_FIELD_EQ(inName,"copyAlpha") ) { return ::hx::Val( copyAlpha ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sprTracker") ) { return ::hx::Val( sprTracker ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"copyVisible") ) { return ::hx::Val( copyVisible ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val AttachedSprite_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"xAdd") ) { xAdd=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yAdd") ) { yAdd=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"angleAdd") ) { angleAdd=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"alphaMult") ) { alphaMult=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"copyAngle") ) { copyAngle=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"copyAlpha") ) { copyAlpha=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sprTracker") ) { sprTracker=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"copyVisible") ) { copyVisible=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AttachedSprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("sprTracker",03,a3,e2,78));
	outFields->push(HX_("xAdd",89,44,83,4f));
	outFields->push(HX_("yAdd",28,7b,2c,50));
	outFields->push(HX_("angleAdd",0e,4c,53,2b));
	outFields->push(HX_("alphaMult",6e,42,5f,e2));
	outFields->push(HX_("copyAngle",de,67,dd,a8));
	outFields->push(HX_("copyAlpha",69,cb,91,a7));
	outFields->push(HX_("copyVisible",3d,f5,38,f9));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo AttachedSprite_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(AttachedSprite_obj,sprTracker),HX_("sprTracker",03,a3,e2,78)},
	{::hx::fsFloat,(int)offsetof(AttachedSprite_obj,xAdd),HX_("xAdd",89,44,83,4f)},
	{::hx::fsFloat,(int)offsetof(AttachedSprite_obj,yAdd),HX_("yAdd",28,7b,2c,50)},
	{::hx::fsFloat,(int)offsetof(AttachedSprite_obj,angleAdd),HX_("angleAdd",0e,4c,53,2b)},
	{::hx::fsFloat,(int)offsetof(AttachedSprite_obj,alphaMult),HX_("alphaMult",6e,42,5f,e2)},
	{::hx::fsBool,(int)offsetof(AttachedSprite_obj,copyAngle),HX_("copyAngle",de,67,dd,a8)},
	{::hx::fsBool,(int)offsetof(AttachedSprite_obj,copyAlpha),HX_("copyAlpha",69,cb,91,a7)},
	{::hx::fsBool,(int)offsetof(AttachedSprite_obj,copyVisible),HX_("copyVisible",3d,f5,38,f9)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *AttachedSprite_obj_sStaticStorageInfo = 0;
#endif

static ::String AttachedSprite_obj_sMemberFields[] = {
	HX_("sprTracker",03,a3,e2,78),
	HX_("xAdd",89,44,83,4f),
	HX_("yAdd",28,7b,2c,50),
	HX_("angleAdd",0e,4c,53,2b),
	HX_("alphaMult",6e,42,5f,e2),
	HX_("copyAngle",de,67,dd,a8),
	HX_("copyAlpha",69,cb,91,a7),
	HX_("copyVisible",3d,f5,38,f9),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class AttachedSprite_obj::__mClass;

void AttachedSprite_obj::__register()
{
	AttachedSprite_obj _hx_dummy;
	AttachedSprite_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("objects.AttachedSprite",03,71,f0,36);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AttachedSprite_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AttachedSprite_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AttachedSprite_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AttachedSprite_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace objects
