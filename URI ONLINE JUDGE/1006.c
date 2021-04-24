/*
PROBLEMA:
1006 - Promedio 2
RESPUESTA:
Accepted
LENGUAJE:
C (gcc 4.8.5, -O2 -lm) [+0s]
TIEMPO:
0.000s
TAMAÑO DE ARCHIVO:
233 Bytes
MEMORIA:
-
ENVIO:
24/4/21 17:01:48
*/

#include <stdio.h>

    int main()
    {
       double a, b, c, prom;

       scanf("%lf%lf%lf", &a, &b, &c);

       prom = (a/10 * 2) + (b/10 * 3) + (c/10 * 5);

       printf("MEDIA = %.1lf\n", prom);

       return 0;
    }
