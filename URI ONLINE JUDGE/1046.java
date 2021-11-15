package com.company;

/*
 PROBLEMA:
 1046 - Tiempo de Juego
 RESPUESTA:
 Accepted
 LENGUAJE:
 Java 8 (OpenJDK 1.8.0) [+2s]
 TIEMPO:
 0.253s
 TAMAÑO DE ARCHIVO:
 638 Bytes
 MEMORIA:
 -
 ENVIO:
 12/11/21 23:34:10
 */

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int horaInicio = sc.nextInt();
        int horaFinal = sc.nextInt();

        if(horaInicio == horaFinal){
            System.out.println("O JOGO DUROU 24 HORA(S)");
        } else if(horaInicio > horaFinal){
            System.out.println("O JOGO DUROU "+ (24-(horaInicio - horaFinal)) +" HORA(S)");
        } else if(horaInicio < horaFinal){
            System.out.println("O JOGO DUROU " + (horaFinal - horaInicio) + " HORA(S)");
        }
        sc.close();
    }
}
