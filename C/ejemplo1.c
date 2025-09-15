/* Ejemplos de uso de punteros en C */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Ejemplo 1: Puntero a variable
Este ejemplo muestra cómo declarar una variable entera, obtener su dirección y almacenarla en un puntero. Luego se imprime el valor de la variable y el valor al que apunta el puntero.
- int x = 5; // Se declara una variable entera y se inicializa en 5
- int *p = &x; // Se declara un puntero a int y se le asigna la dirección de x
- printf(...) // Se imprime el valor de x y el valor al que apunta p (que es x)
*/
void ejemplo1() {
    int y = 8;  //
    int *p = &y;
    printf("Ejemplo 1: y = %d, *p = %d\n", y, *p);
}

void ejemplo2() {
    int z = 50;
    int *p = &z;
    *p = 2;
    printf("Ejemplo 2: x = %d\n", z);
}

void ejemplo3() {
    char arr[5] = {'c', 'a', 'r', 'r', 'o'};
    char *p = arr;
    printf("Ejemplo 3: Primer elemento = %c\n", *p);
}
void ejemplo4() {
    int arr[3] = {10, 20, 30};
    int *p = arr;
    printf("Ejemplo 4: Array: ");
    for(int i = 0; i < 3; i++) {
        printf("%d ", *(p + i));
    }
    printf("\n");
}


int main() {
    ejemplo1(); 
    ejemplo2();
     ejemplo3(); 
    ejemplo4();
    return 0 ;
    

}