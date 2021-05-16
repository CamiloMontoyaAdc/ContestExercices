#include <stdio.h>
#include <stdlib.h>

/*
PROBLEMA:
1035 - Prueba de Selección 1
RESPUESTA:
Accepted
LENGUAJE:
C (gcc 4.8.5, -O2 -lm) [+0s]
TIEMPO:
0.000s
TAMAÑO DE ARCHIVO:
0 Bytes
MEMORIA:
-
ENVIO:
15/5/21 13:42:03
*/

int main()
{
    int a = 0, b = 0, c = 0, d = 0;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    if((b > c) && (d > a) && ((c + d) > (a + b)) && (c > 0 && d > 0) && (a % 2 == 0)){
        printf("Valores aceitos\n");
    } else {
        printf("Valores nao aceitos\n");
    }
    return 0;
}
