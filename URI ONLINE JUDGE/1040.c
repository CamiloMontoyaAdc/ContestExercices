#include <stdio.h>
#include <stdlib.h>

/*
PROBLEMA:
1040 - Promedio 3
RESPUESTA:
Accepted
LENGUAJE:
C (gcc 4.8.5, -O2 -lm) [+0s]
TIEMPO:
0.000s
TAMAÑO DE ARCHIVO:
928 Bytes
MEMORIA:
-
ENVIO:
15/5/21 19:25:52
*/

int main()
{
    double n1, n2, n3, n4, prom, exam, promAux;
    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);

    prom = (n1*2 + n2*3 + n3*4 + n4)/10;

    if(prom >= 7.0){
        printf("Media: %.1lf\n", prom);
        printf("Aluno aprovado.\n");
    } else if (prom <= 4.9){
        printf("Media: %.1lf\n", prom);
        printf("Aluno reprovado.\n");
    } else if(prom >= 5.0 || prom <= 6.9){
        printf("Media: %.1lf\n", prom);
        printf("Aluno em exame.\n");
        scanf("%lf", &exam);
        printf("Nota do exame: %.1lf\n", exam);
        promAux = (prom + exam)/2.0;
        if(promAux >= 5.0){
            printf("Aluno aprovado.\n");
            printf("Media final: %.1lf\n", promAux);
        } else{
            printf("Aluno reprovado.\n");
            printf("Media final: %.1lf\n", promAux);
        }
    }
    return 0;
}
