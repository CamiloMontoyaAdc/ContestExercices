/*
PROBLEMA:
1059 - Números Pares
RESPUESTA:
Accepted
LENGUAJE:
Java 8 (OpenJDK 1.8.0) [+2s]
TIEMPO:
0.142s
TAMAÑO DE ARCHIVO:
260 Bytes
MEMORIA:
-
ENVIO:
28/2/22 18:31:53
 */

import java.io.IOException;

public class Main {

    public static void main(String[] args) throws IOException{
        for(int i = 1; i<=100; i++){
            if(i % 2 == 0){
                System.out.println(i);
            }
        }
    }
}
