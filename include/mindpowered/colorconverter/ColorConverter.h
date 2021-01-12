#pragma once
/*!
 * Copyright Mind Powered Corporation 2020
 * 
 * https://mindpowered.dev/
 */

#include <maglev/MagLev.h>
#include <maglev/MagLevCpp.h>
#include <maglev/CppCallbackPtr.h>
#include <maglev/CppAny.h>
#include <colorconverter/ColorConverter.h>
#include <haxecpp/haxe_thread.h>
#include <string>
#include <map>

void __boot_maglev();
void __boot_colorconverter();

/*!
 * An Library for Color Conversion
 */
class ColorConverter {
public:
	ColorConverter()
	{
		run_haxe([](){
			__boot_maglev();
			__boot_colorconverter();
			::maglev::MagLev m0 = ::maglev::MagLev_obj::getInstance("default");
			auto o = new ::colorconverter::ColorConverter_obj();
			o->__construct(m0);
		});
	}
	~ColorConverter()
	{
	}

	/*!
	 * Convert from RGB
	 * @param r 
	 * @param g 
	 * @param b 
	 * @return {std::vector<::maglev::CppAny>} 
	*/
	std::vector<::maglev::CppAny> FromRGB(double r, double g, double b)
	{
		::maglev::CppAny ret;
		run_haxe([&ret,r,g,b](){
			::maglev::MagLevCpp bus = ::maglev::MagLevCpp_obj::getInstance("default");
			std::vector<::maglev::CppAny> myargs;
			::maglev::CppAny param0 = new ::maglev::CppAny_obj();
			param0->setDouble(r);
			myargs.push_back(param0);
			::maglev::CppAny param1 = new ::maglev::CppAny_obj();
			param1->setDouble(g);
			myargs.push_back(param1);
			::maglev::CppAny param2 = new ::maglev::CppAny_obj();
			param2->setDouble(b);
			myargs.push_back(param2);
			bus->call("ColorConverter.FromRGB", myargs, [&ret] (::maglev::CppAny async_ret) { ret = async_ret; });
		});
		std::vector<::maglev::CppAny> retarr;
		return retarr;
	}

	/*!
	 * Convert from CIELAB
	 * @param L 
	 * @param a 
	 * @param b 
	 * @return {std::vector<::maglev::CppAny>} 
	*/
	std::vector<::maglev::CppAny> FromCIELAB(double L, double a, double b)
	{
		::maglev::CppAny ret;
		run_haxe([&ret,L,a,b](){
			::maglev::MagLevCpp bus = ::maglev::MagLevCpp_obj::getInstance("default");
			std::vector<::maglev::CppAny> myargs;
			::maglev::CppAny param0 = new ::maglev::CppAny_obj();
			param0->setDouble(L);
			myargs.push_back(param0);
			::maglev::CppAny param1 = new ::maglev::CppAny_obj();
			param1->setDouble(a);
			myargs.push_back(param1);
			::maglev::CppAny param2 = new ::maglev::CppAny_obj();
			param2->setDouble(b);
			myargs.push_back(param2);
			bus->call("ColorConverter.FromCIELAB", myargs, [&ret] (::maglev::CppAny async_ret) { ret = async_ret; });
		});
		std::vector<::maglev::CppAny> retarr;
		return retarr;
	}

	/*!
	 * Convert from CMYK
	 * @param c 
	 * @param m 
	 * @param y 
	 * @param k 
	 * @return {std::vector<::maglev::CppAny>} 
	*/
	std::vector<::maglev::CppAny> FromCMYK(double c, double m, double y, double k)
	{
		::maglev::CppAny ret;
		run_haxe([&ret,c,m,y,k](){
			::maglev::MagLevCpp bus = ::maglev::MagLevCpp_obj::getInstance("default");
			std::vector<::maglev::CppAny> myargs;
			::maglev::CppAny param0 = new ::maglev::CppAny_obj();
			param0->setDouble(c);
			myargs.push_back(param0);
			::maglev::CppAny param1 = new ::maglev::CppAny_obj();
			param1->setDouble(m);
			myargs.push_back(param1);
			::maglev::CppAny param2 = new ::maglev::CppAny_obj();
			param2->setDouble(y);
			myargs.push_back(param2);
			::maglev::CppAny param3 = new ::maglev::CppAny_obj();
			param3->setDouble(k);
			myargs.push_back(param3);
			bus->call("ColorConverter.FromCMYK", myargs, [&ret] (::maglev::CppAny async_ret) { ret = async_ret; });
		});
		std::vector<::maglev::CppAny> retarr;
		return retarr;
	}

