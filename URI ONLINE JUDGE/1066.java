/*
PROBLEMA:
1066 - Par, Impar, Postivo y Negativo
RESPUESTA:
Accepted
LENGUAJE:
Java 8 (OpenJDK 1.8.0) [+2s]
TIEMPO:
0.165s
TAMAÑO DE ARCHIVO:
989 Bytes
MEMORIA:
-
ENVIO:
22/4/22 20:27:33
 */
import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException{

        Scanner sc = new Scanner(System.in);
        int pares = 0;
        int impares = 0;
        int positivos = 0;
        int negativos = 0;

        for(int i = 0; i<5; i++){
            int number = sc.nextInt();
            if(number % 2 == 0){
                pares = pares + 1;
            } if(number % 2 != 0){
                impares = impares + 1;
            } if(number > 0){
                positivos = positivos + 1;
            } if(number < 0){
                negativos = negativos + 1;
            }
        }

        System.out.println(pares + " valor(es) par(es)");
        System.out.println(impares + " valor(es) impar(es)");
        System.out.println(positivos + " valor(es) positivo(s)");
        System.out.println(negativos + " valor(es) negativo(s)");

        sc.close();
    }
}
