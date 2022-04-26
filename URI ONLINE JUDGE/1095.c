/*
PROBLEMA:
1095 - Secuencia IJ 1
RESPUESTA:
Accepted
LENGUAJE:
C (gcc 4.8.5, -O2 -lm) [+0s]
TIEMPO:
0.000s
TAMAÑO DE ARCHIVO:
207 Bytes
MEMORIA:
-
ENVIO:
25/4/22 19:32:42
*/

#include <stdio.h> 
#include <stdlib.h> 
 
int main(int argc, char *argv[]) { 
	 
	int i = 1;
	int j = 60;

	for(j ; j >= 0; j-=5){
		printf("I=%d J=%d\n",i, j);
		i = i+3;
	}
 
return 0; 
} 

