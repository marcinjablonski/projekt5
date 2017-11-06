#include <iostream>
#include "Probka.h"
#include "SygnalProbkowany.h"
#include "AnalizatorSygnalu.h"
#include "SygnalLoader.h"

using namespace std;

int main()
{
    SygnalLoader sl;
    AnalizatorSygnalu as;
    SygnalProbkowany s;
    Probka p = Probka(10,20);
    s.dodajProbke(p);
    Probka p2 = Probka(20,10);
    s.dodajProbke2(p2);
    cout << "Ilosc Probek: "; << s.iloscProbek() << endl;
    cout << "Maximum: " << as.maksimum(s) << endl;
    cout << "Minimum: " << as.minimum(s) << endl;
    cout << "Srednia: " << as.srednia(s) << endl;
    cout << "Dlugosc: " << as.dlugosc(s) << endl;
    cout << "Calka: "   << as.calka(s) << endl;

}
