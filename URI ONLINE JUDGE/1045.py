'''
PROBLEMA:
1045 - Tipos de Triángulos
RESPUESTA:
Accepted
LENGUAJE:
Python 3.4 (Python 3.4.3) [+1s]
TIEMPO:
0.072s
TAMAÑO DE ARCHIVO:
1.012 Bytes
MEMORIA:
-
ENVIO:
12/11/21 23:09:00
'''

valor = input().split(" ")
a, b, c = valor 

a = float(a)
b = float(b)
c = float(c)

aux1=0;
aux2=0;
aux3=0;

if(a>=b and a>=c):
    aux1 = a
    if(b>=c):
        aux2 = b
        aux3 = c
    elif(c>=b):
        aux2 = c
        aux3 = b    
elif(b>=a and b>=c):
    aux1 = b
    if(a>=c):
        aux2 = a
        aux3 = c
    elif(c>=a):
        aux2 = c
        aux3 = a
elif(c>=a and c>=b):
    aux1 = c
    if(b>=a):
        aux2 = b
        aux3 = a
    elif(a>=b):
        aux2 = a
        aux3 = b

a = aux1
b = aux2
c = aux3

if(a >= b+c):
    print("NAO FORMA TRIANGULO")
else:
    if(a*a == (b*b + c*c)):
        print("TRIANGULO RETANGULO")
    if(a*a > (b*b + c*c)):
        print("TRIANGULO OBTUSANGULO")
    if(a*a < (b*b + c*c)):
        print("TRIANGULO ACUTANGULO")
    if(a == b and a == c):
        print("TRIANGULO EQUILATERO")
    if((a==b and a!=c) or (b==c and b!=a)):
        print("TRIANGULO ISOSCELES")
