#ifndef _SygnalProbkowany_h_
#define _SygnalProbkowany_h_
#include <iostream>
#include <vector>
using namespace std;

#include "Probka.h"

class Probka;
class SygnalProbkowany;

class SygnalProbkowany
{
    friend class AnalizatorSygnalu;
    friend class SygnalLoader;
private:
    vector <Probka> probki;
public:
    sygnal () {}
    void DodajProbke(const Probka& _p)
    {
        probki.push_back(_p);
    }
    int iloscProbek()
    {
        return probki.size();
    }

    Probka& operator[](int i);
        friend ostream& operator<<(ostream& astream, const SygnalProbkowany& aSygnal);
};

#endif  _SygnalProbkowany_h_

