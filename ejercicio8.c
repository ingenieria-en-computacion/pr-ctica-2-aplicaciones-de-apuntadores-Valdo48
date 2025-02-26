// Intercambio de Valores
#include <stdio.h>

void intercambiar(int *a, int *b) {
    // Implementar intercambio aquí
    int c= *b;
    *b= *a;
    *a= c;

} 

int main() {
    int arr[] = {5, 10};
    // Código para llamar a la función y mostrar los valores intercambiados
    intercambiar(&arr[0], &arr[1]);
    printf("El arreglo intercambiado es: \n");
    for(int i=0; i<2; i++){
        printf("%d\n", arr[i]);
    }
    return 0;
}
