#ifndef CANNON0_H
#define CANNON0_H

using namespace std;
#define g 9.8
#define pi 3.141617
#include "cannond.h"
#include <math.h>

class cannon0
{
private:
    float d = 800; //distancia
    float Ho = 10; //altura del canon
    float Xo = d;
    float Yo = Ho;
    float d0 = 0.05*d; //radio de destruccion

public:
    cannon0();
    void DisparoOfensivo(int,CannonD canonD);
    void impacto(int,int,float,float,int);
};

#endif // CANNON0_H
