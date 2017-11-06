#include <iostream>
#include "Probka.h"
#include "SygnalProbkowany.h"
#include "AnalizatorSygnalu.h"
#include "SygnalLoader.h"

using namespace std;

int main()
{
    string ZnazwaPliku, OnazwaPliku;
    cout << "Podaj nazwe pliku do oczytu: "; cin >> OnazwaPliku;
    cout << "Podaj nazwe pliku do zapisu: "; cin >> ZnazwaPliku;
    SygnalLoader sl;
    AnalizatorSygnalu as;
    SygnalProbkowany s = sl.wczytajSygnalProbkowany (OnazwaPliku);
    cout << "Ilosc Probek: " << s.iloscProbek() << endl;
    cout << "Maximum: " << as.maksimum(s) << endl;
    cout << "Minimum: " << as.minimum(s) << endl;
    cout << "Srednia: " << as.srednia(s) << endl;
    cout << "Dlugosc: " << as.dlugosc(s) << endl;
    cout << "Calka: "   << as.calka(s) << endl;
    sl. zapiszSygnalProbkowany (s, ZnazwaPliku);
    return 0;
}
