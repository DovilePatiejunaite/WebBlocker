#ifndef TIMER_H
#define TIMER_H
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
#include <exception>
#include <stdexcept>
namespace Project {
	/*Klas� Timer priskiria teisingas reik�mes valandoms, minut�s, sekund�ms . Nusta�ius laik�, klas�s paskirtis paleisti laikmat�.*/
	
	class Timer {
		class Implementation;
		Implementation *impl;
		Timer(const Timer &other);
		Timer& operator=(const Timer &other);
	public:
		friend class Implementation;
		
		//Timer(std::string web);
		//std::string getWeb();
		/*Operatorius atspausdina klas�s objekto turin�.  */
		friend std::ostream& operator<<(std::ostream& os, const Timer& p);
		/*Operatorius ra�o � objekto turin�.*/
		friend std::istream& operator>>(std::istream& is, Timer& p);
		void init();
		void timerGo();
		/*Konstruktorius be paduodm� parametr� priskiria default'ines reik�mes valandoms, minut�ms ir sekund�ms (0). */
		Timer();
		Timer(clock_t timerh, clock_t timermin, clock_t timersec);
		/*Destruktorius i�trina sukurtus klas�s Timer objektus.*/
		~Timer();
			/*Metodas setTimerh priskiria valandoms reik�m�, jei ji yra tarp 0 ir 23, kitu atv�ju meta klaid�.*/
		void setTimerh(clock_t h);
		/*Metodas setTimermin priskiria minut�ms reik�m�, jei ji yra tarp 0 ir 59, kitu atv�ju meta klaid�.*/
		void setTimermin(clock_t min);
		/*metodas setTimersec() priskiria sekund�ms reik�m�, jei ji yra tarp 0 ir 59, kitu atv�ju meta klaid�.*/
		void setTimersec(clock_t sec);
		//WebPage & getWeb();
		/*Metodas getTimerh() gauna priskirtos valandos reik�m�. */
		clock_t getTimerh();
		/*Metodas getTimermin() gauna priskirtos minut�s reik�m�. */
		clock_t getTimermin();
		/*Metodas getTimersec() gauna priskirtos sekund�s reik�m�. */
		clock_t getTimersec();
		template <typename T>
		/*Metodas toString paver�ia objekto informacij� � tekstin� eilut�.*/
		T toString() const;
		/*Metodas printTest1(bool result) patikrina ar gauta teisinga reik�m�.*/
		static void printTest1(bool result);
		/*Metodas testOperator1() testuoja ar gerai veikia toString() metodas.*/
		static void testOperator1();

		static void timerTest1();
		static void timerTest2();
		static void timerTest3();
	};
}
#endif