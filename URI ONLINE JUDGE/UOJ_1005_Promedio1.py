#Uri Online Judge: Ejercicio 1005 - Promedio 1.
#URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1005
#Elaborado en Python 3.8.
#Answer: Accepted.
#Time: 0.000s.
#Memory: 350 Bytes.
#Elaborado por: Camilo Montoya.

# -*- coding: utf-8 -*-

#Captura del valor 1.
n1 = input();

#Captura del valor 2.
n2 = input();

#Parseo de string a float.
n1 = float(n1);
n2 = float(n2);

#Cálculo del promedio.
resultado = ((n1*3.5)/11)+((n2*7.5)/11);

#Impresión del resultado con el formato solicitado.
print("MEDIA = " + "{:.{}f}".format( resultado, 5 ) ) 
