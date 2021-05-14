#include <iostream>

/*
PROBLEMA:
1019 - Conversión de Tiempo
RESPUESTA:
Accepted
LENGUAJE:
C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
TIEMPO:
0.000s
TAMAÑO DE ARCHIVO:
379 Bytes
MEMORIA:
-
ENVIO:
13/5/21 20:35:04
*/

using namespace std;

int main()
{
    int tiempo = 0, horas = 0, minutos = 0, segundos = 0, aux = 0;

    cin>>tiempo;

    segundos = tiempo % 60;
    minutos = tiempo / 60;
    if(minutos >= 60){
        horas = minutos / 60;
        minutos = minutos % 60;
    }

    cout <<horas<<":"<<minutos<<":"<<segundos<< endl;
    return 0;
}
