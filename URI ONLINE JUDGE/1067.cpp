/*
PROBLEMA:
1067 - Números Impares
RESPUESTA:
Accepted
LENGUAJE:
C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
TIEMPO:
0.015s
TAMAÑO DE ARCHIVO:
237 Bytes
MEMORIA:
-
ENVIO:
18/1/22 20:48:59
*/

#include <iostream> 
#include <iomanip> 
 
using namespace std; 
 
int main(){ 
	 
	int number = 0;
	cin >> number;
	
	for(int i = 0; i<= number; i++){
		if(i %2 != 0){
			cout << i << endl; 
		}
	}
	
	return 0; 
} 
 

