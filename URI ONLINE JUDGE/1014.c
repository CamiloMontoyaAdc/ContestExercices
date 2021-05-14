/*
PROBLEMA:
1014 - Consumo
RESPUESTA:
Accepted
LENGUAJE:
C (gcc 4.8.5, -O2 -lm) [+0s]
TIEMPO:
0.000s
TAMAÑO DE ARCHIVO:
252 Bytes
MEMORIA:
-
ENVIO:
29/4/21 20:35:57
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int distancia = 0;
    double consumo = 0;

    scanf("%d %lf", &distancia, &consumo);

    double total = (distancia/consumo);

    printf("%.3lf km/l\n", total);
    return 0;
}
