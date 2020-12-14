#include "cannon0.h"


cannon0::cannon0()
{

}

void cannon0::DisparoOfensivo(int V0,CannonD canonD)
{

    int contador=0; //3 disparos que comprometan la integrad del canon D
    float x,y,Vx0,Vy0; //posiciones en X,y y velocidad inicial
    int t=0, V0o=0, angulo=0; //tiempo, velocidad inicial y angulo


    float Xd= canonD.getXd();
    float Yd= canonD.getYd();

    //V0 velocidad dada
    for(V0o = V0; ;V0o += 5){
        //angulo 0<teta<90
        for(angulo=0;angulo<90;angulo++){
            //velocidad inicial
            Vx0=V0o*cos(angulo*pi/180);
            Vy0=V0o*sin(angulo*pi/180);
            x = 0.0;
            y = 0.0;

            for(t=0;;t++){
                //calculo de (x,y)
                x=Vx0*t;
                y = Yo + Vy0*t -(0.5*g*t*t);
                //distancia entre el (x,y) calculado y distancia del canon D
                if(sqrt(pow((Xd - x),2)+pow((Yd - y),2)) < d0){
                    if(y<0) y = 0;
                    impacto(angulo,V0o,x,y,t);
                    contador += 1;
                    V0o += 50;
                    break;
                }
                if(y<0)
                    break;

            }
            if(contador ==3){
                break;
            }
        }
        if(contador ==3){
            break;
        }
    }
    if(contador!=3){
        cout << "No impacto en los disparos esperados"<< endl;
    }



}

void cannon0::impacto(int angulo, int V0o, float X, float Y, int t)
{
    cout << endl;
    cout << "Datos de impacto del proyectil" << endl;
    cout << "Velocidad incial: " << V0o << endl;
    cout << "Posicion x: " << X << endl;
    cout << "Posicion y: " << Y << endl;
    cout << "Angulo: " <<angulo<< " grados" << endl;
    cout << "Tiempo: " << t << endl;
    cout << endl;
}
