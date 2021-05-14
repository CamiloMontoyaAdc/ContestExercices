/**
 * PROBLEMA:
 * 1013 - El Mayor
 * RESPUESTA:
 * Accepted
 * LENGUAJE:
 * Java 8 (OpenJDK 1.8.0) [+2s]
 * TIEMPO:
 * 0.247s
 * TAMAÑO DE ARCHIVO:
 * 534 Bytes
 * MEMORIA:
 * -
 * ENVIO:
 * 29/4/21 20:29:31
 */

import java.util.Scanner;

class Main{
  public static void main(String[] args) {

    Scanner in = new Scanner(System.in);

    int a = in.nextInt();
    int b = in.nextInt();
    int c = in.nextInt();

    int calculo_uno = ((a + b + Math.abs(a-b)))/2;
    int resultado = (calculo_uno + c + Math.abs(calculo_uno - c))/2;

    System.out.println(resultado + " eh o maior");

    in.close();
  }
}
