// Generated by Haxe 4.3.2
#ifndef INCLUDED_flxanimate_geom_FlxMatrix3D
#define INCLUDED_flxanimate_geom_FlxMatrix3D

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_geom_Matrix3D
#include <openfl/geom/Matrix3D.h>
#endif
HX_DECLARE_CLASS2(flixel,math,FlxMatrix)
HX_DECLARE_CLASS2(flxanimate,geom,FlxMatrix3D)
HX_DECLARE_CLASS2(openfl,_Vector,FloatVector)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Matrix3D)

namespace flxanimate{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES FlxMatrix3D_obj : public  ::openfl::geom::Matrix3D_obj
{
	public:
		typedef  ::openfl::geom::Matrix3D_obj super;
		typedef FlxMatrix3D_obj OBJ_;
		FlxMatrix3D_obj();

	public:
		enum { _hx_ClassId = 0x7fe41419 };

		void __construct( ::openfl::_Vector::FloatVector v);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flxanimate.geom.FlxMatrix3D")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flxanimate.geom.FlxMatrix3D"); }
		static ::hx::ObjectPtr< FlxMatrix3D_obj > __new( ::openfl::_Vector::FloatVector v);
		static ::hx::ObjectPtr< FlxMatrix3D_obj > __alloc(::hx::Ctx *_hx_ctx, ::openfl::_Vector::FloatVector v);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxMatrix3D_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxMatrix3D",a4,0f,0a,7e); }

		static  ::flxanimate::geom::FlxMatrix3D fromMatrix( ::flixel::math::FlxMatrix m);
		static ::Dynamic fromMatrix_dyn();

		void concat2D( ::openfl::geom::Matrix m);
		::Dynamic concat2D_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

		 ::flixel::math::FlxMatrix toMatrix();
		::Dynamic toMatrix_dyn();

		 ::openfl::geom::Matrix3D clone();

};

} // end namespace flxanimate
} // end namespace geom

#endif /* INCLUDED_flxanimate_geom_FlxMatrix3D */ 
