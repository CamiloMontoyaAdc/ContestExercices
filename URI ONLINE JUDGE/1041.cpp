#include <iostream>

/*
PROBLEMA:
1041 - Coordenadas de un Punto
RESPUESTA:
Accepted
LENGUAJE:
C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
TIEMPO:
0.000s
TAMAÑO DE ARCHIVO:
535 Bytes
MEMORIA:
-
ENVIO:
15/5/21 19:42:21
*/

using namespace std;

int main()
{
    double x,y;
    cin>>x>>y;

    if(x == 0 && y == 0){
        cout <<"Origem"<<endl;
    } else if(x == 0){
        cout <<"Eixo Y"<<endl;
    } else if(y == 0){
        cout <<"Eixo X"<<endl;
    } else if(x > 0 && y > 0){
        cout <<"Q1"<<endl;
    } else if(x < 0 && y > 0){
        cout <<"Q2"<<endl;
    } else if(x < 0 && y < 0){
        cout <<"Q3"<<endl;
    } else if(x > 0 && y < 0){
        cout <<"Q4"<<endl;
    }

    return 0;
}