	/*!
	 * Convert from RGB using illumination and observer angles
	 * @param r 
	 * @param g 
	 * @param b 
	 * @param observer1 
	 * @param observer2 
	 * @return {std::vector<::maglev::CppAny>} 
	*/
	std::vector<::maglev::CppAny> ConvertRGB(double r, double g, double b, std::string observer1, std::string observer2)
	{
		::maglev::CppAny ret;
		run_haxe([&ret,r,g,b,observer1,observer2](){
			::maglev::MagLevCpp bus = ::maglev::MagLevCpp_obj::getInstance("default");
			std::vector<::maglev::CppAny> myargs;
			::maglev::CppAny param0 = new ::maglev::CppAny_obj();
			param0->setDouble(r);
			myargs.push_back(param0);
			::maglev::CppAny param1 = new ::maglev::CppAny_obj();
			param1->setDouble(g);
			myargs.push_back(param1);
			::maglev::CppAny param2 = new ::maglev::CppAny_obj();
			param2->setDouble(b);
			myargs.push_back(param2);
			::maglev::CppAny param3 = new ::maglev::CppAny_obj();
			param3->setStdString(observer1);
			myargs.push_back(param3);
			::maglev::CppAny param4 = new ::maglev::CppAny_obj();
			param4->setStdString(observer2);
			myargs.push_back(param4);
			bus->call("ColorConverter.ConvertRGB", myargs, [&ret] (::maglev::CppAny async_ret) { ret = async_ret; });
		});
		std::vector<::maglev::CppAny> retarr;
		return retarr;
	}

	/*!
	 * Convert from CIELAB using illumination and observer angles
	 * @param L 
	 * @param a 
	 * @param b 
	 * @param observer1 
	 * @param observer2 
	 * @return {std::vector<::maglev::CppAny>} 
	*/
	std::vector<::maglev::CppAny> ConvertCIELAB(double L, double a, double b, std::string observer1, std::string observer2)
	{
		::maglev::CppAny ret;
		run_haxe([&ret,L,a,b,observer1,observer2](){
			::maglev::MagLevCpp bus = ::maglev::MagLevCpp_obj::getInstance("default");
			std::vector<::maglev::CppAny> myargs;
			::maglev::CppAny param0 = new ::maglev::CppAny_obj();
			param0->setDouble(L);
			myargs.push_back(param0);
			::maglev::CppAny param1 = new ::maglev::CppAny_obj();
			param1->setDouble(a);
			myargs.push_back(param1);
			::maglev::CppAny param2 = new ::maglev::CppAny_obj();
			param2->setDouble(b);
			myargs.push_back(param2);
			::maglev::CppAny param3 = new ::maglev::CppAny_obj();
			param3->setStdString(observer1);
			myargs.push_back(param3);
			::maglev::CppAny param4 = new ::maglev::CppAny_obj();
			param4->setStdString(observer2);
			myargs.push_back(param4);
			bus->call("ColorConverter.ConvertCIELAB", myargs, [&ret] (::maglev::CppAny async_ret) { ret = async_ret; });
		});
		std::vector<::maglev::CppAny> retarr;
		return retarr;
	}

	/*!
	 * Convert from CMYK using illumination and observer angles
	 * @param c 
	 * @param m 
	 * @param y 
	 * @param k 
	 * @param observer1 
	 * @param observer2 
	 * @return {std::vector<::maglev::CppAny>} 
	*/
	std::vector<::maglev::CppAny> ConvertCMYK(double c, double m, double y, double k, std::string observer1, std::string observer2)
	{
		::maglev::CppAny ret;
		run_haxe([&ret,c,m,y,k,observer1,observer2](){
			::maglev::MagLevCpp bus = ::maglev::MagLevCpp_obj::getInstance("default");
			std::vector<::maglev::CppAny> myargs;
			::maglev::CppAny param0 = new ::maglev::CppAny_obj();
			param0->setDouble(c);
			myargs.push_back(param0);
			::maglev::CppAny param1 = new ::maglev::CppAny_obj();
			param1->setDouble(m);
			myargs.push_back(param1);
			::maglev::CppAny param2 = new ::maglev::CppAny_obj();
			param2->setDouble(y);
			myargs.push_back(param2);
			::maglev::CppAny param3 = new ::maglev::CppAny_obj();
			param3->setDouble(k);
			myargs.push_back(param3);
			::maglev::CppAny param4 = new ::maglev::CppAny_obj();
			param4->setStdString(observer1);
			myargs.push_back(param4);
			::maglev::CppAny param5 = new ::maglev::CppAny_obj();
			param5->setStdString(observer2);
			myargs.push_back(param5);
			bus->call("ColorConverter.ConvertCMYK", myargs, [&ret] (::maglev::CppAny async_ret) { ret = async_ret; });
		});
		std::vector<::maglev::CppAny> retarr;
		return retarr;
	}

