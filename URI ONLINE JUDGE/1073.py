'''
PROBLEMA:
1073 - Cuadrado de un Par
RESPUESTA:
Accepted
LENGUAJE:
Python 3.8 (Python 3.8.2) [+1s]
TIEMPO:
0.123s
TAMAÑO DE ARCHIVO:
312 Bytes
MEMORIA:
-
ENVIO:
28/2/22 19:01:23
'''

# -*- coding: utf-8 -*-

a = input()
a = int(a)
contador = 1
bandera = True

while(bandera):
    if(int(contador) %2 == 0):
        potencia = pow(int(contador),2)
        print(str(contador)+"^2 = "+str(potencia))
    if(contador > a):
        bandera = False
    contador =contador+1
    
    
