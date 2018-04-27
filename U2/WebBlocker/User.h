#ifndef USER_H
#define USER_H
#include <string>
#include <ctime>
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <cstdio>
#include <cstdlib>
#include <list>
#include <sstream>
#include <windows.h>
#include <cassert>
namespace Project {
	//!Klas�s User paskirtis inicializuoti vartotoj�, leisti registruotis, prisijungti.
	class User {
		//!Kintamieji laiko vartotojo vardo, pavard�s, slapta�od�io reik�mes.
		std::string name;
		std::string surname;
		std::string password;
		//!Kintamieji skirti objekt� numeracijai ir skai�iavimui.
		int personId;
		static int lastId;
		static int number;
		//!Metodas tikrina ar teisinga paduota eilut�. (Vardas,pavard�  - i� did�iosios raid�s, ne tu��ias �odis ir ne tarpas.)
		bool correct(std::string word);
		//!Metodas tikrina ar eilut�s (vartotojo slapta�od�io) ilgis nema�esnis nei 5.
		bool correctPassword(std::string word);
		//!Metodas inicializuoja klas�s objekto laukus, jei j� reik�m�s atitinka reikalavimus.
		void initialize(std::string name, std::string surname, std::string password);
	public:	
		//!Metodas gr��ina gyv� objekt� skai�i� klas�je.
		static int getNumberOfObjects();
		//!Perra�omi I/O operatoriai
		friend std::ostream& operator<<(std::ostream& os, const User& p);
		friend std::istream& operator >> (std::istream& is, User& p);
		//!Numatytasis konstruktorius.
		User();
		//!Konstruktorius inicializuojanti objekto reik�mes - vard� ir pavard�.
		User(std::string name, std::string surname);
		//!Konstruktorius inicializuojanti objekto reik�mes - vard� ir pavard�, slapta�od�.
		User(std::string name, std::string surname, std::string password);
		//!Destruktorius.
		~User();
		//!Setter'iai ir getter'iai.
		void setName(std::string n);
		void setPassword(std::string pasw);
		void setSurname(std::string s);
		int getPersonId();
		std::string getName();
		std::string getPassword();
		std::string getSurname();
		//!Metodas gr��inantis tekstin� objekto reprezentacij�.
		std::string toString();
		//!Klas�s testavimo metodai.
		static void printTest(bool result);
		static void testOperator();
		static void userTest1();
		static void userTest2();
		static void userTest3();
	};
}
#endif
