#include <iostream>
#include "cannon0.h"
#include "cannond.h"
using namespace std;


int main()
{
    cannon0 canon0;
    CannonD canonD;
    int velocidad_inicial;
    int n=1;

    do{
        system("CLS");
        cout<<"******************************************"<<endl;
        cout<<"**Sistema de control de disparo ofensivo**"<<endl;
        cout<<"*                                        *"<<endl;
        cout<<"* 0-salir                                *"<<endl;
        cout<<"* 1-Generar disparos ofensivos           *"<<endl;
        cout<<"* 2-Generar disparos defensivos          *"<<endl;
        cout<<"******************************************"<<endl;
        cout<<"Opcion: ";
        cin>>n;

        switch(n)
        {
            case 0:
                system("CLS");
                cout<<"******************************************"<<endl;
                cout<<"    Salida del simulador de disparos      "<<endl;
                cout<<"                 Adios"<<endl<<endl;
            break;
            case 1:
                system("CLS");
                cout<<"******************************************"<<endl;
                cout<<"*      1-Generar disparos ofensivos      *"<<endl;
                cout<<"******************************************"<<endl;
                cout<<"Ingrese velocidad inicial: ";
                cin>>velocidad_inicial;
                canon0.DisparoOfensivo(velocidad_inicial,canonD);
                system("PAUSE");
            break;

            case 2:

            break;

            case 3:

            break;

            default:
            cout<<"Opicion incorrecta"<<endl;
            system("PAUSE");

        }


    }while(n!=0);






    return 0;
}
