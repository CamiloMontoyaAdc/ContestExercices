/*
PROBLEMA:
1048 - Incremento Salarial
RESPUESTA:
Accepted
LENGUAJE:
C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
TIEMPO:
0.000s
TAMAÑO DE ARCHIVO:
1,74 KB
MEMORIA:
-
ENVIO:
15/11/21 18:46:22
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	float salario, salarioAux = 0;
	cin>>salario;
	
	if(salario >= 0 && salario <= 400.00){
		salarioAux = salario*0.15;
		salario = salario + salarioAux;
		std::cout << std::fixed << std::setprecision(2)<<"Novo salario: "<<salario<<endl;
		std::cout << std::fixed << std::setprecision(2)<<"Reajuste ganho: "<<salarioAux<<endl;
		cout<<"Em percentual: 15 %"<<endl;
	} else if(salario >= 400.01 && salario <= 800.00){
		salarioAux = salario*0.12;
		salario = salario + salarioAux;
		std::cout << std::fixed << std::setprecision(2)<<"Novo salario: "<<salario<<endl;
		std::cout << std::fixed << std::setprecision(2)<<"Reajuste ganho: "<<salarioAux<<endl;
		cout<<"Em percentual: 12 %"<<endl;		
	} else if(salario >= 800.01 && salario <= 1200.00){
		salarioAux = salario*0.10;
		salario = salario + salarioAux;
		std::cout << std::fixed << std::setprecision(2)<<"Novo salario: "<<salario<<endl;
		std::cout << std::fixed << std::setprecision(2)<<"Reajuste ganho: "<<salarioAux<<endl;
		cout<<"Em percentual: 10 %"<<endl;		
	} else if(salario >= 1200.01 && salario <= 2000.00){
		salarioAux = salario*0.07;
		salario = salario + salarioAux;
		std::cout << std::fixed << std::setprecision(2)<<"Novo salario: "<<salario<<endl;
		std::cout << std::fixed << std::setprecision(2)<<"Reajuste ganho: "<<salarioAux<<endl;
		cout<<"Em percentual: 7 %"<<endl;		
	} else if(salario >= 2000.01){
		salarioAux = salario*0.04;
		salario = salario + salarioAux;
		std::cout << std::fixed << std::setprecision(2)<<"Novo salario: "<<salario<<endl;
		std::cout << std::fixed << std::setprecision(2)<<"Reajuste ganho: "<<salarioAux<<endl;
		cout<<"Em percentual: 4 %"<<endl;		
	}
	return 0;
}

