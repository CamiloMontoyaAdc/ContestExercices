/*
PROBLEMA:
1010 - Cálculo Simple
RESPUESTA:
Accepted
LENGUAJE:
C (gcc 4.8.5, -O2 -lm) [+0s]
TIEMPO:
0.000s
TAMAÑO DE ARCHIVO:
345 Bytes
MEMORIA:
-
ENVIO:
25/4/21 12:09:08
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cod1, cant1, cod2, cant2;
    double valor1, valor2;

    scanf("%d %d %lf", &cod1, &cant1, &valor1);
    scanf("%d %d %lf", &cod2, &cant2, &valor2);

    double total = ((cant1*valor1) + (cant2*valor2));

    printf("VALOR A PAGAR: R$ %.2lf\n", total);
    return 0;
}