	/*!
	 * Add a reference color
	 * @param system 
	 * @param name 
	 * @param description 
	 * @param r 
	 * @param g 
	 * @param b 
	*/
	void AddReferenceColorByRGB(std::string system, std::string name, std::string description, double r, double g, double b)
	{
		::maglev::CppAny ret;
		run_haxe([&ret,system,name,description,r,g,b](){
			::maglev::MagLevCpp bus = ::maglev::MagLevCpp_obj::getInstance("default");
			std::vector<::maglev::CppAny> myargs;
			::maglev::CppAny param0 = new ::maglev::CppAny_obj();
			param0->setStdString(system);
			myargs.push_back(param0);
			::maglev::CppAny param1 = new ::maglev::CppAny_obj();
			param1->setStdString(name);
			myargs.push_back(param1);
			::maglev::CppAny param2 = new ::maglev::CppAny_obj();
			param2->setStdString(description);
			myargs.push_back(param2);
			::maglev::CppAny param3 = new ::maglev::CppAny_obj();
			param3->setDouble(r);
			myargs.push_back(param3);
			::maglev::CppAny param4 = new ::maglev::CppAny_obj();
			param4->setDouble(g);
			myargs.push_back(param4);
			::maglev::CppAny param5 = new ::maglev::CppAny_obj();
			param5->setDouble(b);
			myargs.push_back(param5);
			bus->call("ColorConverter.AddReferenceColorByRGB", myargs, [&ret] (::maglev::CppAny async_ret) { ret = async_ret; });
		});
	}

	/*!
	 * Add a reference color
	 * @param system 
	 * @param name 
	 * @param description 
	 * @param L 
	 * @param a 
	 * @param b 
	*/
	void AddReferenceColorByCIELAB(std::string system, std::string name, std::string description, double L, double a, double b)
	{
		::maglev::CppAny ret;
		run_haxe([&ret,system,name,description,L,a,b](){
			::maglev::MagLevCpp bus = ::maglev::MagLevCpp_obj::getInstance("default");
			std::vector<::maglev::CppAny> myargs;
			::maglev::CppAny param0 = new ::maglev::CppAny_obj();
			param0->setStdString(system);
			myargs.push_back(param0);
			::maglev::CppAny param1 = new ::maglev::CppAny_obj();
			param1->setStdString(name);
			myargs.push_back(param1);
			::maglev::CppAny param2 = new ::maglev::CppAny_obj();
			param2->setStdString(description);
			myargs.push_back(param2);
			::maglev::CppAny param3 = new ::maglev::CppAny_obj();
			param3->setDouble(L);
			myargs.push_back(param3);
			::maglev::CppAny param4 = new ::maglev::CppAny_obj();
			param4->setDouble(a);
			myargs.push_back(param4);
			::maglev::CppAny param5 = new ::maglev::CppAny_obj();
			param5->setDouble(b);
			myargs.push_back(param5);
			bus->call("ColorConverter.AddReferenceColorByCIELAB", myargs, [&ret] (::maglev::CppAny async_ret) { ret = async_ret; });
		});
	}

	/*!
	 * Add a reference color
	 * @param system 
	 * @param name 
	 * @param description 
	 * @param c 
	 * @param m 
	 * @param y 
	 * @param k 
	*/
	void AddReferenceColorByCMYK(std::string system, std::string name, std::string description, double c, double m, double y, double k)
	{
		::maglev::CppAny ret;
		run_haxe([&ret,system,name,description,c,m,y,k](){
			::maglev::MagLevCpp bus = ::maglev::MagLevCpp_obj::getInstance("default");
			std::vector<::maglev::CppAny> myargs;
			::maglev::CppAny param0 = new ::maglev::CppAny_obj();
			param0->setStdString(system);
			myargs.push_back(param0);
			::maglev::CppAny param1 = new ::maglev::CppAny_obj();
			param1->setStdString(name);
			myargs.push_back(param1);
			::maglev::CppAny param2 = new ::maglev::CppAny_obj();
			param2->setStdString(description);
			myargs.push_back(param2);
			::maglev::CppAny param3 = new ::maglev::CppAny_obj();
			param3->setDouble(c);
			myargs.push_back(param3);
			::maglev::CppAny param4 = new ::maglev::CppAny_obj();
			param4->setDouble(m);
			myargs.push_back(param4);
			::maglev::CppAny param5 = new ::maglev::CppAny_obj();
			param5->setDouble(y);
			myargs.push_back(param5);
			::maglev::CppAny param6 = new ::maglev::CppAny_obj();
			param6->setDouble(k);
			myargs.push_back(param6);
			bus->call("ColorConverter.AddReferenceColorByCMYK", myargs, [&ret] (::maglev::CppAny async_ret) { ret = async_ret; });
		});
	}

