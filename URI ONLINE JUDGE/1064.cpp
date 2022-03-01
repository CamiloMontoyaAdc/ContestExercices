/*
PROBLEMA:
1064 - Positivos y Promedio
RESPUESTA:
Accepted
LENGUAJE:
C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
TIEMPO:
0.000s
TAMAÑO DE ARCHIVO:
413 Bytes
MEMORIA:
-
ENVIO:
28/2/22 19:18:18
*/

#include <iostream> 
#include <iomanip> 
 
using namespace std; 
 
int main(){ 
	 
	double numberOne = 0;
	double acum = 0;
	int contar = 0;

	for(int i = 0; i< 6; i++){
		cin >> numberOne;
		if(numberOne >= 0){
			contar = contar+1;
			acum = acum+numberOne;
		}
	}
	
	cout<<setprecision(1)<<fixed;
	cout << contar << " valores positivos" << endl << (acum/contar) << endl;
	
	return 0; 
} 
