'''
PROBLEMA:
1008 - Salario
RESPUESTA:
Accepted
LENGUAJE:
Python 3.8 (Python 3.8.2) [+1s]
TIEMPO:
0.014s
TAMAÑO DE ARCHIVO:
185 Bytes
MEMORIA:
-
CODE GOLF:
0 caractéres (-264 que la media)
ENVIO:
25/4/21 11:31:33
'''

number = input()
hours = input()
amount = input()

salary = float(float(hours) * float(amount))

print("NUMBER = " + number)
print("SALARY = U$ " + str("{0:.2f}".format(salary)))
