# Notes of course Youtube - (Learn C++)

## Librerias mas comunes 

--> Declara conjunto de  funciones para operaciones y tranformaciones matematicas:
    <cmath> => metodos como pow(2.0,3.0) pero los dos valores son double 
--> Declara un conjunto de funciones para manipulacion de elementos string:
    <cstring>
--> Declara un conjunto de funciones para manipulacion del tiempo y la fecha:
    <ctime>
--> Coleccion de funciones para utilizarse en rangos de elementos:
    <algorithm>     
        find()      // Encuentra un valor en un rango de elementos
        count()     // Cuenta el numero de apariciones de un valor en un rango
        swap()      // Intercambia el valor de dos variables
        reverse()   // Pone en orden inverso un rango de elementos
        sort()      // Ordena un rango de elementos
        merge()     // Mezcla dos rangos de elementos ya ordenados   
--> Incluye todas las librerias standar  y de STL (STL significa "Standard Template Library"),con esto no se deben incluir las demas librerias, pero el tiempo de compilacion es mucho mayor.        
    <bits/stdc++.h>
