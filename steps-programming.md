## Pasos para programar en C++

# Step 1
 Definir el problema a resolver
*"Quiero escribir un programa que me permita ingresar muchos números y luego calcular el promedio".*

# Step 2
 Disenar una solucion

Normalmente, las buenas soluciones tienen las siguientes características:

- Son sencillos (no demasiado complicados ni confusos).
- Están bien documentados (especialmente en torno a cualquier suposición o limitación).
- Están construidos de forma modular, por lo que las piezas se pueden reutilizar o cambiar más adelante sin afectar otras partes del programa.
- Son robustos y pueden recuperarse o dar mensajes de error útiles cuando sucede algo inesperado.

Cuando te sientas y empiezas a codificar de inmediato, normalmente piensas "Quiero hacer <algo>", por lo que implementas la solución que te lleve allí más rápido. Esto puede provocar que los programas sean frágiles, difíciles de cambiar o ampliar más adelante, o que tengan muchos errores (defectos técnicos).

- Dato:  El término error fue utilizado por primera vez por Thomas Edison en la década de 1870! Sin embargo, el término se popularizó en la década de 1940, cuando los ingenieros encontraron una polilla real atrapada en el hardware de una de las primeras computadoras, provocando un cortocircuito. Tanto el libro de registro en el que se informó el error como la polilla ahora forman parte del Museo Smithsonian de Historia Estadounidense. [https://americanhistory.si.edu/collections/nmah_334663]


*Los estudios han demostrado que sólo el 20% del tiempo de un programador se dedica a escribir el programa inicial. El otro 80% se gasta en mantenimiento, que puede consistir en depuración (eliminación de errores), cambios de entorno  o mejoras.*

# Step 3
 Escribir un programa que implmente la solucion

# Step 4
 Compilar el programa
*Si su programa tuviera 3 archivos .cpp, el compilador generaría 3 archivos objeto*
# Step 5
Vincular archivos de objetos y bibliotecas
*En segundo lugar, además de poder vincular archivos objeto, el vinculador también es capaz de vincular archivos de biblioteca. Un archivo de biblioteca es una colección de código precompilado que ha sido "empaquetado" para su reutilización en otros programas.*

# Step 6
¡Esta es la parte divertida (con suerte)! ¡Puede ejecutar su ejecutable y ver si produce el resultado que esperaba!



------

# Ejecucion de programas en C++

- Para ejecutar el archivo por primera vez:

El hello sin extension define en que archivo se quiere guardar la compilacion, cuando se compila por primera vez se escoge el nombre que desee, pero una vez ya compilado debe poner el nombre que se genero.
*Esto desde un sistema linux o WSL*
g++ -o hello hello.cpp

*Ejecutar comando para l aversion c++20*
 - g++ -std=c++20 -o ejecutable archivo.cpp -v

- Para visualizar el contenido del progrma luego de ejecutar:
Se ingresa a la carpeta donde se encuentra el fichero y se ejecuta 

En hello es el nombre del programa 
./hello


# Compilacion IDE
- *Build* compila todos los archivos de código modificados en el proyecto o espacio de trabajo/solución y luego vincula los archivos objeto en un ejecutable. Si no se han modificado archivos de código desde la última compilación, esta opción no hace nada.

- *Clean* elimina todos los objetos y ejecutables almacenados en caché, por lo que la próxima vez que se genere el proyecto, se volverán a compilar todos los archivos y se producirá un nuevo ejecutable.

- *La reconstrucción* realiza una “limpieza”, seguida de una “construcción”.

- *Compile* vuelve a compilar un único archivo de código (independientemente de si se ha almacenado en caché anteriormente). Esta opción no invoca el vinculador ni produce un ejecutable.

- *Ejecutar/iniciar* ejecuta el ejecutable de una compilación anterior. Algunos IDE (por ejemplo, Visual Studio) invocarán una "compilación" antes de realizar una "ejecución" para garantizar que esté ejecutando la última versión de su código. De lo contrario (por ejemplo, Code::Blocks) simplemente ejecutará el ejecutable anterior.

USUARIOS  GCC/G++

# Debugear 
Para revisar el codigo 
 1.Se revisa el ejecutable
 - gdb ./compatibilidad

 2. Luego si se quiere revisar una funcion en especifico o que termine en un punto especifico como una funcion, tambien se puede establecer en funciones, lineas de codigo o direcciones de memoria
 
 *linea de codigo*
 - break archivo.cpp:numero_de_linea
*condicionales*
 - break <funcion if condicion>

 *funciones*
 - break <nombre_funcion>

 3. luego para ejecutar la depuracion hasta el punto establecido es 
 - run

 4. Luego si desea quitar ese punto de break
 *se pone 1 si es el primer break puesto*
 - delete 1

 *Cuando se desean quitar todos los breaks*
 - clear

# Solucionar errores :
[https://www.learncpp.com/cpp-tutorial/a-few-common-cpp-problems/]

# Compilar programa 
1. g++ -g nombre_del_programa.cpp -o nombre_del_ejecutable
2. gdb nombre_del_ejecutable

*Deshabilitar las extension del compilador para que cumplan con todos los requisitos de C++*
Con -pedantic-errors se deshabilita las extensiones
comando: g++ -pedantic-errors -g nombre_del_programa.cpp -o nombre_del_ejecutable


# Advertencias en el compilador 
g++ -Wall -Weffc++ -Wextra -Wconversion -Wsign-conversion -pedantic-errors -g nombre_del_programa.cpp -o nombre_del_ejecutable

-Wall: Habilita la mayoría de las advertencias comunes.
-Weffc++: Advierte sobre prácticas que podrían llevar a errores según las pautas de estilo de Effective C++ de Scott Meyers.
-Wextra: Habilita advertencias adicionales no cubiertas por -Wall.
-Wconversion: Advierte sobre posibles problemas de conversión entre tipos.
-Wsign-conversion: Advierte sobre posibles problemas de conversión entre tipos de signo.
-Werror: Configuracion para que las advertencias se han tomadas como errores

# Estandar de lenguaje g++

Para GCC/G++, puede pasar indicadores del compilador -std=c++11, -std=c++14, -std=c++17 o -std=c++20 para habilitar la compatibilidad con C++ 11/14/17/20 respectivamente. 

Si tienes GCC 8 o 9, necesitarás usar -std=c++2a para compatibilidad con C++20.

- ejecutar comando:  g++ -std=c++2a hello.cpp --> dependiendo de la version en la que se quiera compilar el programa

*Tener en cuenta que si desea trabajar con la version 20 de C++, en visual studio code se deben revisar en el .vscode c_cpp_properties la configuracion <"cppStandard"> y modificarse para asi no tener problemas con la version al giaul que si se trabaja en wsl ejecutar el comando para que el ejecutable contenga la version deseada*