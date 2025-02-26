// 7. Accediendo a la Memoria
#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    // Código para imprimir direcciones de memoria aquí
    for(int i=0; i<5; i++){
        printf("La direccion en memoria del elemento #%i de tu arreglo es: %p \n", i+1, &arr[i]);
    }
    return 0;
}
