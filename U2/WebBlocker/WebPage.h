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
	//!Klas�s WebPage paskirtis inicializuoti, u�blokuoti, atblokuoti tinklap�.
	class WebPage {
		std::string	webpage;
	public:	
		//!Perra�yti I/O operatoriai.
		friend std::ostream& operator<<(std::ostream& os, const WebPage& p);
		friend std::istream& operator >> (std::istream& is, WebPage& p);
		//!Numatytasis konstruktorius.
		WebPage();
		//!Konstruktorius inicializuojantis klas�s objekt�, koks tinklapis bus blokuojamas, priskiriama pirma reik�m�.
		WebPage(std::string webpage);
		//!Destruktorius, atlaisvinantis atmint�, i�trinantis objekt�.
		~WebPage();
		//!Metodas, gra�inantis true reik�m�, jei �odis paduotas �odis atitinka reikalavimus, n�ra tu��ias.
		bool isCorrect(std::string word);
		//!"Setter'is" - prikiria reik�m� webpage, jei paduodama tekstin� eilut� atitinka metodo isCorrect reikalavimus.  
		void setWebpage(std::string web);
		//!Getter'is"  gr��ina webpage lauko reik�m�.
		std::string getWebpage();
		//!Metodas, �ra�antis � numatyt� keli� C:\\Windows\\System32\\drivers\\etc\\hosts (� �i� viet� �ra�ius tinklapi su tam tikru kodu priekyje, jis u�blokuojamas), paduot� tekst�.
		void writingToFile(std::string text, std::string path = "C:\\Windows\\System32\\drivers\\etc\\hosts");
		//!Metodas, sujungiantis paduot� tekstin� eilut� (puslap�, kuris bus blokuojamas), su tam tikru tekstu, kad b�t� galima u�blokuoti
		std::string concatWebName(std::string web);
		//!Metodas, kuris sukuria tektin� objekto reprezentacij�.
		std::string toString();
		//!Metodas, surandantis ir gr��inantis faile rastos tekstin�s eilut�s viet� fail� (eilut�).
		int returnLine(std::string file, std::string search);
		//!Metodas i�trinantis eilutes i� failo. (Tinklapio atblokavimas, i�trinant eilut� i� hosts failo.)
		void deleteLines(const std::string & filename, int start, int skip = 1);
		//!Metodai klas�s testavimui.
		static void printTest2(bool result);
		static void testOperator2();
		static void webTest1();
		static void webTest2();
		static void webTest3();
	};

		
}