	/*!
	 * 
	 * @param r 
	 * @param g 
	 * @param b 
	 * @return {std::vector<::maglev::CppAny>} 
	*/
	std::vector<::maglev::CppAny> FindReferenceColorByRGB(double r, double g, double b)
	{
		::maglev::CppAny ret;
		run_haxe([&ret,r,g,b](){
			::maglev::MagLevCpp bus = ::maglev::MagLevCpp_obj::getInstance("default");
			std::vector<::maglev::CppAny> myargs;
			::maglev::CppAny param0 = new ::maglev::CppAny_obj();
			param0->setDouble(r);
			myargs.push_back(param0);
			::maglev::CppAny param1 = new ::maglev::CppAny_obj();
			param1->setDouble(g);
			myargs.push_back(param1);
			::maglev::CppAny param2 = new ::maglev::CppAny_obj();
			param2->setDouble(b);
			myargs.push_back(param2);
			bus->call("ColorConverter.FindReferenceColorByRGB", myargs, [&ret] (::maglev::CppAny async_ret) { ret = async_ret; });
		});
		std::vector<::maglev::CppAny> retarr;
		return retarr;
	}

	/*!
	 * 
	 * @param L 
	 * @param a 
	 * @param b 
	 * @return {std::vector<::maglev::CppAny>} 
	*/
	std::vector<::maglev::CppAny> FindReferenceColorByCIELAB(double L, double a, double b)
	{
		::maglev::CppAny ret;
		run_haxe([&ret,L,a,b](){
			::maglev::MagLevCpp bus = ::maglev::MagLevCpp_obj::getInstance("default");
			std::vector<::maglev::CppAny> myargs;
			::maglev::CppAny param0 = new ::maglev::CppAny_obj();
			param0->setDouble(L);
			myargs.push_back(param0);
			::maglev::CppAny param1 = new ::maglev::CppAny_obj();
			param1->setDouble(a);
			myargs.push_back(param1);
			::maglev::CppAny param2 = new ::maglev::CppAny_obj();
			param2->setDouble(b);
			myargs.push_back(param2);
			bus->call("ColorConverter.FindReferenceColorByCIELAB", myargs, [&ret] (::maglev::CppAny async_ret) { ret = async_ret; });
		});
		std::vector<::maglev::CppAny> retarr;
		return retarr;
	}

	/*!
	 * 
	 * @param c 
	 * @param m 
	 * @param y 
	 * @param k 
	 * @return {std::vector<::maglev::CppAny>} 
	*/
	std::vector<::maglev::CppAny> FindReferenceColorByCMYK(double c, double m, double y, double k)
	{
		::maglev::CppAny ret;
		run_haxe([&ret,c,m,y,k](){
			::maglev::MagLevCpp bus = ::maglev::MagLevCpp_obj::getInstance("default");
			std::vector<::maglev::CppAny> myargs;
			::maglev::CppAny param0 = new ::maglev::CppAny_obj();
			param0->setDouble(c);
			myargs.push_back(param0);
			::maglev::CppAny param1 = new ::maglev::CppAny_obj();
			param1->setDouble(m);
			myargs.push_back(param1);
			::maglev::CppAny param2 = new ::maglev::CppAny_obj();
			param2->setDouble(y);
			myargs.push_back(param2);
			::maglev::CppAny param3 = new ::maglev::CppAny_obj();
			param3->setDouble(k);
			myargs.push_back(param3);
			bus->call("ColorConverter.FindReferenceColorByCMYK", myargs, [&ret] (::maglev::CppAny async_ret) { ret = async_ret; });
		});
		std::vector<::maglev::CppAny> retarr;
		return retarr;
	}

	/*!
	 * 
	 * @param system 
	 * @param name 
	 * @return {std::vector<::maglev::CppAny>} 
	*/
	std::vector<::maglev::CppAny> FindReferenceColor(std::string system, std::string name)
	{
		::maglev::CppAny ret;
		run_haxe([&ret,system,name](){
			::maglev::MagLevCpp bus = ::maglev::MagLevCpp_obj::getInstance("default");
			std::vector<::maglev::CppAny> myargs;
			::maglev::CppAny param0 = new ::maglev::CppAny_obj();
			param0->setStdString(system);
			myargs.push_back(param0);
			::maglev::CppAny param1 = new ::maglev::CppAny_obj();
			param1->setStdString(name);
			myargs.push_back(param1);
			bus->call("ColorConverter.FindReferenceColor", myargs, [&ret] (::maglev::CppAny async_ret) { ret = async_ret; });
		});
		std::vector<::maglev::CppAny> retarr;
		return retarr;
	}

