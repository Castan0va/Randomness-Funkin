// Generated by Haxe 4.3.2
#ifndef INCLUDED_backend_Mods
#define INCLUDED_backend_Mods

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(backend,Mods)

namespace backend{


class HXCPP_CLASS_ATTRIBUTES Mods_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Mods_obj OBJ_;
		Mods_obj();

	public:
		enum { _hx_ClassId = 0x51ebbac1 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="backend.Mods")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"backend.Mods"); }

		inline static ::hx::ObjectPtr< Mods_obj > __new() {
			::hx::ObjectPtr< Mods_obj > __this = new Mods_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Mods_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Mods_obj *__this = (Mods_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Mods_obj), false, "backend.Mods"));
			*(void **)__this = Mods_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Mods_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Mods",91,ff,39,33); }

		static void __boot();
		static ::String currentModDirectory;
		static ::Array< ::String > ignoreModFolders;
		static ::Array< ::String > globalMods;
		static ::Array< ::String > getGlobalMods();
		static ::Dynamic getGlobalMods_dyn();

		static ::Array< ::String > pushGlobalMods();
		static ::Dynamic pushGlobalMods_dyn();

		static ::Array< ::String > getModDirectories();
		static ::Dynamic getModDirectories_dyn();

		static ::Array< ::String > mergeAllTextsNamed(::String path,::String defaultDirectory,::hx::Null< bool >  allowDuplicates);
		static ::Dynamic mergeAllTextsNamed_dyn();

		static ::Array< ::String > directoriesWithFile(::String path,::String fileToFind,::hx::Null< bool >  mods);
		static ::Dynamic directoriesWithFile_dyn();

		static  ::Dynamic getPack(::String folder);
		static ::Dynamic getPack_dyn();

		static bool updatedOnState;
		static  ::Dynamic parseList();
		static ::Dynamic parseList_dyn();

		static void updateModList();
		static ::Dynamic updateModList_dyn();

		static void loadTopMod();
		static ::Dynamic loadTopMod_dyn();

};

} // end namespace backend

#endif /* INCLUDED_backend_Mods */ 
