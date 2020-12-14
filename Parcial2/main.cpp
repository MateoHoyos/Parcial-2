#include <iostream>
#include "cannon0.h"
#include "cannond.h"
using namespace std;


int main()
{
    cannon0 canon0;
    CannonD canonD;
    int velocidad_inicial;

    cout<<"Ingrese velocidad inicial: ";
    cin>>velocidad_inicial;
    canon0.DisparoOfensivo(velocidad_inicial,canonD);

    return 0;
}
