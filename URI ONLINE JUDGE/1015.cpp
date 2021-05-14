/*
PROBLEMA:
1015 - Distancia Entre dos Puntos
RESPUESTA:
Accepted
LENGUAJE:
C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
TIEMPO:
0.000s
TAMAÑO DE ARCHIVO:
494 Bytes
MEMORIA:
-
ENVIO:
29/4/21 21:01:13
*/

#include <iostream>
#include <math.h>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    double x_uno = 0, x_dos = 0, y_uno = 0, y_dos = 0, total = 0, temporal = 0, parte_a = 0, parte_b = 0;

    cin>>x_uno>>y_uno;
    cin>>x_dos>>y_dos;

    parte_a = pow((x_dos - x_uno), 2);
    parte_b = pow((y_dos - y_uno), 2);

    temporal = parte_a + parte_b;

    total = sqrt(temporal);

    cout<<fixed;
    cout<<setprecision(4)<<total<<endl;

    return 0;
}
