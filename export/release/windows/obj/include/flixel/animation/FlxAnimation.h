// Generated by Haxe 4.3.2
#ifndef INCLUDED_flixel_animation_FlxAnimation
#define INCLUDED_flixel_animation_FlxAnimation

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
#endif
HX_DECLARE_CLASS2(flixel,animation,FlxAnimation)
HX_DECLARE_CLASS2(flixel,animation,FlxAnimationController)
HX_DECLARE_CLASS2(flixel,animation,FlxBaseAnimation)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace animation{


class HXCPP_CLASS_ATTRIBUTES FlxAnimation_obj : public  ::flixel::animation::FlxBaseAnimation_obj
{
	public:
		typedef  ::flixel::animation::FlxBaseAnimation_obj super;
		typedef FlxAnimation_obj OBJ_;
		FlxAnimation_obj();

	public:
		enum { _hx_ClassId = 0x5cf1ddba };

		void __construct( ::flixel::animation::FlxAnimationController parent,::String name,::Array< int > frames,::hx::Null< Float >  __o_frameRate,::hx::Null< bool >  __o_looped,::hx::Null< bool >  __o_flipX,::hx::Null< bool >  __o_flipY);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.animation.FlxAnimation")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.animation.FlxAnimation"); }
		static ::hx::ObjectPtr< FlxAnimation_obj > __new( ::flixel::animation::FlxAnimationController parent,::String name,::Array< int > frames,::hx::Null< Float >  __o_frameRate,::hx::Null< bool >  __o_looped,::hx::Null< bool >  __o_flipX,::hx::Null< bool >  __o_flipY);
		static ::hx::ObjectPtr< FlxAnimation_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::animation::FlxAnimationController parent,::String name,::Array< int > frames,::hx::Null< Float >  __o_frameRate,::hx::Null< bool >  __o_looped,::hx::Null< bool >  __o_flipX,::hx::Null< bool >  __o_flipY);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxAnimation_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxAnimation",52,38,1d,68); }

		Float frameRate;
		int curFrame;
		Float frameDuration;
		bool finished;
		bool paused;
		bool looped;
		int loopPoint;
		bool reversed;
		bool flipX;
		bool flipY;
		::Array< int > frames;
		Float timeScale;
		Float _frameTimer;
		void destroy();

		void play(::hx::Null< bool >  Force,::hx::Null< bool >  Reversed,::hx::Null< int >  Frame);
		::Dynamic play_dyn();

		void restart();
		::Dynamic restart_dyn();

		void stop();
		::Dynamic stop_dyn();

		void reset();
		::Dynamic reset_dyn();

		void finish();
		::Dynamic finish_dyn();

		void pause();
		::Dynamic pause_dyn();

		void resume();
		::Dynamic resume_dyn();

		void reverse();
		::Dynamic reverse_dyn();

		void update(Float elapsed);

		Float getCurrentFrameDuration();
		::Dynamic getCurrentFrameDuration_dyn();

		 ::flixel::animation::FlxBaseAnimation clone( ::flixel::animation::FlxAnimationController newParent);

		Float set_frameRate(Float value);
		::Dynamic set_frameRate_dyn();

		int set_curFrame(int frame);
		::Dynamic set_curFrame_dyn();

		int get_numFrames();
		::Dynamic get_numFrames_dyn();

		Float get_delay();
		::Dynamic get_delay_dyn();

		Float set_delay(Float value);
		::Dynamic set_delay_dyn();

};

} // end namespace flixel
} // end namespace animation

#endif /* INCLUDED_flixel_animation_FlxAnimation */ 
