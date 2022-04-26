/*
PROBLEMA:
1101 - Secuencia de Números y Suma
RESPUESTA:
Accepted
LENGUAJE:
Java 8 (OpenJDK 1.8.0) [+2s]
TIEMPO:
0.240s
TAMAÑO DE ARCHIVO:
1,24 KB
MEMORIA:
-
ENVIO:
25/4/22 20:12:37
*/

import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException{

        Scanner sc = new Scanner(System.in);

        int n1;
        int n2;
        int suma = 0;
        do{
            n1 = sc.nextInt();
            n2 = sc.nextInt();

            if(n1 <= 0 || n2 <= 0){
                break;
            }

            if(n1 < n2){
                while(n1 <= n2){
                    suma = suma + n1;
                    if(n1 != n2){
                        System.out.print(n1 + " ");
                    } else{
                        System.out.println(n1 + " Sum=" + suma);
                        suma = 0;
                    }
                    n1++;
                }
            } else{
                while(n2 <= n1){
                    suma = suma + n2;
                    if(n2 != n1){
                        System.out.print(n2 + " ");
                    } else{
                        System.out.println(n2 + " Sum=" + suma);
                        suma = 0;
                    }
                    n2++;
                }
            }
        }
        while(n1 > 0 && n2 > 0 );

        sc.close();
    }
}