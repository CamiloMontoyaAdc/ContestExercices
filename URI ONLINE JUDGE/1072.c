/*
PROBLEMA:
1072 - Intervalo 2
RESPUESTA:
Accepted
LENGUAJE:
C (gcc 4.8.5, -O2 -lm) [+0s]
TIEMPO:
0.000s
TAMAÑO DE ARCHIVO:
416 Bytes
MEMORIA:
-
ENVIO:
28/2/22 18:42:16
*/

#include <stdio.h> 
#include <stdlib.h> 
 
int main(int argc, char *argv[]) { 
	 
	int veces = 0;
	int numero = 0;
	int dentro = 0;
	int fuera = 0;
	int i = 0;
	
	scanf("%d", &veces);
	
	for(i; i < veces; i++){
		scanf("%d", &numero);
		if(numero >= 10 && numero <= 20){
			dentro = dentro+1;
		} else {
			fuera = fuera+1;
		}
	}
	
	printf("%d in\n%d out\n", dentro, fuera);
 
return 0; 
} 
