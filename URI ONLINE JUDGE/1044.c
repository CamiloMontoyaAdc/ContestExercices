#include <stdio.h>
#include <stdlib.h>

/*
PROBLEMA:
1044 - Múltiplos
RESPUESTA:
Accepted
LENGUAJE:
C (gcc 4.8.5, -O2 -lm) [+0s]
TIEMPO:
0.000s
TAMAÑO DE ARCHIVO:
445 Bytes
MEMORIA:
-
ENVIO:
15/5/21 20:20:28
*/

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    if(a  > b){
        if(a%b == 0){
            printf("Sao Multiplos\n");
        } else{
            printf("Nao sao Multiplos\n");
        }
    } else if(b > a){
         if(b%a == 0){
             printf("Sao Multiplos\n");
         } else{
            printf("Nao sao Multiplos\n");
         }
    }

    return 0;
}
