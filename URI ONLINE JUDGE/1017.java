/**
 * PROBLEMA:
 * 1017 - Combustible Gastado
 * RESPUESTA:
 * Accepted
 * LENGUAJE:
 * Java 8 (OpenJDK 1.8.0) [+2s]
 * TIEMPO:
 * 0.177s
 * TAMAÑO DE ARCHIVO:
 * 499 Bytes
 * MEMORIA:
 * -
 * ENVIO:
 * 13/5/21 19:46:46
 */

import java.util.Scanner;

class Main{
  public static void main(String[] args) {

    Scanner in = new Scanner(System.in);

    int horas = in.nextInt();
    int velocidad = in.nextInt();

    double resultado =  ((double)horas*(double)velocidad)/12.0;
    
    String rta = String.format("%.3f", resultado);
    System.out.println(rta);
    
    in.close();
  }
}
