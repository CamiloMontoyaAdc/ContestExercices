'''
PROBLEMA:
1012 - Área
RESPUESTA:
Accepted
LENGUAJE:
Python 3.8 (Python 3.8.2) [+1s]
TIEMPO:
0.027s
TAMAÑO DE ARCHIVO:
704 Bytes
MEMORIA:
-
ENVIO:
29/4/21 20:12:22
'''

valor = input().split(" ")

lado_uno, lado_dos, lado_tres = valor

area_triangulo = float(float(lado_uno)*float(lado_tres))/int(2)
area_circulo = float(float(lado_tres)*float(lado_tres))*float(3.14159)
area_trapecio = float((float(lado_uno)+float(lado_dos))/int(2))*float(lado_tres)
area_cuadrado = float(float(lado_dos)*float(lado_dos))
area_rectangulo = float(float(lado_uno)*float(lado_dos))

print("TRIANGULO: "+ str("{0:.3f}".format(area_triangulo)))
print("CIRCULO: "+ str("{0:.3f}".format(area_circulo)))
print("TRAPEZIO: "+ str("{0:.3f}".format(area_trapecio)))
print("QUADRADO: "+ str("{0:.3f}".format(area_cuadrado)))
print("RETANGULO: "+ str("{0:.3f}".format(area_rectangulo)))
