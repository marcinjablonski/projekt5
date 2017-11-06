#ifndef _Probka_h_
#define _Probka_h_

using namespace std;

class SygnalProbkowany;
class Probka
{
public:
    double t;
    double x;

    Probka ();
    Probka (double _t,double _x)
    {
        t = _t;
        x = _x;
    }
    friend ostream& operator <<(ostream& aStream, const Probka& aProbka);
};

#endif