	/*!
	 * Remove reference color system and all reference colors
	 * @param system 
	*/
	void RemoveReferenceColorSystem(std::string system)
	{
		::maglev::CppAny ret;
		run_haxe([&ret,system](){
			::maglev::MagLevCpp bus = ::maglev::MagLevCpp_obj::getInstance("default");
			std::vector<::maglev::CppAny> myargs;
			::maglev::CppAny param0 = new ::maglev::CppAny_obj();
			param0->setStdString(system);
			myargs.push_back(param0);
			bus->call("ColorConverter.RemoveReferenceColorSystem", myargs, [&ret] (::maglev::CppAny async_ret) { ret = async_ret; });
		});
	}

	/*!
	 * Get all reference color systems
	 * @return {std::vector<::maglev::CppAny>} 
	*/
	std::vector<::maglev::CppAny> GetReferenceColorSystems()
	{
		::maglev::CppAny ret;
		run_haxe([&ret](){
			::maglev::MagLevCpp bus = ::maglev::MagLevCpp_obj::getInstance("default");
			std::vector<::maglev::CppAny> myargs;
			bus->call("ColorConverter.GetReferenceColorSystems", myargs, [&ret] (::maglev::CppAny async_ret) { ret = async_ret; });
		});
		std::vector<::maglev::CppAny> retarr;
		return retarr;
	}

	/*!
	 * Get all reference colors in a color reference system
	 * @param system 
	 * @return {std::vector<::maglev::CppAny>} 
	*/
	std::vector<::maglev::CppAny> GetReferenceColors(std::string system)
	{
		::maglev::CppAny ret;
		run_haxe([&ret,system](){
			::maglev::MagLevCpp bus = ::maglev::MagLevCpp_obj::getInstance("default");
			std::vector<::maglev::CppAny> myargs;
			::maglev::CppAny param0 = new ::maglev::CppAny_obj();
			param0->setStdString(system);
			myargs.push_back(param0);
			bus->call("ColorConverter.GetReferenceColors", myargs, [&ret] (::maglev::CppAny async_ret) { ret = async_ret; });
		});
		std::vector<::maglev::CppAny> retarr;
		return retarr;
	}

	/*!
	 * Get supported illumination and observer angles
	 * @return {std::vector<::maglev::CppAny>} 
	*/
	std::vector<::maglev::CppAny> GetIlluminationObserverAngles()
	{
		::maglev::CppAny ret;
		run_haxe([&ret](){
			::maglev::MagLevCpp bus = ::maglev::MagLevCpp_obj::getInstance("default");
			std::vector<::maglev::CppAny> myargs;
			bus->call("ColorConverter.GetIlluminationObserverAngles", myargs, [&ret] (::maglev::CppAny async_ret) { ret = async_ret; });
		});
		std::vector<::maglev::CppAny> retarr;
		return retarr;
	}

	/*!
	 * Save reference colors
	 * @param id 
	*/
	void SaveReferenceColors(std::string id)
	{
		::maglev::CppAny ret;
		run_haxe([&ret,id](){
			::maglev::MagLevCpp bus = ::maglev::MagLevCpp_obj::getInstance("default");
			std::vector<::maglev::CppAny> myargs;
			::maglev::CppAny param0 = new ::maglev::CppAny_obj();
			param0->setStdString(id);
			myargs.push_back(param0);
			bus->call("ColorConverter.SaveReferenceColors", myargs, [&ret] (::maglev::CppAny async_ret) { ret = async_ret; });
		});
	}

	/*!
	 * Load reference colors
	 * @param id 
	*/
	void LoadReferenceColors(std::string id)
	{
		::maglev::CppAny ret;
		run_haxe([&ret,id](){
			::maglev::MagLevCpp bus = ::maglev::MagLevCpp_obj::getInstance("default");
			std::vector<::maglev::CppAny> myargs;
			::maglev::CppAny param0 = new ::maglev::CppAny_obj();
			param0->setStdString(id);
			myargs.push_back(param0);
			bus->call("ColorConverter.LoadReferenceColors", myargs, [&ret] (::maglev::CppAny async_ret) { ret = async_ret; });
		});
	}

};

