'''
PROBLEMA:
1037 - Intervalo
RESPUESTA:
Accepted
LENGUAJE:
Python 3.8 (Python 3.8.2) [+1s]
TIEMPO:
0.094s
TAMAÑO DE ARCHIVO:
380 Bytes
MEMORIA:
-
ENVIO:
15/5/21 18:33:41
'''

valor = input()

valor = float(valor)

if valor<0 or valor>100:
    print("Fora de intervalo")
elif valor >= float(0) and valor <= float(25):
    print("Intervalo [0,25]")
elif valor > float(25) and valor <= float(50):
    print("Intervalo (25,50]")
elif valor > float(50) and valor <= float(75):
    print("Intervalo (50,75]")
else:
    print("Intervalo (75,100]")
