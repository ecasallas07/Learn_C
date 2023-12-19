# Conecptos y estrcutura basica del programa

- <Declaraciones> : Unidad de calculo mas pequeña, actuan como una oracion en el lenguaje natural, cuando queremos que nuestro programa haga algo escribimos declaraciones.
*La mayoria de declaraciones termian en (;)*

- <Funciones>: Las declaraciones se agrupan en unidas llamadas funciones, siendo una funcion un conjunto de declaraciones que se ejecutan secuencialmente.
*CADA PROGRMA DEBE TENER UNA FUNCION LLAMADA main()* 

En programacion , el nombre de una funcion se llama <identificador>
----
# Tipos de datos

- Se pueden definir varias variables :
*int a, b;*

- En la misma linea diferentes tipos de datos, separados por ( ; ):
*int a; double b;*

# Inicializacion de las variables

- Inicializacion de copia :
int width = 4; 

- Inicializacion directa
*La inicializacion genera un problema a la hora de diferenciar de funciones*
int x(); -> Funcion
int width(5); --> Variable

- Inicializacion de listas
int wid{ 5 }; --> Iinicializacion directa 
int height = { 5 } --> Inicializacion de copia


<error> int width { 4.5} error por tipo de dato definido </error>

- <error>Inicializacion de variables pero no usarse, generara un error inevitablemente si esta configurado las advertencias para tomarse como un error.</error>

- En C++ 17 se puede usar la siguiente opcion para decirle al compilador que la variable inicializada no esta usada pero que no la genere como un error, con los dos parentesis:
 [[maybe_unsed]]


# Concatenacion
Para concatenar es utilizando el (<<) despues de los textos,por ejemplo : 
 std::cout <<"Hello" << "Concatenar"

Si se quiere imprimir lineas separadas se debe usar (*std::endl*):
std::cout << "Helllo" << std::endl;
std::cout << "World" << "Lineas separadas"; --> Podria ser necesaria y buena practica tambien en esta linea usar la separacion pero, no hay una linea despues de esto.


# Bufer
Espacio de memoria, en el que se almacena datos de manera temporal, normalmente para un unico uso (generalmente para el sistema FIFO), para evitar que se quede sin datos el hardware o software .

En la compilacion  std::cout normalmente se almacena en un bufer. este es vaciado y todos los datos del bufer se transfieren a la consola.