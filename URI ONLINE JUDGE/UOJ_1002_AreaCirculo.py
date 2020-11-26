#Uri Online Judge: Ejercicio 1002 - Área del Círculo.
#URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1002
#Elaborado en Python 3.8.
#Answer: Accepted.
#Time: 0.000s.
#Memory: 542 Bytes.
#Elaborado por: Camilo Montoya.

# -*- coding: utf-8 -*-

#Captura del valor.
radio = input();

#Parseo de string a float.
radio = float(radio);

#Cálculo del área del circulo.
resultado = 3.14159*(radio*radio);

#Impresión del resultado con el formato solicitado.
print("A=" + "{:.{}f}".format( resultado, 4 ) ) 
