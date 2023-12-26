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
El stdln vacia como tal el bufer, mientras que el uso de *\n* da un salto en las lineas y su uso se considera mejor practica par texto de consola.
std::cout << "Helllo" << std::endl;
std::cout << "World" << "Lineas separadas"; --> Podria ser necesaria y buena practica tambien en esta linea usar la separacion pero, no hay una linea despues de esto.


# Bufer
Espacio de memoria, en el que se almacena datos de manera temporal, normalmente para un unico uso (generalmente para el sistema FIFO), para evitar que se quede sin datos el hardware o software .

En la compilacion  std::cout normalmente se almacena en un bufer. este es vaciado y todos los datos del bufer se transfieren a la consola.

# Recibir valores
Para recibir valores desde la consola:

Inicializo variable para que en la variable x pueda alamacenar el valor.
(>>) --> simbolos que es para recibir el valor de entrada.

int x{}; // inicializar variable    
--> std::cin >> x

# Variables no inicializadas
A diferencia de otros lenguajes c++ no inicializa las variables por defecto en 0, y se le denomina variable no inicializada
- Inicializado = Al objeto se le asigna un valor conocido en el punto de definición.
- Asignación = Al objeto se le asigna un valor conocido más allá del punto de definición.
- No inicializado = Al objeto aún no se le ha asignado un valor conocido.

*Si C++ inicializara todas esas variables con valores predeterminados al momento de su creación, esto daría como resultado 100.000 inicializaciones (lo que sería lento) y con pocos beneficios (ya que de todos modos estás sobrescribiendo esos valores).*

Como buena practica siempre es inicializar las variables,para evitar problemas al depurar o el carge de recursos del programa.

# Comportamiento indefinido
Es el resultado de la ejecucion  de codigo cuyo comportamiento no esta bien definido por  el lenguaje C++, en el ejemplo mas evidente, es que no tiene reglas que determinen que sucede si se usa el valor de un variable a la que no se ha asignado un valor conocido.
-- Caracteristicas de codigo con comportamiento indefinido
    --> Produce resultados diferentes cada vez que se ejecuta
    --> Produce constantemente el resultado incorrecto
    --> Parece estar funcionando pero produce resultados incorrectos 
    --> Funciona en algunos compiladores y en otros no

*COMO BUENA PRACTICA NO ESCRIBIR MAS DE 80 CARACTERES EN UN LINEA DE CODIGO*

# Literales en la programacion
- Literal es un valor fijo dispuesto en el codigo y que no es modificable en ninguno de los procesos del codigo.
Es un valor fijo que se ha insertado directamente en el codigo fuente. A diferencia de una variable (cuyo valor se puede establecer y cambiar mediante inicialización y asignación respectivamente), el valor de un literal es fijo ( 5 es siempre 5). Por eso los literales se llaman constantes.

- Operadores unarios
    Estos actuan sobre un operando. Toma un operadorando literal ( 5 ) y cambia su valor de salida  ( -5 )

- Operadores binarios
    Estos actuan sobre dos operandos. Toma un operador (izquierda < + operador > derecha)

- Operadores ternarios
    Actuan sobre tres operandos, en C++ (el operador condicional) cumple dentro de este conjunto.

- Operadores nulares
    Actuan sobre operandos cero. Solo existe en C++(operador de lanzamiento).

- Operadores de encadenamiento
    Se encadenan de modo  que la salida de un operador pueda usarse como entrada para otro operador.  (2 < * operador > 3 < + operador > 4)
    --> En este caso es necesario que al realizarse la operacion, se haga basado en el orden de operadores.

*SE DEBE CENTRAR EN LA MANTENIBILIDAD DEL CODIGO Y NO CENTRASE SOLO EN LA OPTIMIZACION* 


# Conclusiones capitulo 01

--> Los tipos de datos le especifican al compilador como debe interpretar el valor 
--> Asignacion de copia es cuando se declara una variable y luego con el (=) int x = 5; , ya que se asigna un valor a una variable ya creada.
--> Existen 3 tipos de inicializacion en C++ las cuales son  por copia, directa y de lista.
--> Preferir la inicializacion a la asignacion en variables
--> Una variable que no tiene un valor, se denomina variable no inicializada, e intentar devolver el valor de una variable no inicializada  genera un comportamiento indefinido.

