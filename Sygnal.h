#ifndef _Sygnal_h_
#define _Sygnal_h_
#include "Probka.h"
#include <iostream>
#include <vector>

using namespace std;

class Sygnal
{
public:
    virtual double x (double t) = 0;
    virtual void wypisz (ostream& stream);
    friend ostream& operator << (ostream& stream, Sygnal& _sygnal)
    {
        _sygnal.wypisz (_stream);
    }
};
#endif // _
