#ifndef _SygnalLoader_h_
#define _SygnalLoader_h_
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

#include "SygnalProbkowany.h"

class SygnalProbkowany;
class Probka;
class SygnalLoader;

class SygnalLoader
{
public:

	SygnalLoader() {}
    SygnalProbkowany wczytajSygnalProbkowany(string _nazwaPliku)
    	{
		typedef vector <Probka> Probki;
		ifstream plik;
		plik.open(_nazwaPliku.c_str(), ios::in);
		string linia;
		while (getline (plik, linia))
		{
			stringstream ss (linia);
			double liczba1, liczba2;
			ss >> liczba1;
			ss.ignore();
			ss >> liczba2;
			Probka nowa_probka = Probka(10,21);
			SygnalProbkowany x;
			x.DodajProbke(nowa_probka);
		}
		plik.close();
	}

	void zapiszSygnalProbkowany(SygnalProbkowany& aSygnal, std:: string aNazwaPliku);
};

#endif


