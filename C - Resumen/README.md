# Lenguaje de programación C (Resumen)

## Índice

- [Inicio](#inicio)
    - [Directivas del preprocesador](#directivas-del-preprocesador)
    - [Caracteres especiales](#caracteres-especiales)
    - [Operadores](#operadores)
    - [Tipos de datos](#tipos-de-datos)
    - [Entrada y salida de datos](#entrada-y-salida-de-datos)
- [Condicionales](#condicionales)
    - [Sentencia if-else](#sentencia-if-else)
    - [Sentencia switch](#sentencia-switch)
    - [Ternario](#ternario)
- [Bucles](#bucles)
    - [While](#while)
    - [Do-while](#do-while)
    - [For](#for)
- [Arrays](#arrays)
    - [Unidimensionales (vectores)](#unidimensionales-vectores)
    - [Bidimensionales (matrices)](#bidimensionales-matrices)
- [Punteros](#punteros)
    - [Arrays unidimensionales (vectores)](#arrays-unidimensionales-vectores)
    - [Arrays bidimensionales (matrices)](#arrays-bidimensionales-matrices)
- [Estructuras](#estructuras)
- [Enumeraciones](#enumeraciones)
- [Funciones](#funciones)
    - [Paso por valor](#paso-por-valor)
    - [Paso por referencia](#paso-por-referencia)
- [Memoria dinámica](#memoria-dinámica)
    - [Malloc](#malloc)
    - [Calloc](#calloc)
    - [Realloc](#realloc)
- [Ficheros](#ficheros)

---

<b>Si te resulta de ayuda puedes invitarme a un café haciendo click en la siguiente imágen :)</b>

<a href="https://www.buymeacoffee.com/andr3kt" target="_blank"><img src="https://cdn.buymeacoffee.com/buttons/default-blue.png" alt="Buy Me A Coffee" height="41" width="174"></a>

---

# Inicio

## Directivas del preprocesador

Son comandos que se utilizan para proporcionar instrucciones al compilador antes de que comience la compilación del código. Estas directivas se escriben en el código fuente con el símbolo de almohadilla (#) como prefijo, y se procesan antes de que el compilador comience a trabajar en el código en sí.

Algunas de las directivas del preprocesador más comunes en C son:

- <b>#include</b>: se utiliza para incluir un archivo de cabecera en el código fuente. Los archivos de cabecera suelen contener declaraciones de funciones y definiciones de macros que se utilizan en el programa.

- <b>#define</b>: se utiliza para definir una macro en el código fuente. Las macros son símbolos que se expanden en una cadena de texto o en una expresión antes de que el código sea compilado.

- <b>#ifdef / #ifndef</b>: se utilizan para incluir o excluir secciones de código en función de si una macro está o no definida.

- <b>#if / #else / #endif</b>: se utilizan para incluir o excluir secciones de código en función de una expresión condicional.

- <b>#pragma</b>: se utiliza para proporcionar información adicional al compilador, como instrucciones de optimización o directivas específicas de la plataforma.

### Ejemplo

En este ejemplo vamos a ver las directivas más utilizadas en Programación I:

```c
#include <stdio.h>
#include "binarySearchTree.h"

#define MAX_NUMBER 100
#define LIM_INF 5
```

**[⬆ Volver a índice](#índice)**

---

## Caracteres especiales

Los caracteres especiales se representan mediante secuencias de escape que consisten en una barra invertida seguida de uno o varios caracteres. Estas secuencias de escape se utilizan para representar caracteres que son difíciles de escribir directamente en el código fuente, como las comillas dobles, las comillas simples, los saltos de línea y otros caracteres especiales.

Algunos de los caracteres especiales más comunes en C y sus secuencias de escape correspondientes son:

- <b>\\"</b>: Comillas dobles

- <b>\\'</b>: Comillas simples

- <b>\\\\</b>: Barra invertida

- <b>\n</b>: Salto de línea

- <b>\t</b>: Tabulación horizontal

- <b>\r</b>: Retorno de carro

- <b>\b</b>: Retroceso

- <b>\f</b>: Salto de página

También es posible utilizar secuencias de escape octales o hexadecimales para representar caracteres especiales con valores numéricos específicos.

Es importante tener en cuenta que, aunque estas secuencias de escape se utilizan en el código fuente para representar caracteres especiales, en tiempo de ejecución, estos caracteres especiales se manejan como cualquier otro carácter.

### Ejemplo

```c
printf("Ejemplo de salto de línea\n");
printf("Esto es una \t tabulación");
printf("Quiero añadir \"comillas\" al texto");
```

**[⬆ Volver a índice](#índice)**

---

## Operadores

Se utilizan para realizar operaciones matemáticas y lógicas sobre variables y expresiones. A continuación, se describen algunos de los operadores más comunes en C:

- <b>Operadores aritméticos</b>: estos operadores se utilizan para realizar operaciones matemáticas básicas, como suma, resta, multiplicación, división y módulo. Algunos ejemplos de operadores aritméticos en C son <b>+</b> (suma), <b>-</b> (resta), <b>*</b> (multiplicación), <b>/</b> (división) y <b>%</b> (módulo).

- <b>Operadores de asignación</b>: estos operadores se utilizan para asignar valores a variables. El operador de asignación básico en C es <b>=</b>, pero también hay operadores de asignación compuestos que combinan una operación aritmética con la asignación, como <b>+=</b> (suma y asignación) y <b>-=</b> (resta y asignación).

- <b>Operadores de comparación</b>: estos operadores se utilizan para comparar dos valores y producir un resultado verdadero o falso. Algunos ejemplos de operadores de comparación en C son <b>==</b> (igualdad), <b>!=</b> (desigualdad), <b><</b> (menor que), <b>></b> (mayor que), <b><=</b> (menor o igual que) y <b>>=</b> (mayor o igual que).

- <b>Operadores lógicos</b>: estos operadores se utilizan para combinar expresiones lógicas y producir un resultado verdadero o falso. Algunos ejemplos de operadores lógicos en C son <b>&&</b> (y lógico), <b>||</b> (o lógico) y <b>!</b> (negación lógica).

- <b>Operadores de incremento y decremento</b>: estos operadores se utilizan para aumentar o disminuir el valor de una variable en una unidad. Algunos ejemplos de operadores de incremento y decremento en C son <b>++</b> (incremento) y <b>--</b> (decremento).

- <b>Operadores de bits</b>: estos operadores se utilizan para realizar operaciones a nivel de bits en valores enteros. Algunos ejemplos de operadores de bits en C son <b>&</b> (y a nivel de bits), <b>|</b> (o a nivel de bits), <b>^</b> (xor a nivel de bits), <b><<</b> (desplazamiento a la izquierda) y <b>>></b> (desplazamiento a la derecha).

Estos son solo algunos de los operadores más comunes en C. Es importante tener en cuenta que los operadores tienen precedencia y asociatividad específicas, lo que puede afectar el resultado de una expresión si no se utilizan correctamente los paréntesis para indicar el orden de las operaciones.

### Ejemplo

```c
int valor1 = 20, valor2 = 5, resultado;

resultado = valor1 + valor2;
resultado = valor1 / valor2;
resultado += valor1;
resultado--;
```

**[⬆ Volver a índice](#índice)**

---

## Tipos de datos

Algunos de los tipos de datos más comunes en C son los siguientes:

- <b>int</b>: se utiliza para representar números enteros. El tamaño de int puede variar según la plataforma, pero suele tener un tamaño de 4 bytes. Los valores enteros pueden ser positivos, negativos o cero. Un valor típico de int en una plataforma de 32 bits es de -2,147,483,648 a 2,147,483,647.

- <b>float</b>: se utiliza para representar números de punto flotante de precisión simple. Los valores de punto flotante son números que pueden tener una parte fraccional y una parte entera, y se utilizan para representar números no enteros. Los valores de punto flotante se almacenan en 4 bytes y tienen una precisión limitada.

- <b>short</b>: es un tipo de datos que se utiliza para representar números enteros más pequeños que int. short suele tener un tamaño de 2 bytes. Un valor típico de short en una plataforma de 32 bits es de -32,768 a 32,767.

- <b>long</b>: es un tipo de datos que se utiliza para representar números enteros más grandes que int. long suele tener un tamaño de 4 bytes o 8 bytes, dependiendo de la plataforma. Un valor típico de long en una plataforma de 32 bits es de -2,147,483,648 a 2,147,483,647.

- <b>double</b>: se utiliza para representar números de punto flotante de doble precisión. Los valores de doble precisión son números de punto flotante que se almacenan en 8 bytes y tienen mayor precisión que los valores de precisión simple.

- <b>char</b>: se utiliza para representar caracteres individuales. Un char se almacena en un byte y puede representar cualquier carácter del conjunto de caracteres ASCII (o del conjunto de caracteres extendidos, dependiendo de la codificación utilizada).

- <b>char X[50]</b>: es un tipo de datos que representa una cadena de caracteres de longitud fija de 50 caracteres. Este tipo de datos se utiliza para representar cadenas de texto en C. Los elementos de una cadena se almacenan como valores char consecutivos en la memoria, y la cadena está terminada por un valor nulo (\0).

Es importante tener en cuenta que el tamaño de los tipos de datos puede variar según la plataforma y el compilador utilizado, por lo que siempre es una buena práctica comprobar el tamaño de los tipos de datos en la plataforma y el compilador específicos que se están utilizando.

**[⬆ Volver a índice](#índice)**

---

## Entrada y salida de datos

La entrada y salida de datos se realiza a través de las funciones scanf y printf, respectivamente.

La función scanf se utiliza para leer datos desde la entrada estándar (normalmente el teclado) y almacenarlos en variables. La sintaxis de scanf es la siguiente:

```c
scanf("formato", &variable);
```

Donde "formato" especifica el tipo de datos que se está leyendo y &variable es la dirección de memoria de la variable donde se almacenará el valor leído. Por ejemplo, para leer un número entero y almacenarlo en la variable x, se podría utilizar la siguiente línea de código:

```c
scanf("%d", &x);
```

La función printf se utiliza para imprimir datos en la salida estándar (normalmente la consola). La sintaxis de printf es la siguiente:

```c
printf("formato", variable);
```

Donde "formato" especifica el tipo de datos que se va a imprimir y variable es la variable que se va a imprimir. Por ejemplo, para imprimir el valor de la variable x en la consola, se podría utilizar la siguiente línea de código:

```c
printf("El valor de x es %d\n", x);
```

Es importante tener en cuenta que el formato de los datos de entrada y salida debe coincidir para evitar errores en tiempo de ejecución. También es importante tener en cuenta la seguridad de la entrada de datos y asegurarse de que los datos introducidos por el usuario no sobrepasen el tamaño de los buffers o la capacidad de los tipos de datos utilizados.

**[⬆ Volver a índice](#índice)**

---

# Condicionales

Los condicionales se utilizan en programación para tomar decisiones basadas en una o varias condiciones. Permiten a un programa ejecutar diferentes bloques de código dependiendo del valor de una variable o expresión booleana.

En C, los condicionales se implementan mediante las estructuras if-else, switch y ternarios. Estas estructuras permiten al programador evaluar una o varias condiciones y tomar una acción basada en el resultado.

**[⬆ Volver a índice](#índice)**

---

## Sentencia if-else

La sentencia <b>if</b> se utiliza para realizar una comprobación condicional. Su sintaxis básica es la siguiente:

```c
if (condición) {
    // código que se ejecutará si la condición es verdadera
}
```

La condición puede ser cualquier expresión que se pueda evaluar como verdadera o falsa, como una comparación entre variables, una llamada a una función que devuelva un valor booleano, etc. Si la condición es verdadera, se ejecutará el código dentro de las llaves <b>{}</b> que sigue a la condición.

Si se desea ejecutar un bloque de código diferente en caso de que la condición sea falsa, se puede utilizar la sentencia <b>if-else</b>. La sintaxis básica de <b>if-else</b> es la siguiente:

```c
if (condición) {
    // código que se ejecutará si la condición es verdadera
} else {
    // código que se ejecutará si la condición es falsa
}
```

Si la condición es verdadera, se ejecutará el código dentro del primer bloque de llaves. Si es falsa, se ejecutará el código dentro del segundo bloque de llaves.

En algunos casos, se puede necesitar comprobar varias condiciones diferentes. Para ello, se puede utilizar la sentencia <b>if-else if-else</b>. La sintaxis básica de <b>if-else if-else</b> es la siguiente:

```c
if (condición1) {
    // código que se ejecutará si la condición1 es verdadera
} else if (condición2) {
    // código que se ejecutará si la condición2 es verdadera
} else {
    // código que se ejecutará si todas las condiciones anteriores son falsas
}
```

En este caso, se evalúa la primera condición. Si es verdadera, se ejecuta el código dentro del primer bloque de llaves. Si es falsa, se evalúa la segunda condición. Si es verdadera, se ejecuta el código dentro del segundo bloque de llaves. Si todas las condiciones anteriores son falsas, se ejecuta el código dentro del último bloque de llaves.

**[⬆ Volver a índice](#índice)**

---

## Sentencia switch

La sentencia <b>switch</b> se utiliza para realizar una selección múltiple basada en el valor de una expresión. Su sintaxis básica es la siguiente:

```c
switch (expresión) {
    case valor1:
        // código que se ejecutará si expresión es igual a valor1
        break;

    case valor2:
        // código que se ejecutará si expresión es igual a valor2
        break;

    // más casos...

    default:
        // código que se ejecutará si expresión no coincide con ninguno de los valores anteriores
        break;
}
```

La expresión que se utiliza en <b>switch</b> puede ser cualquier valor que se pueda comparar con los valores de los diferentes casos. En cada caso se especifica un valor posible de la expresión, seguido del código que se ejecutará si la expresión coincide con ese valor.

La sentencia <b>switch</b> se utiliza en lugar de una serie de sentencias <b>if-else</b> anidadas. La ventaja es que <b>switch</b> suele ser más eficiente que <b>if-else</b> en términos de tiempo de ejecución, especialmente si hay muchos casos posibles. Además, <b>switch</b> suele ser más fácil de leer y escribir que una serie de sentencias <b>if-else</b>.

Sin embargo, la sentencia <b>switch</b> tiene algunas limitaciones. Por ejemplo, los valores de los casos deben ser constantes enteras o caracteres. Además, cada caso debe terminar con la sentencia break para evitar que se ejecuten otros casos accidentalmente.

En general, se recomienda utilizar la sentencia <b>switch</b> cuando se necesite seleccionar entre varios valores posibles de una expresión. Si solo se necesita comprobar una condición simple, como en el caso de un valor booleano, es más apropiado utilizar una sentencia <b>if-else</b>.

**[⬆ Volver a índice](#índice)**

---

## Ternario

El operador ternario es un operador condicional en C que se utiliza para asignar un valor a una variable en función de una condición. Su sintaxis básica es la siguiente:

```
variable = (condición) ? valor_si_condición_verdadera : valor_si_condición_falsa;
```

En esta expresión, <b>condición</b> es una expresión que se evalúa como verdadera o falsa, y <b>valor_si_condición_verdadera</b> y <b>valor_si_condición_falsa</b> son los valores que se asignarán a <b>variable</b> dependiendo del resultado de la condición.

Por ejemplo, si se quiere asignar el valor 1 a la variable <b>resultado</b> si <b>a</b> es mayor que <b>b</b>, y el valor 0 en caso contrario, se puede utilizar el operador ternario de la siguiente manera:

```c
int resultado = (a > b) ? 1 : 0;
```

También se puede utilizar el operador ternario dentro de una sentencia <b>printf()</b> para imprimir diferentes valores dependiendo de una condición. Por ejemplo:

```c
printf("El valor es %s\n", (a > b) ? "mayor" : "menor o igual");
```

En este caso, se imprimirá "mayor" si <b>a</b> es mayor que <b>b</b>, y "menor o igual" en caso contrario.

**[⬆ Volver a índice](#índice)**

---

# Bucles

Los bucles se utilizan en programación para repetir una o varias acciones un número determinado de veces. Permiten al programador ejecutar una sección de código varias veces, lo que hace posible realizar tareas repetitivas de manera más eficiente y con menos código.

En C, existen tres tipos de bucles: while, do-while y for. Cada uno de estos bucles tiene su propia sintaxis y se utiliza en diferentes situaciones dependiendo de las necesidades del programa.

**[⬆ Volver a índice](#índice)**

---

## While

El bucle <b>while</b> es una estructura de control de flujo en C que permite repetir un bloque de código mientras se cumpla una condición. La sintaxis básica del bucle <b>while</b> es la siguiente:

```c
while (condición) {
    // Código que se ejecutará mientras se cumpla la condición
}
```
En esta estructura, <b>condición</b> es una expresión que se evalúa como verdadera o falsa. Mientras <b>condición</b> sea verdadera, el bloque de código dentro del bucle se repetirá una y otra vez. En cada iteración del bucle, se evaluará la condición para decidir si se sigue ejecutando el código dentro del bucle o si se sale del mismo.

Por ejemplo, el siguiente bucle <b>while</b> imprime los números del 1 al 10:

```c
int i = 0;
while (i < 10) {
    printf("%d\n", i);
    i++;
}
```

En este caso, la variable <b>i</b> se inicializa en 1, y se imprime el valor de <b>i</b> mientras sea menor o igual a 10. Después de imprimir el valor, se incrementa <b>i</b> en una unidad. Este proceso se repite hasta que <b>i</b> es mayor que 10, momento en el que se sale del bucle.

Es importante tener en cuenta que, si la condición no se cumple nunca, el bucle <b>while</b> se convertirá en un bucle infinito, lo que puede hacer que el programa se bloquee o que consuma todos los recursos del sistema. Por lo tanto, es importante asegurarse de que la condición se evalúe como falsa en algún momento para evitar bucles infinitos.

**[⬆ Volver a índice](#índice)**

---

## Do-while

El bucle <b>do-while</b> es una estructura de control de flujo en C que permite repetir un bloque de código mientras se cumpla una condición. La principal diferencia con el bucle <b>while</b> es que el bucle <b>do-while</b> siempre ejecuta el código dentro del bloque al menos una vez, independientemente de si la condición es verdadera o falsa. La sintaxis básica del bucle <b>do-while</b> es la siguiente:

```c
do {
    // Código que se ejecutará al menos una vez
} while (condición);
```

En esta estructura, <b>condición</b> es una expresión que se evalúa como verdadera o falsa. El bloque de código dentro del bucle se ejecutará al menos una vez, y después se evaluará la condición. Si la condición es verdadera, se repetirá el bloque de código. Si la condición es falsa, se saldrá del bucle.

Por ejemplo, el siguiente bucle <b>do-while</b> imprime los números del 1 al 10:

```c
int i = 0;
do {
    printf("%d\n", i);
    i++;
} while (i < 10);
```

En este caso, la variable <b>i</b> se inicializa en 1, y se imprime el valor de <b>i</b>. Después de imprimir el valor, se incrementa <b>i</b> en una unidad. Este proceso se repite hasta que <b>i</b> es mayor que 10, momento en el que se sale del bucle.

Es importante tener en cuenta que, al contrario que con el bucle <b>while</b>, en el bucle <b>do-while</b> el bloque de código se ejecuta al menos una vez, independientemente de si la condición se cumple o no.

**[⬆ Volver a índice](#índice)**

---

## For

El bucle <b>for</b> es una estructura de control de flujo en C que permite repetir un bloque de código un número determinado de veces. La sintaxis básica del bucle for es la siguiente:

```c
for (inicialización; condición; actualización) {
    // Código que se ejecutará mientras la condición sea verdadera
}
```

En esta estructura, <b>inicialización</b> es una expresión que se ejecuta antes de comenzar el bucle, y que normalmente se utiliza para inicializar una variable que se usará en el bucle. <b>condición</b> es una expresión que se evalúa en cada iteración del bucle, y que determina si se sigue ejecutando el código dentro del bucle o si se sale de él. <b>actualización</b> es una expresión que se ejecuta al final de cada iteración del bucle, y que normalmente se utiliza para actualizar la variable inicializada en la <b>inicialización</b>.

Por ejemplo, el siguiente bucle <b>for</b> imprime los números del 1 al 10:

```c
for (int i = 0; i < 10; i++) {
    printf("%d\n", i);
}
```

En este caso, la variable <b>i</b> se inicializa en 1, y se evalúa la condición i < 10. Mientras la condición sea verdadera, se imprime el valor de <b>i</b> y se actualiza su valor en una unidad. Este proceso se repite hasta que <b>i</b> es mayor que 10, momento en el que se sale del bucle.

El bucle <b>for</b> es una estructura muy útil para realizar operaciones repetitivas un número determinado de veces, ya que su sintaxis es muy clara y su funcionamiento es predecible. Además, permite controlar con precisión el número de iteraciones que se ejecutan en el bucle.

**[⬆ Volver a índice](#índice)**

---

# Arrays

Los arrays o arreglos son estructuras de datos en programación que permiten almacenar una colección de elementos del mismo tipo en una única variable. Se utilizan principalmente para almacenar conjuntos de datos de forma organizada y estructurada, lo que facilita su manipulación y procesamiento.

Entre los usos más comunes de los arrays en programación se encuentran:

- <b>Almacenamiento de datos</b>: los arrays son ideales para almacenar grandes cantidades de datos de un tipo específico, como una lista de números, caracteres o cadenas de texto.

- <b>Acceso a elementos</b>: los elementos de un array se almacenan en posiciones consecutivas de memoria, lo que hace posible acceder a ellos utilizando un índice numérico. Esto facilita la búsqueda y el acceso a elementos específicos dentro del array.

- <b>Manipulación de datos</b>: los arrays permiten la manipulación de sus elementos mediante la utilización de bucles y operaciones aritméticas, lo que hace posible realizar tareas complejas en un número reducido de líneas de código.

- <b>Implementación de estructuras de datos</b>: muchos tipos de estructuras de datos, como las pilas, colas y listas enlazadas, se pueden implementar utilizando arrays.

**[⬆ Volver a índice](#índice)**

---

## Unidimensionales (vectores)

Los arrays unidimensionales son una colección de <b>elementos del mismo tipo</b>, todos ellos almacenados en <b>posiciones de memoria contiguas</b>. Para declarar un array unidimensional en C se utiliza la siguiente sintaxis:

```c
tipo nombre_array[tamaño];
```

Donde <b>tipo</b> es el tipo de dato de los elementos del array, <b>nombre_array</b> es el nombre que se le da al array y <b>tamaño</b> es la cantidad de elementos que contendrá el array. Por ejemplo, la siguiente declaración crea un array de 5 enteros:

```c
int numeros[5];
```

Para acceder a los elementos del array, se utiliza la sintaxis <b>nombre_array[posición]</b>, donde posición es el índice del elemento que se desea acceder. Los índices de los elementos del array <b>comienzan en 0 y terminan en tamaño - 1</b>. Por ejemplo, para acceder al <b>primer elemento del array numeros</b>, se utiliza la siguiente sintaxis:

```c
int primer_numero = numeros[0];
```

También es posible <b>inicializar</b> un array al declararlo, por ejemplo:

```c
int numeros[5] = {0, 1, 2, 3, 4};
```

En este caso, se está creando un array de 5 enteros y se le está asignando los valores del 1 al 5 a cada uno de los elementos. Si no se especifica un valor para algún elemento, se le asignará el valor 0.

Para <b>recorrer</b> los arrays se utilizan bucles:

```c
for (int i = 0; i < 5; i++) {
    printf("Introduce el número %d: ", i + 1);
    scanf("%d", &numeros[i]);
}
```

```c
printf("Los números introducidos son: ");
for (int i = 0; i < 5; i++) {
    printf("%d ", numeros[i]);
}
```

**[⬆ Volver a índice](#índice)**

---

## Bidimensionales (matrices)

Un array bidimensional, también conocido como matriz, es una estructura de datos que se utiliza para almacenar una colección de elementos relacionados en una <b>tabla de dos dimensiones</b>.

Podemos declarar una matriz especificando su tamaño en dos dimensiones, utilizando la siguiente sintaxis:

```c
tipo nombre_matriz[num_filas][num_columnas];
```

Donde <b>tipo</b> es el tipo de dato de los elementos de la matriz, <b>nombre_matriz</b> es el nombre que queremos darle a la matriz, <b>num_filas</b> es el número de filas y <b>num_columnas</b> es el número de columnas.

Por ejemplo, para declarar una matriz de enteros de 3 filas y 4 columnas, podemos hacer lo siguiente:

```c
int matriz[3][4];
```

Para acceder a un elemento específico de la matriz, podemos <b>utilizar dos índices</b>: uno para la fila y otro para la columna. Por ejemplo, para acceder al elemento en la segunda fila y tercera columna de la matriz anterior, podemos hacer lo siguiente:

```c
matriz[1][2] = 10;
```

También podemos recorrer una matriz utilizando <b>bucles anidados</b>, como en el siguiente ejemplo que muestra una matriz de 3x3 en la pantalla:

```c
int matriz[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};

for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        printf("%d ", matriz[i][j]);
    }
    printf("\n");
}
```

En este ejemplo, utilizamos dos bucles <b>for</b> anidados para recorrer todas las filas y columnas de la matriz. En cada iteración del bucle, imprimimos el valor correspondiente de la matriz en la pantalla.

Es importante tener en cuenta que en C, las matrices se almacenan en memoria como bloques de memoria contiguos, por lo que los elementos de una matriz bidimensional <b>se almacenan de forma consecutiva en la memoria</b>.

**[⬆ Volver a índice](#índice)**

---

# Punteros

Un puntero es una variable que almacena la dirección de memoria de otra variable. En otras palabras, un puntero "apunta" a una ubicación específica en la memoria del ordenador.

Para declarar un puntero en C, utilizamos el operador asterisco <b>*</b>. Por ejemplo, la siguiente línea declara un puntero a un entero:

```c
int *p;
```

Para asignar una dirección de memoria a un puntero, utilizamos el operador de referencia <b>&</b>. Por ejemplo, la siguiente línea asigna la dirección de memoria de la variable <b>x</b> al puntero <b>p</b>:

```c
int x = 5;
int *p = &x;
```

Para acceder al valor de la variable apuntada por un puntero, utilizamos el operador de desreferencia <b>*</b>. Por ejemplo, la siguiente línea imprime el valor de la variable <b>x</b> a través del puntero <b>p</b>:

```c
printf("%d", *p);
```

En C, los punteros son muy útiles para trabajar con arrays y estructuras de datos. También son necesarios para trabajar con la gestión dinámica de memoria.

**[⬆ Volver a índice](#índice)**

---

## Arrays unidimensionales (vectores)

Los punteros y los arrays unidimensionales están estrechamente relacionados en C, ya que los arrays en C son esencialmente punteros que apuntan al primer elemento del array. Los punteros se utilizan para almacenar y manipular direcciones de memoria, mientras que los arrays se utilizan para almacenar un conjunto de elementos del mismo tipo.

En el contexto de arrays unidimensionales, un puntero puede apuntar a cualquier elemento en el array. La sintaxis para declarar un puntero a un array es la siguiente:

```c
int arr[5] = {1, 2, 3, 4, 5};
int *ptr;
ptr = arr;   // el puntero apunta al primer elemento del array
```

En este ejemplo, <b>arr</b> es un array de 5 elementos de tipo <b>int</b>, y <b>ptr</b> es un puntero a un <b>int</b>. Después de asignar <b>arr</b> a <b>ptr</b>, <b>ptr</b> apuntará al primer elemento del array <b>arr</b>.

Para acceder a los elementos del array mediante el puntero, podemos usar la <b>notación de índice o la aritmética de punteros</b>. La <b>notación de índice</b> se parece a la siguiente:

```c
int x = ptr[2];  // accede al tercer elemento de arr a través del puntero
```

La <b>aritmética de punteros</b> implica sumar o restar un número entero al puntero para desplazarse a un elemento diferente del array. Por ejemplo:

```c
int x = *(ptr + 2);  // accede al tercer elemento de arr a través del puntero
```

En ambos casos, el resultado es el mismo: x contendrá el valor del tercer elemento del array arr.

**[⬆ Volver a índice](#índice)**

---

## Arrays bidimensionales (matrices)

Para trabajar con punteros y matrices (arrays bidimensionales) en C, podemos declarar un puntero que apunte a un array bidimensional.

Por ejemplo, si queremos crear una matriz de tamaño 3x3, podemos declarar un puntero que apunte a un <b>array de 3 punteros</b>, cada uno de los cuales apunta a un array de 3 elementos:

```c
int (*puntero_matriz)[3];
int matriz[3][3];
puntero_matriz = matriz;
```

En este caso, <b>puntero_matriz</b> es un puntero que apunta a un <b>array de 3 elementos</b>, donde cada elemento es un puntero que apunta a un array de 3 enteros. La asignación <b>puntero_matriz = matriz</b> hace que el puntero <b>puntero_matriz</b> apunte al inicio de <b>matriz</b>.

Para acceder a los elementos de la matriz utilizando este puntero, podemos usar la <b>notación de índice</b> como lo haríamos normalmente con una matriz. Por ejemplo, para acceder al elemento en la fila 1 y la columna 2 de la matriz, podemos usar:

```c
int elemento = puntero_matriz[1][2];
```

También podemos <b>recorrer</b> los elementos de la matriz utilizando un <b>bucle anidado</b> con dos índices, como lo haríamos normalmente con una matriz. Por ejemplo:

```c
for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        printf("%d ", puntero_matriz[i][j]);
    }
    printf("\n");
}
```

También podemos <b>recorrer</b> los elementos de la matriz utilizando un bucle anidado y la </b>notación de puntero</b>. Veamos el siguiente ejemplo:

```c
for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
        printf("%d ", *(puntero_matriz + i*3 + j));
    }
    printf("\n");
}
```

Utilizamos la <b>notación de puntero</b> para acceder a los elementos de la matriz en el bucle anidado. En cada iteración, <b>calculamos el índice</b> del elemento en la matriz utilizando la fórmula <b>i\*3 + j</b>, ya que la matriz tiene 3 columnas. Finalmente, imprimimos el valor del elemento utilizando la notación de puntero <b>\*(puntero_matriz + i\*3 + j)</b>.

**[⬆ Volver a índice](#índice)**

---

# Estructuras

Una estructura es un tipo de dato que permite al programador combinar <b>diferentes tipos de datos relacionados en una sola unidad</b>. Las estructuras se definen utilizando la palabra clave <b>struct</b> seguida del nombre de la estructura y la lista de variables que conforman la estructura.

La sintaxis general para definir una estructura en C es la siguiente:

```c
struct NombreDeLaEstructura {
    tipoDato1 variable1;
    tipoDato2 variable2;
    // ...
    tipoDatoN variableN;
};
```

Por ejemplo, para definir una estructura <b>Persona</b> que contenga el <b>nombre, la edad y la altura</b> de una persona, se puede hacer lo siguiente:

```c
struct Persona {
    char nombre[50];
    int edad;
    float altura;
};
```

Una vez que se ha definido la estructura, se pueden crear variables de ese tipo y acceder a sus campos utilizando el operador <b>.</b>, por ejemplo:

```c
// Crear una variable de tipo Persona
struct Persona p;

// Asignar valores a los campos de la estructura
printf("Ingresa el nombre: ");
scanf("%s", p.nombre);
printf("Ingresa la edad: ");
scanf("%d", &p.edad);
printf("Ingresa la altura: ");
scanf("%f", &p.altura);

// Acceder a los campos de la estructura
printf("Nombre: %s\n", p.nombre);
printf("Edad: %d\n", p.edad);
printf("Altura: %.2f\n", p.altura);
```

También es posible utilizar <b>punteros</b> para acceder a los campos de una estructura. Para ello, se utiliza el operador <b>-></b>, por ejemplo:

```c
// Crear un puntero a una variable de tipo Persona
struct Persona *ptrPersona;

// Asignar la dirección de memoria de una variable de tipo Persona
// al puntero
ptrPersona = &p;

// Acceder a los campos de la estructura utilizando el puntero
printf("Nombre: %s\n", ptrPersona->nombre);
printf("Edad: %d\n", ptrPersona->edad);
printf("Altura: %.2f\n", ptrPersona->altura);
```

Las estructuras son útiles para agrupar datos relacionados en una sola unidad y facilitar el acceso a los mismos. Por ejemplo, se pueden utilizar estructuras para representar una fecha, una coordenada en un plano, un producto en una tienda en línea, entre otros.

**[⬆ Volver a índice](#índice)**

---

# Enumeraciones

Las enumeraciones son un tipo de dato que permite definir un conjunto de constantes con nombres simbólicos, lo que hace que el código sea más fácil de leer y entender. Una enumeración se define utilizando la palabra clave <b>enum</b> seguida del nombre de la enumeración y la lista de constantes separadas por comas.

Por ejemplo, la siguiente enumeración define los días de la semana:

```c
enum DiasSemana {
    LUNES, MARTES, MIERCOLES, JUEVES, VIERNES, SABADO, DOMINGO
};
```

Una vez definida la enumeración, se puede declarar una variable del tipo de la enumeración y asignarle uno de los valores de la lista. Por ejemplo:

```c
enum DiasSemana hoy;
hoy = LUNES;
```

También se pueden asignar <b>valores enteros</b> a las constantes de la enumeración, por ejemplo:

```c
enum Numeros {
    CERO = 0,
    UNO = 1,
    DOS = 2,
    TRES = 3
};
```

En este ejemplo, se asignan valores enteros a las constantes de la enumeración, empezando por 0 para la primera constante. Luego, se puede declarar una variable del tipo de la enumeración y asignarle uno de los valores de la lista:

```c
enum Numeros num;
num = DOS;
```

Las enumeraciones son útiles cuando se quiere definir un conjunto de constantes que están relacionadas entre sí y que se usan en varias partes del código. Al utilizar nombres simbólicos en lugar de valores numéricos, el código se hace más fácil de leer y entender.

**[⬆ Volver a índice](#índice)**

---

# Funciones

Las funciones se utilizan en programación para encapsular un conjunto de operaciones y/o cálculos relacionados en una unidad de código que puede ser llamada desde otras partes del programa. Las funciones permiten modularizar el código y hacerlo más legible, mantenible y reusable.

Cuando se tiene una tarea específica que se repite varias veces en el programa, en lugar de escribir el mismo código varias veces, se puede encapsular ese código en una función y llamarla cada vez que se necesite realizar esa tarea específica. Además, las funciones pueden recibir argumentos de entrada y devolver valores de salida, lo que permite una mayor flexibilidad en el uso de las mismas.

**[⬆ Volver a índice](#índice)**

---

## Paso por valor

El paso por valor se refiere a la técnica utilizada para pasar argumentos a una función. Cuando se pasan argumentos por valor, se crea una copia de los valores de las variables pasadas, lo que significa que cualquier cambio realizado dentro de la función no afectará a las variables originales.

Por ejemplo, supongamos que tenemos una función que toma un argumento entero por valor y lo duplica. El código puede verse así:

```c
int duplicar(int x) {
    return x * 2;
}
```

Si llamamos a la función con el valor 5:

```c
int resultado = duplicar(5);
```

El valor de resultado será 10, pero el valor de la variable original 5 no será modificado.

Esto puede ser útil en algunas situaciones, ya que protege las variables originales de ser modificadas accidentalmente dentro de una función. Sin embargo, también significa que si queremos modificar una variable, tendremos que pasarla como un puntero o una referencia.

**[⬆ Volver a índice](#índice)**

---

## Paso por referencia

El paso por referencia permite a una función acceder y modificar directamente el valor de una variable definida fuera de la función. Para hacer esto, se utiliza un puntero, que es una variable que contiene la dirección de memoria de otra variable.

Para definir una función que recibe un parámetro por referencia, se debe utilizar un puntero como tipo de dato del parámetro. El puntero se utiliza para almacenar la dirección de memoria de la variable que se desea pasar como referencia.

La sintaxis de la definición de una función que recibe un parámetro por referencia es la siguiente:

```c
void funcion(int *ptr){
    *ptr = *ptr + 1;
}
```

En este ejemplo, la función <b>funcion</b> recibe un puntero <b>ptr</b> como parámetro. El operador <b>*</b> se utiliza para acceder al valor de la variable apuntada por el puntero. En este caso, la función incrementa el valor de la variable que se pasa por referencia.

Para llamar a la función <b>funcion</b> y pasarle una variable por referencia, se debe utilizar el operador <b>&</b> para obtener la dirección de memoria de la variable:

```c
int a = 5;
funcion(&a);
```

En este ejemplo, se define una variable <b>a</b> con valor 5. La función <b>funcion</b> se llama con <b>&a</b> como argumento, lo que le pasa la dirección de memoria de la variable <b>a</b>. Dentro de la función, el puntero <b>ptr</b> contiene la dirección de memoria de <b>a</b>, y el operador <b>*</b> se utiliza para acceder al valor de <b>a</b>.

Al finalizar la ejecución de la función, el valor de la variable <b>a</b> habrá sido incrementado en 1. Esto ocurre porque la función recibe la dirección de memoria de la variable <b>a</b> y es capaz de modificar su valor directamente.

**[⬆ Volver a índice](#índice)**

---

# Memoria dinámica

La memoria dinámica se refiere a la asignación y liberación de memoria en tiempo de ejecución. A diferencia de la memoria estática, que se asigna en tiempo de compilación y no se puede cambiar en tiempo de ejecución, la memoria dinámica se asigna utilizando funciones de biblioteca como <b>malloc(), calloc() y realloc()</b>.

- La función <b>malloc()</b> se utiliza para asignar un bloque de memoria de tamaño específico en bytes. La función devuelve un puntero a la dirección base del bloque de memoria asignado. Si <b>malloc()</b> no puede asignar la memoria solicitada, devuelve <b>NULL</b>.

- La función <b>calloc()</b> también se utiliza para asignar bloques de memoria, pero se utiliza para inicializar el bloque de memoria a cero. Esta función toma dos argumentos: el número de elementos que se desean asignar y el tamaño en bytes de cada elemento. <b>calloc()</b> devuelve un puntero al primer byte del bloque de memoria asignado. Al igual que <b>malloc()</b>, si no se puede asignar la memoria solicitada, <b>calloc()</b> devuelve <b>NULL</b>.

- La función <b>realloc()</b> se utiliza para cambiar el tamaño de un bloque de memoria previamente asignado. La función toma dos argumentos: un puntero al bloque de memoria previamente asignado y el nuevo tamaño en bytes. Si el nuevo tamaño es menor que el tamaño anterior, se liberará la memoria restante. Si el nuevo tamaño es mayor que el tamaño anterior, se asignará un nuevo bloque de memoria y se copiarán los datos del bloque anterior al nuevo. La función devuelve un puntero al nuevo bloque de memoria asignado. Si no se puede asignar la memoria solicitada, devuelve <b>NULL</b>.

Es <b>importante</b> tener en cuenta que la memoria asignada utilizando estas funciones debe liberarse utilizando la función <b>free()</b> una vez que ya no se necesite. Si no se libera la memoria, puede causar una fuga de memoria y ralentizar el programa.

**[⬆ Volver a índice](#índice)**

---

## Malloc

<b>malloc</b> es una función de C que se utiliza para asignar memoria dinámicamente. En otras palabras, puedes utilizar malloc para solicitar al sistema operativo un bloque de memoria de un tamaño específico, y la función devolverá un puntero a la memoria asignada.

La sintaxis de <b>malloc</b> es la siguiente:

```c
puntero = (tipo*)malloc(numero_de_bytes);
```

Donde <b>puntero</b> es un puntero del tipo que se desea asignar, <b>tipo</b> es el tipo de dato que se desea almacenar y <b>numero_de_bytes</b> es la cantidad de memoria que se desea asignar, en bytes.

Por ejemplo, para asignar un bloque de memoria de 100 bytes, para ser utilizados como un arreglo de 25 enteros, la sintaxis sería:

```c
int *mi_arreglo;
mi_arreglo = (int*)malloc(25 * sizeof(int));
```

Aquí, estamos asignando espacio para un arreglo de <b>25 enteros</b>, lo que requiere <b>25 \* 4 = 100 bytes de memoria</b> (ya que un entero ocupa 4 bytes en la mayoría de las arquitecturas). El resultado es que <b>mi_arreglo</b> apuntará al primer elemento del arreglo de enteros.

Es importante tener en cuenta que <b>malloc</b> devuelve un puntero a memoria sin inicializar. Es decir, el contenido de la memoria que se asigna puede ser cualquier cosa, y es responsabilidad del programador inicializarlo antes de utilizarlo. En otras palabras, el contenido de la memoria asignada no se garantiza que sea cero (o cualquier otro valor) a menos que el programador lo inicialice explícitamente.

Por último, es importante recordar que la memoria asignada con <b>malloc</b> debe ser liberada cuando ya no se necesita para evitar fugas de memoria. Esto se hace con la función <b>free</b>. Por ejemplo, para liberar el arreglo <b>mi_arreglo</b>, se utiliza:

```c
free(mi_arreglo);
```

**[⬆ Volver a índice](#índice)**

---

## Calloc

<b>calloc</b> es una función en C que se utiliza para asignar memoria dinámicamente, al igual que <b>malloc</b>. La principal diferencia entre <b>calloc</b> y <b>malloc</b> es que <b>calloc</b> inicializa la memoria asignada a cero, mientras que <b>malloc</b> no lo hace.

La sintaxis de <b>calloc</b> es la siguiente:

```c
ptr = (tipo_dato*)calloc(n, size_t);
```

Donde <b>n</b> es el número de elementos que se desean reservar y <b>size_t</b> es el tamaño de cada elemento. El resultado de la función <b>calloc</b> es un puntero al primer byte de la memoria asignada.

Ejemplo de cómo usar <b>calloc</b> para asignar un bloque de memoria de tamaño <b>n</b> y tipo <b>int</b>:

```c
int *ptr;
int n = 10;
ptr = (int*)calloc(n, sizeof(int));
```

Este código reserva un bloque de memoria que puede almacenar <b>10 enteros</b>. El puntero <b>ptr</b> apunta al primer elemento del bloque de memoria.

Es importante tener en cuenta que <b>calloc</b> devuelve un puntero a un bloque de memoria asignado, o <b>NULL</b> si la asignación de memoria falla. Por lo tanto, es necesario verificar si la asignación fue exitosa antes de utilizar el puntero devuelto.

**[⬆ Volver a índice](#índice)**

---

## Realloc

<b>realloc</b> se utiliza para cambiar el tamaño de un bloque de memoria que ha sido previamente asignado con <b>malloc, calloc o realloc</b>. Esta función se utiliza comúnmente en programas que manejan grandes cantidades de datos y necesitan ajustar la cantidad de memoria reservada para esos datos en tiempo de ejecución.

La sintaxis básica de la función <b>realloc</b> es la siguiente:

```c
ptr = (cast-type*)realloc(ptr, new_size);
```

Donde <b>ptr</b> es el puntero al bloque de memoria que se desea cambiar, <b>new_size</b> es el nuevo tamaño que se desea asignar al bloque de memoria, y <b>cast-type</b> es el tipo de datos al que se va a convertir el puntero.

La función <b>realloc</b> devuelve un puntero al bloque de memoria recién asignado. Si la asignación falla, devuelve <b>NULL</b>.

Es importante tener en cuenta que el puntero <b>ptr</b> debe haber sido previamente asignado utilizando una de las funciones de asignación de memoria antes mencionadas <b>(malloc, calloc o realloc)</b>.

Un ejemplo de uso de la función <b>realloc</b> sería el siguiente:

```c
int* ptr = (int*)malloc(5 * sizeof(int));  // Reserva memoria para un bloque de 5 enteros
ptr = (int*)realloc(ptr, 10 * sizeof(int));  // Cambia el tamaño del bloque a 10 enteros
```

En este ejemplo, se reserva memoria para un bloque de <b>5 enteros</b> utilizando la función <b>malloc</b>, y luego se utiliza la función <b>realloc</b> para cambiar el tamaño del bloque a <b>10 enteros</b>.

Es importante tener en cuenta que al cambiar el tamaño de un bloque de memoria utilizando <b>realloc</b>, el contenido del bloque original se mantiene siempre que el nuevo tamaño sea mayor o igual al tamaño original. Si el nuevo tamaño es menor que el tamaño original, el contenido del bloque original se trunca y se pierde la porción restante del bloque.

**[⬆ Volver a índice](#índice)**

---

# Ficheros

Para abrir un fichero, utilizamos la función <b>fopen()</b>:

```c
FILE *fp;
fp = fopen("archivo.txt", "r");
```

Este código abre el archivo <b>archivo.txt</b> en modo <b>lectura</b>. La función <b>fopen()</b> devuelve un puntero a la estructura <b>FILE</b> que se utiliza en las operaciones de <b>lectura/escritura</b>.

Si queremos <b>escribir</b> en un fichero, tendremos que habrirlo en formato <b>escritura</b> con la función <b>fopen()</b>:

```c
FILE *fp;
fp = fopen("archivo.txt", "w");
fprintf(fp, "Hola, mundo!\n");
```

Este código abre el archivo <b>archivo.txt</b> en modo escritura, y escribe la cadena <b>Hola, mundo!</b> en el archivo utilizando la función <b>fprintf()</b>.

Una de las opciones para <b>leer</b> un fichero es utilizar la función <b>fgets()</b>:

```c
FILE *fp;
char buffer[255];
fp = fopen("archivo.txt", "r");
fgets(buffer, 255, fp);
```

Este código abre el archivo <b>archivo.txt</b> en modo <b>lectura</b>, y lee la primera línea del archivo utilizando la función <b>fgets()</b>. El contenido se guarda en el búfer <b>buffer</b>.

Siempre que se ha completado el proceso que se haya realizado con un fichero tenemos que <b>cerrarlo</b> utilizando la función <b>fclose()</b>:

```c
FILE *fp;
fp = fopen("archivo.txt", "r");
// Hacer operaciones de lectura/escritura
fclose(fp);
```

Este código cierra el archivo <b>archivo.txt</b> utilizando la función <b>fclose()</b>.

Veamos un ejemplo completo a continuación de un fichero <b>tabulado</b>:

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;

    fp = fopen("datos.txt", "w");
    if (fp == NULL) {
        printf("Error al abrir el archivo\n");
        exit(1);
    }

    fprintf(fp, "Nombre\tEdad\tAltura\n");
    fprintf(fp, "Juan\t25\t1.75\n");
    fprintf(fp, "María\t32\t1.65\n");
    fclose(fp);

    fp = fopen("datos.txt", "r");
    if (fp == NULL) {
        printf("Error al abrir el archivo\n");
        exit(1);
    }

    char nombre[50];
    int edad;
    float altura;

    printf("Nombre\tEdad\tAltura\n");
    while (fscanf(fp, "%s%d%f", nombre, &edad, &altura) != EOF) {
        printf("%s\t%d\t%.2f\n", nombre, edad, altura);
    }

    fclose(fp);

    return 0;
}
```

Este ejemplo muestra cómo <b>escribir y leer datos tabulados</b> desde/hacia un archivo. La función <b>fprintf()</b> se utiliza para escribir los datos en el archivo, y la función <b>fscanf(</b> se utiliza para leer los datos desde el archivo.

**[⬆ Volver a índice](#índice)**
