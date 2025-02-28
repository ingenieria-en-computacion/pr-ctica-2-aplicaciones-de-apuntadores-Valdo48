// 10. Ordenamiento con Apuntadores (Burbuja)
#include <stdio.h>


void ordenarBurbuja(int *arr, int tamanio) {
    // Implementar algoritmo de ordenamiento aquí
    int temp;
    for(int i =1; i< tamanio; i++){
        for(int j = 0; j< (tamanio-1); j++){
            if(*(arr + (j)) > *(arr + (j+1))){
                temp = *(arr + j);
                *(arr + (j)) = *(arr + (j+1)) ;
                *(arr + (j+1))= temp;
            }
        }
        
    }
}

int main() {
    int array[] = {34, 12, 56, 78, 23};
    // Código para ordenar y mostrar el arreglo
    int *ap = array;

    printf("Arreglo sin ordenar {");
    for(int i = 0; i< 5; i++){
        printf("%i,", *(array + i));
    }
    printf("},\n");

    ordenarBurbuja(array, 5);

    printf("Arreglo ordenado {");
    for(int i = 0; i< 5; i++){
        printf("%i,", *(array + i));
    }
    printf("}");

    return 0;
}
