/*
PROBLEMA:
1047 - Tiempo de Juego con Minutos
RESPUESTA:
Accepted
LENGUAJE:
C (gcc 4.8.5, -O2 -lm) [+0s]
TIEMPO:
0.000s
TAMAÑO DE ARCHIVO:
584 Bytes
MEMORIA:
-
ENVIO:
15/11/21 18:27:11
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
int horaInicio, minInicio, horaFin, minFin, hora, minuto = 0;

scanf("%d %d %d %d", &horaInicio, &minInicio, &horaFin, &minFin);

hora = horaFin-horaInicio;

if(hora < 0){
	hora = 24+hora;
}

minuto = minFin-minInicio;

if(minuto < 0){
	minuto = 60+minuto;
	hora--;
	if(hora < 0){
		hora = 24+hora;
	}
}

if(hora == 0 && minuto == 0){
	printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
} else {
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hora,minuto);
}

return 0;
}
