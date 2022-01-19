'''
PROBLEMA:
1070 - Seis Números Impares
RESPUESTA:
Accepted
LENGUAJE:
Python 3.8 (Python 3.8.2) [+1s]
TIEMPO:
0.013s
TAMAÑO DE ARCHIVO:
220 Bytes
MEMORIA:
-
ENVIO:
18/1/22 20:56:10
'''

# -*- coding: utf-8 -*-

a = input();
a = int(a);
flag = True;
acum = 0;

while(flag):
    if(acum >= 6):
        flag = False;
    if(a % 2 != 0):
        print(a);
        acum = acum + 1;
    a = a + 1;
