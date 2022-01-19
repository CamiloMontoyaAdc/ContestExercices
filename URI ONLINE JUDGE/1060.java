/*
PROBLEMA:
1060 - Números Positivos
RESPUESTA:
Accepted
LENGUAJE:
Java 8 (OpenJDK 1.8.0) [+2s]
TIEMPO:
0.165s
TAMAÑO DE ARCHIVO:
493 Bytes
MEMORIA:
-
ENVIO:
18/1/22 20:38:11
 */

import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException{
        Scanner sc = new Scanner(System.in);
        double number;
        int acum = 0;
        for(int i = 0; i < 6; i++){
             number = sc.nextDouble();
            if(number > 0){
                acum = acum + 1;
            }
        }
        System.out.println(acum + " valores positivos");
        sc.close();
    }
}
