/*
PROBLEMA:
1065 - Pares Entre Cinco Números
RESPUESTA:
Accepted
LENGUAJE:
C (gcc 4.8.5, -O2 -lm) [+0s]
TIEMPO:
0.000s
TAMAÑO DE ARCHIVO:
293 Bytes
MEMORIA:
-
ENVIO:
18/1/22 20:45:08
*/

#include <stdio.h> 
#include <stdlib.h> 
 
int main(int argc, char *argv[]) { 
	 
	int number = 0;
	int acum = 0;
	int i = 0;
	
	for(i; i<5; i++){
		scanf("%d", &number);
		if(number %2 == 0){
			acum = acum + 1;
		}
	}
	
	printf("%d valores pares\n", acum);
 
return 0; 
} 
