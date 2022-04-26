/*
PROBLEMA:
1115 - Cuadrante
RESPUESTA:
Accepted
LENGUAJE:
C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
TIEMPO:
0.000s
TAMAÑO DE ARCHIVO:
422 Bytes
MEMORIA:
-
ENVIO:
25/4/22 19:46:30
*/

#include <iostream> 
 
using namespace std; 
 
int main(){ 
	 
	int c1 = 0;
	int c2 = 0;
	
	do{
		cin >> c1;
		cin >> c2;
		if(c1 > 0 && c2> 0){
			cout << "primeiro" << endl;
		} if(c1 < 0 && c2 > 0){
			cout << "segundo" << endl;
		} if(c1 < 0 && c2 < 0){
			cout << "terceiro" << endl;
		} if(c1 > 0 && c2 < 0){
			cout << "quarto" << endl;
		}
	}
	while(c1 != 0 && c2 != 0);
	
	return 0; 
} 

