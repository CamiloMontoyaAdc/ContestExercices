/*
PROBLEMA:
1002 - Área del Círculo
RESPUESTA:
Accepted
LENGUAJE:
C (gcc 4.8.5, -O2 -lm) [+0s]
TIEMPO:
0.000s
TAMAÑO DE ARCHIVO:
203 Bytes
MEMORIA:
-
ENVIO:
23/4/21 23:45:40
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double radio = 0;
    scanf("%lf",&radio);

    double rta = 3.14159*(radio*radio);

    printf("A=%.4lf\n", rta);

    return 0;
}
