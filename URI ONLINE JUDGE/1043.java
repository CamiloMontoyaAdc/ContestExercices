/*
PROBLEMA:
1043 - Triángulo
RESPUESTA:
Accepted
LENGUAJE:
Java 8 (OpenJDK 1.8.0) [+2s]
TIEMPO:
0.826s
TAMAÑO DE ARCHIVO:
651 Bytes
MEMORIA:
-
ENVIO:
15/5/21 20:10:39
 */

import java.util.Scanner;

class Main{
  public static void main(String[] args) {

    Scanner sc = new Scanner(System.in);

    double l1 = sc.nextDouble();
    double l2 = sc.nextDouble();
    double l3 = sc.nextDouble();

    if(((l1+l2) > l3) && ((l1 + l3) > l2) && ((l2 + l3) > l1)){
      double per = l1 + l2 + l3;
      System.out.printf("Perimetro = %.1f\n", per);
    } else{
      double area = ((l1 + l2) / 2) * l3;
      System.out.printf("Area = %.1f\n", area);
    }

    sc.close();
  }
}
