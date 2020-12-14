#ifndef CANNOND_H
#define CANNOND_H
#include <iostream>
using namespace std;
#define g 9.8
#define pi 3.141617

class CannonD
{
private:
    float d = 800; //distancia
    float Hd = 20; //altura del canon
    float Xd = d;
    float Yd = Hd;
    float d0 = 0.025*d; //radio de destruccion
public:
    CannonD();
    float getD() const;
    float getHd() const;
    float getXd() const;
    float getYd() const;
    float getD0() const;
};

#endif // CANNOND_H
