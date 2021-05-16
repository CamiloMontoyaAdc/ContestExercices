'''
PROBLEMA:
1042 - Clasificación Simple
RESPUESTA:
Accepted
LENGUAJE:
Python 3.8 (Python 3.8.2) [+1s]
TIEMPO:
0.022s
TAMAÑO DE ARCHIVO:
782 Bytes
MEMORIA:
-
ENVIO:
15/5/21 19:54:56
'''

valor = input().split(" ")
a, b, c = valor 

a = int(a)
b = int(b)
c = int(c)

aux1 = a
aux2 = b
aux3 = c

aux11 = 0
aux22 = 0
aux33 = 0

if(a < b and a < c):
    if(b < c):
        aux11 = a
        aux22 = b
        aux33 = c
    else:
        aux11 = a
        aux22 = c
        aux33 = b
elif(b < a and b < c):
    if(a < c):
        aux11 = b
        aux22 = a
        aux33 = c
    else:
        aux11 = b
        aux22 = c
        aux33 = a
elif(c < a and c < b):
    if(a < b):
        aux11 = c
        aux22 = a
        aux33 = b
    else:
        aux11 = c
        aux22 = b
        aux33 = a

print(aux11)
print(aux22)
print(aux33)
print("")
print(aux1)
print(aux2)
print(aux3)
        
        
    
        
    
