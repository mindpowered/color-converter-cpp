// Generated by Haxe 4.1.1
#ifndef INCLUDED_colorconverter_ColorConverter
#define INCLUDED_colorconverter_ColorConverter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_16d41c6fc5b8bf5d
#define INCLUDED_16d41c6fc5b8bf5d
#include "maglev/MagLev.h"
#endif
HX_DECLARE_CLASS1(colorconverter,ColorConverter)

namespace colorconverter{


class HXCPP_CLASS_ATTRIBUTES ColorConverter_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ColorConverter_obj OBJ_;
		ColorConverter_obj();

	public:
		enum { _hx_ClassId = 0x7741da9e };

		void __construct( ::maglev::MagLev maglev);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="colorconverter.ColorConverter")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"colorconverter.ColorConverter"); }
		static ::hx::ObjectPtr< ColorConverter_obj > __new( ::maglev::MagLev maglev);
		static ::hx::ObjectPtr< ColorConverter_obj > __alloc(::hx::Ctx *_hx_ctx, ::maglev::MagLev maglev);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ColorConverter_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ColorConverter",5d,37,be,f1); }

		 ::maglev::MagLev maglev;
		void registerMyMethods();
		::Dynamic registerMyMethods_dyn();

};

} // end namespace colorconverter

#endif /* INCLUDED_colorconverter_ColorConverter */ 
