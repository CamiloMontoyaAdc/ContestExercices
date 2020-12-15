#Uri Online Judge: Ejercicio 1008 - Salario.
#URL: https://www.urionlinejudge.com.br/judge/es/problems/view/1008
#Elaborado en Python 3.8.
#Answer: Accepted.
#Time: 0.000s.
#Memory: 299 Bytes.
#Elaborado por: Camilo Montoya.

# -*- coding: utf-8 -*-

#Definición de variables a usar
empleado = input();
horas = input();
recibido = input();

horas = int(horas);
recibido = float(recibido);

resultado = (horas*recibido);

print("NUMBER = " + empleado);
print("SALARY = U$ " + "{:.{}f}".format( resultado, 2 ));
