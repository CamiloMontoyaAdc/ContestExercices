/*
PROBLEMA:
1038 - Snack
RESPUESTA:
Accepted
LENGUAJE:
Java 8 (OpenJDK 1.8.0) [+2s]
TIEMPO:
0.156s
TAMAÑO DE ARCHIVO:
790 Bytes
MEMORIA:
-
ENVIO:
15/5/21 18:47:15
 */

import java.util.Scanner;

class Main{
  public static void main(String[] args) {

    Scanner sc = new Scanner(System.in);

    int cod = sc.nextInt();
    int cant = sc.nextInt();

    switch (cod){
      case 1:
        System.out.printf("Total: R$ %.2f\n", (cant * 4.00));
        break;
      case 2:
        System.out.printf("Total: R$ %.2f\n", (cant * 4.50));
        break;
      case 3:
        System.out.printf("Total: R$ %.2f\n", (cant * 5.00));
        break;
      case 4:
        System.out.printf("Total: R$ %.2f\n", (cant * 2.00));
        break;
      case 5:
        System.out.printf("Total: R$ %.2f\n", (cant * 1.50));
        break;
      }

    sc.close();
  }
}

