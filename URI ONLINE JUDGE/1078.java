/*
PROBLEMA:
1078 - Tablas de Multiplicar
RESPUESTA:
Accepted
LENGUAJE:
Java 8 (OpenJDK 1.8.0) [+2s]
TIEMPO:
0.182s
TAMAÑO DE ARCHIVO:
384 Bytes
MEMORIA:
-
ENVIO:
28/2/22 19:24:48
 */

import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException{

        Scanner sc = new Scanner(System.in);
        int number = sc.nextInt();

        for(int i = 1; i<=10; i++){
            System.out.println(i + " x " + number + " = " + (i*number));
        }

        sc.close();
    }
}