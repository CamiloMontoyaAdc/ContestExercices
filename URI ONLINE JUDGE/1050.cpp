#include <iostream>

/*
PROBLEMA:
1050 - DDD
RESPUESTA:
Accepted
LENGUAJE:
C++17 (g++ 7.3.0, -std=c++17 -O2 -lm) [+0s]
TIEMPO:
0.000s
TAMAÑO DE ARCHIVO:
876 Bytes
MEMORIA:
-
ENVIO:
15/5/21 20:28:44
*/

using namespace std;

int main()
{
    int ddd;
    cin>> ddd;

    switch(ddd){
        case 61:
            cout << "Brasilia" << endl;
            break;
        case 71:
            cout << "Salvador" << endl;
            break;
        case 11:
            cout << "Sao Paulo" << endl;
            break;
        case 21:
            cout << "Rio de Janeiro" << endl;
            break;
        case 32:
            cout << "Juiz de Fora" << endl;
            break;
        case 19:
            cout << "Campinas" << endl;
            break;
        case 27:
            cout << "Vitoria" << endl;
            break;
        case 31:
            cout << "Belo Horizonte" << endl;
            break;
        default:
            cout << "DDD nao cadastrado" << endl;
            break;
    }

    return 0;
}
