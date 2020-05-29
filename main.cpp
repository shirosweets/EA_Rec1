/*
**************************************************************
MATERIA : INFORMATICA
EXAMEN : Especificación de Algoritmos - Noviembre 2017
NOMBRES : 
MATRICULA : 
CARRERA : 
COMISION : 
**************************************************************
TABLA DE CALIFICACION:
--------------------------------------------------------------
/15 Principal (main) 
/15 Leer vector
/5 Mostrar vector
/15 Calcular suma frac
/15 Calcular rango
/15 Cantidad de numeros mayores que X y menores que Y
/15 Calcular Matriz
/05 Comentarios, semántica y presentación
--------------------------------------------------------------
/100 Total 
**************************************************************
Realice un programa en C++ con las siguientes características:
El programa debe leer de un archivo llamado "datos.txt" un vector de N números
reales positivos. Donde el valor N debe ser determinado durante la lectura del
archivo. El archivo contiene una única fila con números reales separados por
espacios. El final del archivo se reconoce por la presencia de un número
negativo. Por ejemplo, el archivo podría contener lo siguientes números:
Ejemplo del contenido del archivo datos.txt:
1.25 3.125 7.25 4.75 34.125 -1.0
El número -1.0 no pertenece al vector de datos sino que únicamente
indica el final del vector. El vector de datos correspondiente al
ejemplo del archivo anterior sería: 1.25 3.125 7.25 4.75 y 34.125
El tamaño máximo del vector esta indicado por la constante entera
MAX=50. La lectura del vector debe realizarse desde el programa
principal llamando a la función leer_vector cuyo prototipo es:
int leer_vector(double vector[MAX]);
Dicha función carga en el vector llamado "vector" los números del
archivo excepto el numero negativo y retorna un entero indicando la
cantidad de números en el vector. El programa debe verificar que la
cantidad de números no supere a MAX.
Luego de leer el archivo, el programa debe mostrar el vector en
pantalla llamando a la función
void mostrar_vector(double vector[MAX], int N);
A continuación, el programa debe calcular la suma de las partes fraccionarias
de los números (es decir sin tener en cuenta la parte entera) y el rango del
vector llamando dentro del main a las funciones cuyos prototipos son:
double calcular_suma_frac(double vector[MAX], int N);
double calcular_rango(double vector[MAX], int N);
por ejemplo, la suma fraccionaria de los números 1.23 y 3.2 es 0.23+0.2 = 0.43
y el rango es la diferencia entre el máximo numero del vector y el mínimo número
del vector.
Luego de retornar de la funciones calcular_suma_frac y calcular_rango
el programa debe imprimir por pantalla dichos valores según se
muestra en el ejemplo que está mas abajo. Dicha impresión por
pantalla debe realizarse en el main y no dentro de las funciones.
Posteriormente, dentro del main, el programa debe pedirle al usuario que
ingrese dos números reales X e Y (donde X<Y). Una vez ingresados los valores de
X e Y el programa debe llamar a la función cuyo prototipo es:
int cantidad_de_numeros_entre_x_e_y(double vector[MAX], int N, double X, double Y);
la cual calcula y retorna la cantidad de números del vector que son mayores que
X y menores que Y. En el main debe imprimir por pantalla dicha cantidad según
se muestra en el ejemplo de más abajo.
Por último el programa llama a la función cuyo prototipo es:
void calcular_matriz(double vector[MAX], int N, double matriz[MAX][MAX]);
la cual debe calcular los valores de la matriz (de dimensiones NxN) tal que el
elemento de la fila 'k' y columna 'n' sea igual al mayor valor entre el
elemento 'k' y el elemento 'n' del vector.
Posteriormente el programa principal debe imprimir la matriz siguiendo el
formato del ejemplo de ejecución del programa.
-------------------------------------------------------------------
Ejemplo de la ejecución del programa:
El vector original es:
1.25 3.125 7.25 4.75 34.125
La suma fraccionaria es: 1.5
El rango es: 32.875
Ingrese el valor de X: 3
Ingrese el valor de Y: 6
La cantidad de numeros entre X e Y es: 2
La matriz es:
1.2500 3.1250 7.2500 4.7500 34.1250
3.1250 3.1250 7.2500 4.7500 34.1250
7.2500 7.2500 7.2500 7.2500 34.1250
4.7500 4.7500 7.2500 4.7500 34.1250
34.1250 34.1250 34.1250 34.1250 34.1250
------------------------------------------------------------------- 
*/
