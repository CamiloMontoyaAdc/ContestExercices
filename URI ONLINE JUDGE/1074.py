'''
PROBLEMA:
1074 - Par o Impar
RESPUESTA:
Accepted
LENGUAJE:
Python 3.8 (Python 3.8.2) [+1s]
TIEMPO:
0.015s
TAMAÑO DE ARCHIVO:
515 Bytes
MEMORIA:
-
ENVIO:
22/4/22 20:14:56
'''

# -*- coding: utf-8 -*-

intentos = input()
numero = 0
intentos = int(intentos)

for i in range(0,intentos,1):
    numero = input()
    numero = int(numero)
    if(numero == 0):
        print("NULL")
    elif(numero < 0 and numero %2 != 0):
        print("ODD NEGATIVE")
    elif(numero < 0 and numero %2 == 0):
        print("EVEN NEGATIVE")
    elif(numero > 0 and numero %2 != 0):
        print("ODD POSITIVE")
    elif(numero > 0 and numero %2 == 0):
        print("EVEN POSITIVE")  
        

