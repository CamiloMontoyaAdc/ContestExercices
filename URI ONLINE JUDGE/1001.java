/*PROBLEMA:
1001 - Extremadamente Básico
RESPUESTA:
Accepted
LENGUAJE:
Java 8 (OpenJDK 1.8.0) [+2s]
TIEMPO:
0.198s
TAMAÑO DE ARCHIVO:
371 Bytes
MEMORIA:
-
CODE GOLF:
0 caractéres (-160 que la media)
ENVIO:
23/4/21 23:27:55
*/

import java.util.Scanner;

class sumNumbers {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = 0;
        a = sc.nextInt();
        int b = 0;
        b = sc.nextInt();
        System.out.println("X = " + (a+b)); 
        sc.close();
    }
}