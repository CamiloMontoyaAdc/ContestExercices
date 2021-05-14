#include <stdio.h>
#include <stdlib.h>

/*
PROBLEMA:
1018 - Billetes
RESPUESTA:
Accepted
LENGUAJE:
C (gcc 4.8.5, -O2 -lm) [+0s]
TIEMPO:
0.000s
TAMAÑO DE ARCHIVO:
1,38 KB
MEMORIA:
-
ENVIO:
13/5/21 20:14:40
*/

int main()
{
    int billetes = 0;

    scanf("%d", &billetes);

    int billetesAux = billetes;

    int cien = 0, cincuenta = 0, veinte = 0, diez = 0, cinco = 0, dos = 0, uno = 0;

    while(billetes != 0){

        if(billetes >= 100){
            billetes = billetes - 100;
            cien = cien + 1;
        } else if(billetes >= 50){
            billetes = billetes - 50;
            cincuenta = cincuenta + 1;
        } else if(billetes >= 20){
            billetes = billetes - 20;
            veinte = veinte + 1;
        } else if(billetes >= 10){
            billetes = billetes - 10;
            diez = diez + 1;
        } else if(billetes >= 5){
            billetes = billetes - 5;
            cinco = cinco + 1;
        } else if(billetes >= 2){
            billetes = billetes - 2;
            dos = dos + 1;
        } else if(billetes >= 1){
            billetes = billetes - 1;
            uno = uno + 1;
        }

    }

    printf("%d\n", billetesAux);
    printf("%d nota(s) de R$ 100,00\n", cien);
    printf("%d nota(s) de R$ 50,00\n", cincuenta);
    printf("%d nota(s) de R$ 20,00\n", veinte);
    printf("%d nota(s) de R$ 10,00\n", diez);
    printf("%d nota(s) de R$ 5,00\n", cinco);
    printf("%d nota(s) de R$ 2,00\n", dos);
    printf("%d nota(s) de R$ 1,00\n", uno);

    return 0;
}
