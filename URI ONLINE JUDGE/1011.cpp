/*
PROBLEMA:
1011 - Esfera
RESPUESTA:
Accepted
LENGUAJE:
C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
TIEMPO:
0.000s
TAMAÑO DE ARCHIVO:
295 Bytes
MEMORIA:
-
ENVIO:
25/4/21 12:39:25
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    double pi = 3.14159;
    int radio = 0;
    double volumen;

    cin >> radio;

    volumen=(4/3.0*pi*radio*radio*radio);

    cout<<fixed;
    cout<<setprecision(3)<<"VOLUME = "<<volumen<<endl;

    return 0;
}
