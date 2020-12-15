#Uri Online Judge: Ejercicio 1006 - Promedio 2.
#URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1006
#Elaborado en Python 3.8.
#Answer: Accepted.
#Time: 0.000s.
#Memory: 415 Bytes.
#Elaborado por: Camilo Montoya.

# -*- coding: utf-8 -*-

#Captura del valor 1.
n1 = input();

#Captura del valor 2.
n2 = input();

#Captura del valor 3.
n3 = input();

#Parseo de string a float.
n1 = float(n1);
n2 = float(n2);
n3 = float(n3);

#Cálculo del promedio.
resultado = ((n1*2)/10)+((n2*3)/10)+((n3*5)/10);

#Impresión del resultado con el formato solicitado.
print("MEDIA = " + "{:.{}f}".format( resultado, 1 ) ) 
