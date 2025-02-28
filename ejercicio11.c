// 11. Buscar en un Arreglo
#include <stdio.h>

int *buscarElemento(int *arr, int tamanio, int valor) {
    // Implementar búsqueda aquí
    int temp;
    for(int i = 0; i< tamanio; i++){
        if(*(arr + i) == valor)return (arr + i);
    }
    return NULL;
}

int main() {
    int array[] = {10, 20, 30, 40, 50};
    // Código para buscar un número y mostrar su dirección}
    int b;
    printf("Introduzca el valor que desea buscar:\n");
    scanf("%i", &b); 
    int *c = buscarElemento(array, 5, b);
    if(c != NULL){
        int *ap = &*buscarElemento(array, 5, b);
        printf("La direccion en memoria del valor ingresado, dentro del arreglo es: %p", c);
    }else{
        printf("El valor no se ha encontrado");
    }

    return 0;
}
