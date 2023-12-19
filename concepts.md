#### C++ Learning

La CPU de una computadora no entiende C++, las instrucciones que una maquina puede entender se llama codigo de maquina.

ejemplo : 10110000 -> codigo maquina

Instrucciones a la maquina:
1. Se compone de una secuencia de unos y ceros. Cada 0 y 1 se llama un *digito binario*, o *bit* para abreviar.
La cantidad de bits que componen un solo comando varia;por ejemplo. algunas CPU procesan instrucciones que siempre tiene 32 bits de longitud u otras CPU (x86/x64).

2. Cada conjunto de binario scomo un comando para realizar un trabajo muy especifico, como colocar este numero en esa ubicacion de memoria.Sin embargo, debido a que diferentes CPU tienen diferentes conjuntos de instrucciones, las instrucciones escritas para un *tipo de CPU no se podían usar en una CPU que no compartiera el mismo conjunto de instrucciones*. - Esto significaba que los programas generalmente no eran portátiles (utilizables sin modificaciones importantes) a diferentes tipos de sistemas y tenían que escribirse de nuevo.-

# Lenguaje emsamblador 
Cada instruccion se identifica mediante una breve abreviatura(en lugar de un conjunto de bits) y se pueden utilizar nombre y otros numeros.
ejemplo : mov al, 061h

 Esto se hace mediante el uso de un programa llamado ensamblador . Los programas escritos en lenguajes ensambladores tienden a ser muy rápidos y el ensamblador todavía se usa hoy en día cuando la velocidad es crítica.
 Sin embargo, el montaje todavía tiene algunas desventajas. En primer lugar, los lenguajes ensambladores todavía requieren muchas instrucciones para realizar incluso tareas simples

 # Lenguajes de alto nivel
 Para abordar problemas de legibilidad y portabiliad, se desarrollaron nuevos lenguajes de progrmacion como C ,C++, JAVA, JavaScript.
 
 Esta expresion en emsamblador mov al, 061h y en instruccion de C/C++ a=97;

  los programas escritos en lenguajes de alto nivel deben traducirse a un formato que la computadora pueda comprender antes de poder ejecutarlos.

# Compilador
Es un programa que lee el codigo fuente y produce un programa ejecutable  independiente que luego se puede ejecutar.
*Una vez que su código se haya convertido en un ejecutable, no necesitará el compilador para ejecutar el programa.*


# Interprete 
Un programa que ejecuta directamente las instrucciones del codigo fuente sin necesidad de compilarlas primero en un ejecutable.
*pero son menos eficientes cuando ejecutan programas porque el proceso de interpretación debe realizarse cada vez que se ejecuta el programa.*

- Dato: java utiliza una combinacion de interprete y compilador

En tercer lugar, los programas se pueden compilar (o interpretar) para muchos sistemas diferentes y no es necesario cambiar el programa para que se ejecute en diferentes CPU (simplemente se vuelve a compilar para esa CPU).

Ejemplo este lenguaje se compila for x86, pero tambien si es necesario se puede compilar  en un x32 o un MIPS hardware.

Lenguaje de alto nivel -> compiler for x86 -> executable x86

# Portabilidad
La primera es que muchos sistemas operativos, como Microsoft Windows, contienen capacidades específicas de plataforma que puedes usar en tu código. Estos pueden hacer que sea mucho más fácil escribir un programa para un sistema operativo específico, pero a expensas de la portabilidad. En estos tutoriales, evitaremos cualquier código específico de la plataforma.

La segunda es que algunos compiladores también admiten extensiones específicas del compilador; si las usa, sus programas no podrán ser compilados por otros compiladores que no admitan las mismas extensiones sin modificaciones. Hablaremos más sobre esto más adelante, una vez que haya instalado un compilador.

------
#### C++
Considerado como un superconjunto de C. La fama de C++ se debe principalmente al hecho de que es un lenguaje orientado a objetos.


____
# Tiempo de ejecucion
Cuando el programa esta corriendo  y surgen errores que son manejados por el try/catch

# Tiempo de compilacion
Cuando se compila el programa, en el cual se pueden detectar todos los errores de sintaxis