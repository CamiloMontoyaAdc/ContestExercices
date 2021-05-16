#include<stdio.h>
#include <math.h>

/*
PROBLEMA:
1036 - Fórmula de Bhaskara
RESPUESTA:
Accepted
LENGUAJE:
C++ (g++ 4.8.5, -std=c++11 -O2 -lm) [+0s]
TIEMPO:
0.000s
TAMAÑO DE ARCHIVO:
352 Bytes
MEMORIA:
-
ENVIO:
15/5/21 18:09:19
*/

int main()
{
 double a, b, c, t;

 scanf("%lf %lf %lf", &a, &b, &c);

 if(((b * b) - 4 * a * c) < 0 || a == 0) {
     printf("Impossivel calcular\n");
 } else {
    t = sqrt((b * b) - 4 * a * c);
    printf("R1 = %.5lf\nR2 = %.5lf\n", ((-b + t) / (2 * a)), ((-b - t) / (2 * a)));
 }

 return 0;
}
