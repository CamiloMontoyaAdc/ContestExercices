'''
PROBLEMA:
1020 - Edad en Días
RESPUESTA:
Accepted
LENGUAJE:
Python 3.8 (Python 3.8.2) [+1s]
TIEMPO:
0.149s
TAMAÑO DE ARCHIVO:
392 Bytes
MEMORIA:
-
ENVIO:
13/5/21 23:13:43
'''

dias = input()

dias = int(dias)

anio = 0
mes = 0
dia = 0

while(dias != 0):
    if(dias >= 365):
        dias = dias - 365
        anio = anio + 1
    elif(dias >= 30):
        dias = dias - 30
        mes = mes + 1
    elif(dias >= 1):
        dias = dias - 1
        dia = dia + 1

print(str(anio) + " ano(s)")
print(str(mes) + " mes(es)")
print(str(dia) + " dia(s)")
