#CodeForces: Ejercicio 71A - Way Too Long Words.
#URL: https://codeforces.com/problemset/problem/71/A
#Elaborado en python 3.8.
#Verdict: Accepted.
#Time: 139ms.
#Memory: 0KB.
#Elaborado por: Camilo Montoya.

#Variable para capturar el número de intentos.
intentos = input();

#Contador para detener el ciclo.
contador = 0;

#Ciclo while para iterar el proceso.
while(contador < int(intentos)):

    #Variable para capturar la palabra.
    palabra = input();

    #Condicional para revisar la longitud inclusiva de la palabra.
    if(len(palabra) <=10):

        #Impresión de la palabra.
        print(palabra);

    #Else en caso de que no se cumpla la condición del if.
    else:

        #Substring para obtener la primera letra de la palabra.
        inicio = palabra[0:1];

        #Substring para obtener la última letra de la palabra.
        fin = palabra[(len(palabra)-1):(len(palabra))]

        #Impresión de la palabra en el formato requerido.
        print(inicio + str(len(palabra)-2) + fin);

    #Iteración del contador.
    contador = contador + 1
