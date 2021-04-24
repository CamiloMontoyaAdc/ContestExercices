/*
PROBLEMA:
1005 - Promedio 1
RESPUESTA:
Accepted
LENGUAJE:
Java 14 (OpenJDK 1.14.0) [+2s]
TIEMPO:
0.121s
TAMAÑO DE ARCHIVO:
387 Bytes
MEMORIA:
-
ENVIO:
24/4/21 16:49:05
 */

import java.util.Scanner;

class Main{
  public static void main(String[] args) {

    Scanner sc = new Scanner(System.in);
    float a, b;

    a = sc.nextFloat();
    b = sc.nextFloat();

    float med = (float) (((a * 3.5) + (b * 7.5)) / (3.5 + 7.5));

    String media = String.format("MEDIA = %,.5f", med);
    System.out.print(media +"\n");

    sc.close();
  }
}
