/*
PROBLEMA:
1007 - Diferencia
RESPUESTA:
Accepted
LENGUAJE:
C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
TIEMPO:
0.000s
TAMAÑO DE ARCHIVO:
210 Bytes
MEMORIA:
-
ENVIO:
24/4/21 17:08:02
*/

#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, dif;

    cin >> a >> b >> c >> d;

    dif = (a*b-c*d);

    cout << "DIFERENCA = " << dif << endl;

    return 0;
}
