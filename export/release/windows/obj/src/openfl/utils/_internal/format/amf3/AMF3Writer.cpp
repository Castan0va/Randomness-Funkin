// Generated by Haxe 4.3.2
#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_ds_EnumValueMap
#include <haxe/ds/EnumValueMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Encoding
#include <haxe/io/Encoding.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_haxe_xml_Printer
#include <haxe/xml/Printer.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils_IExternalizable
#include <openfl/utils/IExternalizable.h>
#endif
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#include <openfl/utils/_ByteArray/ByteArray_Impl_.h>
#endif
#ifndef INCLUDED_openfl_utils__Dictionary_UtilsObjectMap
#include <openfl/utils/_Dictionary/UtilsObjectMap.h>
#endif
#ifndef INCLUDED_openfl_utils__internal_format_amf3_AMF3Value
#include <openfl/utils/_internal/format/amf3/AMF3Value.h>
#endif
#ifndef INCLUDED_openfl_utils__internal_format_amf3_AMF3Writer
#include <openfl/utils/_internal/format/amf3/AMF3Writer.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_fff78221f5b8144c_39_new,"openfl.utils._internal.format.amf3.AMF3Writer","new",0x376314c9,"openfl.utils._internal.format.amf3.AMF3Writer.new","openfl/utils/_internal/format/amf3/AMF3Writer.hx",39,0xa13a8ac4)
HX_LOCAL_STACK_FRAME(_hx_pos_fff78221f5b8144c_46_writeInt,"openfl.utils._internal.format.amf3.AMF3Writer","writeInt",0x36838c47,"openfl.utils._internal.format.amf3.AMF3Writer.writeInt","openfl/utils/_internal/format/amf3/AMF3Writer.hx",46,0xa13a8ac4)
HX_LOCAL_STACK_FRAME(_hx_pos_fff78221f5b8144c_59_writeUInt,"openfl.utils._internal.format.amf3.AMF3Writer","writeUInt",0x8469a922,"openfl.utils._internal.format.amf3.AMF3Writer.writeUInt","openfl/utils/_internal/format/amf3/AMF3Writer.hx",59,0xa13a8ac4)
HX_LOCAL_STACK_FRAME(_hx_pos_fff78221f5b8144c_92_writeString,"openfl.utils._internal.format.amf3.AMF3Writer","writeString",0xa920d079,"openfl.utils._internal.format.amf3.AMF3Writer.writeString","openfl/utils/_internal/format/amf3/AMF3Writer.hx",92,0xa13a8ac4)
HX_LOCAL_STACK_FRAME(_hx_pos_fff78221f5b8144c_134_writeIntVector,"openfl.utils._internal.format.amf3.AMF3Writer","writeIntVector",0x8c1aa06a,"openfl.utils._internal.format.amf3.AMF3Writer.writeIntVector","openfl/utils/_internal/format/amf3/AMF3Writer.hx",134,0xa13a8ac4)
HX_LOCAL_STACK_FRAME(_hx_pos_fff78221f5b8144c_145_writeFloatVector,"openfl.utils._internal.format.amf3.AMF3Writer","writeFloatVector",0xa5c59ed7,"openfl.utils._internal.format.amf3.AMF3Writer.writeFloatVector","openfl/utils/_internal/format/amf3/AMF3Writer.hx",145,0xa13a8ac4)
HX_LOCAL_STACK_FRAME(_hx_pos_fff78221f5b8144c_156_writeObjectVector,"openfl.utils._internal.format.amf3.AMF3Writer","writeObjectVector",0x67e5928a,"openfl.utils._internal.format.amf3.AMF3Writer.writeObjectVector","openfl/utils/_internal/format/amf3/AMF3Writer.hx",156,0xa13a8ac4)
HX_LOCAL_STACK_FRAME(_hx_pos_fff78221f5b8144c_168_writeObject,"openfl.utils._internal.format.amf3.AMF3Writer","writeObject",0xad302667,"openfl.utils._internal.format.amf3.AMF3Writer.writeObject","openfl/utils/_internal/format/amf3/AMF3Writer.hx",168,0xa13a8ac4)
HX_LOCAL_STACK_FRAME(_hx_pos_fff78221f5b8144c_197_writeExternal,"openfl.utils._internal.format.amf3.AMF3Writer","writeExternal",0xd6ab23f3,"openfl.utils._internal.format.amf3.AMF3Writer.writeExternal","openfl/utils/_internal/format/amf3/AMF3Writer.hx",197,0xa13a8ac4)
HX_LOCAL_STACK_FRAME(_hx_pos_fff78221f5b8144c_222_write,"openfl.utils._internal.format.amf3.AMF3Writer","write",0x5d115d88,"openfl.utils._internal.format.amf3.AMF3Writer.write","openfl/utils/_internal/format/amf3/AMF3Writer.hx",222,0xa13a8ac4)
namespace openfl{
namespace utils{
namespace _internal{
namespace format{
namespace amf3{

void AMF3Writer_obj::__construct( ::haxe::io::Output o){
            	HX_STACKFRAME(&_hx_pos_fff78221f5b8144c_39_new)
HXLINE(  40)		this->o = o;
HXLINE(  41)		o->set_bigEndian(true);
            	}

Dynamic AMF3Writer_obj::__CreateEmpty() { return new AMF3Writer_obj; }

void *AMF3Writer_obj::_hx_vtable = 0;

Dynamic AMF3Writer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AMF3Writer_obj > _hx_result = new AMF3Writer_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool AMF3Writer_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x286917a3;
}

void AMF3Writer_obj::writeInt(int i){
            	HX_STACKFRAME(&_hx_pos_fff78221f5b8144c_46_writeInt)
HXDLIN(  46)		bool _hx_tmp;
HXDLIN(  46)		if ((i <= 268435455)) {
HXDLIN(  46)			_hx_tmp = (i < -268435456);
            		}
            		else {
HXDLIN(  46)			_hx_tmp = true;
            		}
HXDLIN(  46)		if (_hx_tmp) {
HXLINE(  48)			this->o->writeByte(5);
HXLINE(  49)			this->o->writeDouble(( (Float)(i) ));
            		}
            		else {
HXLINE(  53)			this->o->writeByte(4);
HXLINE(  54)			this->writeUInt(i,null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(AMF3Writer_obj,writeInt,(void))

void AMF3Writer_obj::writeUInt(int u,::hx::Null< bool >  __o_shiftLeft){
            		bool shiftLeft = __o_shiftLeft.Default(false);
            	HX_STACKFRAME(&_hx_pos_fff78221f5b8144c_59_writeUInt)
HXLINE(  60)		if (shiftLeft) {
HXLINE(  60)			u = ((u << 1) | 1);
            		}
HXLINE(  61)		if (((::hx::UShr(u,31) & 1) == 1)) {
HXLINE(  61)			u = (u & 536870911);
            		}
HXLINE(  62)		int bits = 22;
HXDLIN(  62)		bool started = false;
HXLINE(  63)		int chunk = ::hx::UShr(u,(bits - 1));
HXLINE(  64)		bool aNeg = (chunk < 0);
HXDLIN(  64)		bool bNeg = (0 < 0);
HXDLIN(  64)		bool _hx_tmp;
HXDLIN(  64)		if ((aNeg != bNeg)) {
HXLINE(  64)			_hx_tmp = aNeg;
            		}
            		else {
HXLINE(  64)			_hx_tmp = (chunk > 0);
            		}
HXDLIN(  64)		if (_hx_tmp) {
HXLINE(  66)			chunk = ::hx::UShr(chunk,1);
HXLINE(  67)			this->o->writeByte((chunk | 128));
HXLINE(  68)			u = (u - (chunk << bits));
HXLINE(  69)			bits = (bits + 1);
HXLINE(  70)			started = true;
            		}
HXLINE(  72)		bits = (bits - 8);
HXLINE(  73)		chunk = ::hx::UShr(u,bits);
HXLINE(  74)		bool _hx_tmp1;
HXDLIN(  74)		if (!(started)) {
HXLINE(  74)			bool aNeg1 = (chunk < 0);
HXDLIN(  74)			bool bNeg1 = (0 < 0);
HXDLIN(  74)			if ((aNeg1 != bNeg1)) {
HXLINE(  74)				_hx_tmp1 = aNeg1;
            			}
            			else {
HXLINE(  74)				_hx_tmp1 = (chunk > 0);
            			}
            		}
            		else {
HXLINE(  74)			_hx_tmp1 = true;
            		}
HXDLIN(  74)		if (_hx_tmp1) {
HXLINE(  76)			this->o->writeByte((chunk | 128));
HXLINE(  77)			u = (u - (chunk << bits));
HXLINE(  78)			started = true;
            		}
HXLINE(  80)		bits = (bits - 7);
HXLINE(  81)		chunk = ::hx::UShr(u,bits);
HXLINE(  82)		bool _hx_tmp2;
HXDLIN(  82)		if (!(started)) {
HXLINE(  82)			bool aNeg2 = (chunk < 0);
HXDLIN(  82)			bool bNeg2 = (0 < 0);
HXDLIN(  82)			if ((aNeg2 != bNeg2)) {
HXLINE(  82)				_hx_tmp2 = aNeg2;
            			}
            			else {
HXLINE(  82)				_hx_tmp2 = (chunk > 0);
            			}
            		}
            		else {
HXLINE(  82)			_hx_tmp2 = true;
            		}
HXDLIN(  82)		if (_hx_tmp2) {
HXLINE(  84)			this->o->writeByte((chunk | 128));
HXLINE(  85)			u = (u - (chunk << bits));
HXLINE(  86)			started = true;
            		}
HXLINE(  88)		this->o->writeByte(u);
            	}


HX_DEFINE_DYNAMIC_FUNC2(AMF3Writer_obj,writeUInt,(void))

void AMF3Writer_obj::writeString(::String s){
            	HX_STACKFRAME(&_hx_pos_fff78221f5b8144c_92_writeString)
HXLINE(  94)		 ::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::ofString(s,::haxe::io::Encoding_obj::UTF8_dyn());
HXLINE(  95)		this->writeUInt(bytes->length,true);
HXLINE(  96)		this->o->writeBytes(bytes,0,bytes->length);
            	}


HX_DEFINE_DYNAMIC_FUNC1(AMF3Writer_obj,writeString,(void))

void AMF3Writer_obj::writeIntVector( ::openfl::_Vector::IntVector v){
            	HX_STACKFRAME(&_hx_pos_fff78221f5b8144c_134_writeIntVector)
HXLINE( 135)		this->writeUInt(v->get_length(),true);
HXLINE( 136)		int _hx_tmp;
HXDLIN( 136)		if (v->fixed) {
HXLINE( 136)			_hx_tmp = 1;
            		}
            		else {
HXLINE( 136)			_hx_tmp = 0;
            		}
HXDLIN( 136)		this->o->writeByte(_hx_tmp);
HXLINE( 138)		{
HXLINE( 138)			int _g = 0;
HXDLIN( 138)			int _g1 = v->get_length();
HXDLIN( 138)			while((_g < _g1)){
HXLINE( 138)				_g = (_g + 1);
HXDLIN( 138)				int r = (_g - 1);
HXLINE( 140)				 ::haxe::io::Output _hx_tmp1 = this->o;
HXDLIN( 140)				_hx_tmp1->writeInt32(v->get(r));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(AMF3Writer_obj,writeIntVector,(void))

void AMF3Writer_obj::writeFloatVector( ::openfl::_Vector::FloatVector v){
            	HX_STACKFRAME(&_hx_pos_fff78221f5b8144c_145_writeFloatVector)
HXLINE( 146)		this->writeUInt(v->get_length(),true);
HXLINE( 147)		int _hx_tmp;
HXDLIN( 147)		if (v->fixed) {
HXLINE( 147)			_hx_tmp = 1;
            		}
            		else {
HXLINE( 147)			_hx_tmp = 0;
            		}
HXDLIN( 147)		this->o->writeByte(_hx_tmp);
HXLINE( 149)		{
HXLINE( 149)			int _g = 0;
HXDLIN( 149)			int _g1 = v->get_length();
HXDLIN( 149)			while((_g < _g1)){
HXLINE( 149)				_g = (_g + 1);
HXDLIN( 149)				int r = (_g - 1);
HXLINE( 151)				 ::haxe::io::Output _hx_tmp1 = this->o;
HXDLIN( 151)				_hx_tmp1->writeDouble(v->get(r));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(AMF3Writer_obj,writeFloatVector,(void))

void AMF3Writer_obj::writeObjectVector( ::openfl::_Vector::ObjectVector v,::String type){
            	HX_STACKFRAME(&_hx_pos_fff78221f5b8144c_156_writeObjectVector)
HXLINE( 157)		this->writeUInt(v->get_length(),true);
HXLINE( 158)		int _hx_tmp;
HXDLIN( 158)		if (v->fixed) {
HXLINE( 158)			_hx_tmp = 1;
            		}
            		else {
HXLINE( 158)			_hx_tmp = 0;
            		}
HXDLIN( 158)		this->o->writeByte(_hx_tmp);
HXLINE( 159)		this->o->writeString(type,null());
HXLINE( 161)		{
HXLINE( 161)			int _g = 0;
HXDLIN( 161)			int _g1 = v->get_length();
HXDLIN( 161)			while((_g < _g1)){
HXLINE( 161)				_g = (_g + 1);
HXDLIN( 161)				int r = (_g - 1);
HXLINE( 163)				this->write(v->get(r).StaticCast<  ::openfl::utils::_internal::format::amf3::AMF3Value >());
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(AMF3Writer_obj,writeObjectVector,(void))

void AMF3Writer_obj::writeObject( ::haxe::ds::StringMap h, ::Dynamic size,::String className){
            	HX_STACKFRAME(&_hx_pos_fff78221f5b8144c_168_writeObject)
HXLINE( 170)		if (::hx::IsNull( size )) {
HXLINE( 170)			this->o->writeByte(11);
            		}
            		else {
HXLINE( 172)			this->writeUInt(((( (int)(size) ) << 4) | 3),null());
            		}
HXLINE( 173)		this->o->writeByte(1);
HXLINE( 174)		if (::hx::IsNull( size )) {
HXLINE( 176)			{
HXLINE( 176)				 ::Dynamic f = h->keys();
HXDLIN( 176)				while(( (bool)(f->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 176)					::String f1 = ( (::String)(f->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 178)					this->writeString(f1);
HXLINE( 179)					this->write(h->get(f1));
            				}
            			}
HXLINE( 181)			this->o->writeByte(1);
            		}
            		else {
HXLINE( 185)			::Array< ::String > k = ::Array_obj< ::String >::__new();
HXLINE( 186)			{
HXLINE( 186)				 ::Dynamic f2 = h->keys();
HXDLIN( 186)				while(( (bool)(f2->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 186)					::String f3 = ( (::String)(f2->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 188)					k->push(f3);
HXLINE( 189)					this->writeString(f3);
            				}
            			}
HXLINE( 191)			{
HXLINE( 191)				int _g = 0;
HXDLIN( 191)				int _g1 = k->length;
HXDLIN( 191)				while((_g < _g1)){
HXLINE( 191)					_g = (_g + 1);
HXDLIN( 191)					int i = (_g - 1);
HXLINE( 192)					this->write(h->get(k->__get(i)));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(AMF3Writer_obj,writeObject,(void))

void AMF3Writer_obj::writeExternal(::Dynamic external){
            	HX_GC_STACKFRAME(&_hx_pos_fff78221f5b8144c_197_writeExternal)
HXLINE( 198)		bool isExternal = true;
HXLINE( 199)		bool isDynamic = false;
HXLINE( 200)		int traitsCount = 0;
HXLINE( 201)		int _hx_tmp;
HXDLIN( 201)		if (isExternal) {
HXLINE( 201)			_hx_tmp = 4;
            		}
            		else {
HXLINE( 201)			_hx_tmp = 0;
            		}
HXDLIN( 201)		int _hx_tmp1;
HXDLIN( 201)		if (isDynamic) {
HXLINE( 201)			_hx_tmp1 = 8;
            		}
            		else {
HXLINE( 201)			_hx_tmp1 = 0;
            		}
HXDLIN( 201)		this->writeUInt((((3 | _hx_tmp) | _hx_tmp1) | (traitsCount << 4)),null());
HXLINE( 202)		::hx::Class cls = ::Type_obj::getClass(external);
HXLINE( 203)		::String className = null();
HXLINE( 204)		if (::openfl::Lib_obj::_hx___registeredClasses->exists(cls)) {
HXLINE( 206)			className = ( (::String)(::openfl::Lib_obj::_hx___registeredClasses->get(cls)) );
            		}
HXLINE( 209)		if (::hx::IsNull( className )) {
HXLINE( 211)			className = ::Type_obj::getClassName(cls);
            		}
HXLINE( 213)		this->writeString(className);
HXLINE( 215)		 ::openfl::utils::ByteArrayData ba =  ::openfl::utils::ByteArrayData_obj::__alloc( HX_CTX ,0);
HXLINE( 216)		ba->_hx___endian = 0;
HXLINE( 217)		::openfl::utils::IExternalizable_obj::writeExternal(external,ba);
HXLINE( 218)		 ::haxe::io::Output _hx_tmp2 = this->o;
HXDLIN( 218)		 ::haxe::io::Bytes _hx_tmp3 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::toBytes(ba);
HXDLIN( 218)		_hx_tmp2->writeBytes(_hx_tmp3,0,::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(ba));
            	}


HX_DEFINE_DYNAMIC_FUNC1(AMF3Writer_obj,writeExternal,(void))

void AMF3Writer_obj::write( ::openfl::utils::_internal::format::amf3::AMF3Value v){
            	HX_STACKFRAME(&_hx_pos_fff78221f5b8144c_222_write)
HXLINE( 223)		 ::haxe::io::Output o = this->o;
HXLINE( 224)		switch((int)(v->_hx_getIndex())){
            			case (int)0: {
HXLINE( 227)				o->writeByte(0);
            			}
            			break;
            			case (int)1: {
HXLINE( 229)				o->writeByte(1);
            			}
            			break;
            			case (int)2: {
HXLINE( 230)				bool b = v->_hx_getBool(0);
HXLINE( 231)				int _hx_tmp;
HXDLIN( 231)				if (b) {
HXLINE( 231)					_hx_tmp = 3;
            				}
            				else {
HXLINE( 231)					_hx_tmp = 2;
            				}
HXDLIN( 231)				o->writeByte(_hx_tmp);
            			}
            			break;
            			case (int)3: {
HXLINE( 232)				int i = v->_hx_getInt(0);
HXLINE( 233)				this->writeInt(i);
            			}
            			break;
            			case (int)4: {
HXLINE( 234)				Float n = v->_hx_getFloat(0);
HXDLIN( 234)				{
HXLINE( 235)					o->writeByte(5);
HXLINE( 236)					o->writeDouble(n);
            				}
            			}
            			break;
            			case (int)5: {
HXLINE( 237)				::String s = v->_hx_getString(0);
HXDLIN( 237)				{
HXLINE( 238)					o->writeByte(6);
HXLINE( 239)					this->writeString(s);
            				}
            			}
            			break;
            			case (int)6: {
HXLINE( 240)				 ::Date d = v->_hx_getObject(0).StaticCast<  ::Date >();
HXDLIN( 240)				{
HXLINE( 241)					o->writeByte(8);
HXLINE( 242)					o->writeByte(1);
HXLINE( 243)					o->writeDouble(d->getTime());
            				}
            			}
            			break;
            			case (int)7: {
HXLINE( 267)				 ::haxe::ds::StringMap h = v->_hx_getObject(0).StaticCast<  ::haxe::ds::StringMap >();
HXDLIN( 267)				 ::Dynamic n1 = v->_hx_getObject(1);
HXDLIN( 267)				::String className = v->_hx_getString(2);
HXDLIN( 267)				{
HXLINE( 268)					o->writeByte(10);
HXLINE( 269)					this->writeObject(h,n1,className);
            				}
            			}
            			break;
            			case (int)8: {
HXLINE( 270)				::Dynamic e = v->_hx_getObject(0);
HXDLIN( 270)				{
HXLINE( 271)					o->writeByte(10);
HXLINE( 272)					this->writeExternal(e);
            				}
            			}
            			break;
            			case (int)9: {
HXLINE( 244)				::Array< ::Dynamic> a = v->_hx_getObject(0).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 244)				 ::haxe::ds::StringMap extra = v->_hx_getObject(1).StaticCast<  ::haxe::ds::StringMap >();
HXDLIN( 244)				{
HXLINE( 245)					o->writeByte(9);
HXLINE( 246)					this->writeUInt(a->length,true);
HXLINE( 247)					if (::hx::IsNotNull( extra )) {
HXLINE( 249)						 ::Dynamic mk = extra->keys();
HXDLIN( 249)						while(( (bool)(mk->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 249)							::String mk1 = ( (::String)(mk->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 251)							o->writeString(mk1,null());
HXLINE( 252)							this->write(extra->get(mk1));
            						}
            					}
HXLINE( 255)					o->writeByte(1);
HXLINE( 256)					{
HXLINE( 256)						int _g = 0;
HXDLIN( 256)						while((_g < a->length)){
HXLINE( 256)							 ::openfl::utils::_internal::format::amf3::AMF3Value f = a->__get(_g).StaticCast<  ::openfl::utils::_internal::format::amf3::AMF3Value >();
HXDLIN( 256)							_g = (_g + 1);
HXLINE( 257)							this->write(f);
            						}
            					}
            				}
            			}
            			break;
            			case (int)10: {
HXLINE( 258)				 ::openfl::_Vector::IntVector v1 = v->_hx_getObject(0).StaticCast<  ::openfl::_Vector::IntVector >();
HXDLIN( 258)				{
HXLINE( 259)					o->writeByte(13);
HXLINE( 260)					this->writeIntVector(v1);
            				}
            			}
            			break;
            			case (int)11: {
HXLINE( 261)				 ::openfl::_Vector::FloatVector v2 = v->_hx_getObject(0).StaticCast<  ::openfl::_Vector::FloatVector >();
HXDLIN( 261)				{
HXLINE( 262)					o->writeByte(15);
HXLINE( 263)					this->writeFloatVector(v2);
            				}
            			}
            			break;
            			case (int)12: {
HXLINE( 264)				::String _g1 = v->_hx_getString(1);
HXDLIN( 264)				{
HXLINE( 264)					 ::openfl::_Vector::ObjectVector v3 = v->_hx_getObject(0).StaticCast<  ::openfl::_Vector::ObjectVector >();
HXDLIN( 264)					{
HXLINE( 265)						o->writeByte(16);
HXLINE( 266)						this->writeObjectVector(v3,null());
            					}
            				}
            			}
            			break;
            			case (int)13: {
HXLINE( 273)				 ::Xml x = v->_hx_getObject(0).StaticCast<  ::Xml >();
HXDLIN( 273)				{
HXLINE( 274)					o->writeByte(11);
HXLINE( 275)					this->writeString(::haxe::xml::Printer_obj::print(x,null()));
            				}
            			}
            			break;
            			case (int)14: {
HXLINE( 276)				 ::openfl::utils::ByteArrayData b1 = v->_hx_getObject(0).StaticCast<  ::openfl::utils::ByteArrayData >();
HXDLIN( 276)				{
HXLINE( 277)					o->writeByte(12);
HXLINE( 278)					this->writeUInt(::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(b1),true);
HXLINE( 279)					o->write(::openfl::utils::_ByteArray::ByteArray_Impl__obj::toBytes(b1));
            				}
            			}
            			break;
            			case (int)15: {
HXLINE( 280)				 ::haxe::ds::EnumValueMap m = v->_hx_getObject(0).StaticCast<  ::haxe::ds::EnumValueMap >();
HXDLIN( 280)				{
HXLINE( 281)					o->writeByte(17);
HXLINE( 282)					this->writeUInt(::Lambda_obj::count(m,null()),true);
HXLINE( 283)					o->writeByte(0);
HXLINE( 284)					{
HXLINE( 284)						 ::Dynamic f1 = m->keys();
HXDLIN( 284)						while(( (bool)(f1->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 284)							 ::openfl::utils::_internal::format::amf3::AMF3Value f2 = f1->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXLINE( 286)							this->write(f2);
HXLINE( 287)							this->write(m->get(f2).StaticCast<  ::openfl::utils::_internal::format::amf3::AMF3Value >());
            						}
            					}
            				}
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(AMF3Writer_obj,write,(void))


::hx::ObjectPtr< AMF3Writer_obj > AMF3Writer_obj::__new( ::haxe::io::Output o) {
	::hx::ObjectPtr< AMF3Writer_obj > __this = new AMF3Writer_obj();
	__this->__construct(o);
	return __this;
}

::hx::ObjectPtr< AMF3Writer_obj > AMF3Writer_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::io::Output o) {
	AMF3Writer_obj *__this = (AMF3Writer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AMF3Writer_obj), true, "openfl.utils._internal.format.amf3.AMF3Writer"));
	*(void **)__this = AMF3Writer_obj::_hx_vtable;
	__this->__construct(o);
	return __this;
}

AMF3Writer_obj::AMF3Writer_obj()
{
}

void AMF3Writer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AMF3Writer);
	HX_MARK_MEMBER_NAME(o,"o");
	HX_MARK_END_CLASS();
}

void AMF3Writer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(o,"o");
}

::hx::Val AMF3Writer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"o") ) { return ::hx::Val( o ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"write") ) { return ::hx::Val( write_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"writeInt") ) { return ::hx::Val( writeInt_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"writeUInt") ) { return ::hx::Val( writeUInt_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"writeString") ) { return ::hx::Val( writeString_dyn() ); }
		if (HX_FIELD_EQ(inName,"writeObject") ) { return ::hx::Val( writeObject_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"writeExternal") ) { return ::hx::Val( writeExternal_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"writeIntVector") ) { return ::hx::Val( writeIntVector_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"writeFloatVector") ) { return ::hx::Val( writeFloatVector_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"writeObjectVector") ) { return ::hx::Val( writeObjectVector_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val AMF3Writer_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"o") ) { o=inValue.Cast<  ::haxe::io::Output >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AMF3Writer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("o",6f,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo AMF3Writer_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::io::Output */ ,(int)offsetof(AMF3Writer_obj,o),HX_("o",6f,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *AMF3Writer_obj_sStaticStorageInfo = 0;
#endif

static ::String AMF3Writer_obj_sMemberFields[] = {
	HX_("o",6f,00,00,00),
	HX_("writeInt",50,6d,f0,23),
	HX_("writeUInt",f9,af,41,56),
	HX_("writeString",10,7b,29,a6),
	HX_("writeIntVector",33,6e,27,26),
	HX_("writeFloatVector",e0,30,f8,76),
	HX_("writeObjectVector",61,c8,f2,a2),
	HX_("writeObject",fe,d0,38,aa),
	HX_("writeExternal",4a,e2,24,a7),
	HX_("write",df,6c,59,d0),
	::String(null()) };

::hx::Class AMF3Writer_obj::__mClass;

void AMF3Writer_obj::__register()
{
	AMF3Writer_obj _hx_dummy;
	AMF3Writer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.utils._internal.format.amf3.AMF3Writer",57,fc,9c,88);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AMF3Writer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AMF3Writer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AMF3Writer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AMF3Writer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace utils
} // end namespace _internal
} // end namespace format
} // end namespace amf3
