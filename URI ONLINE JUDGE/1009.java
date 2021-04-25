/*
PROBLEMA:
1009 - Salario con Bonus
RESPUESTA:
Accepted
LENGUAJE:
Java 8 (OpenJDK 1.8.0) [+2s]
TIEMPO:
0.189s
TAMAÑO DE ARCHIVO:
525 Bytes
MEMORIA:
-
ENVIO:
25/4/21 11:57:22
 */

import java.util.Scanner;

class Main{
  public static void main(String[] args) {

    Scanner in = new Scanner(System.in);

    String nombre;
    double salario;
    double ventas;

    nombre = in.nextLine();
    salario = in.nextDouble();
    ventas = in.nextDouble();

    double total = (salario + (ventas*0.15));

    String rta = String.format("TOTAL = R$ %.2f", total);
    System.out.print(rta +"\n");

    in.close();
  }
}
