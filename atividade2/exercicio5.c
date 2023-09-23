#include <stdio.h>

/* Multiplicar elementos de dois arrays. Escreva uma função que recebe dois arrays de números inteiros com o mesmo tam e,
retorna um novo array com os elementos resultantes da multiplicação dos elementos dos dois arrays.

Exemplo: multiplica_array([5, 7, 9, 6], [5, 7, 9,6])
Saída: [25, 49, 81, 36] 
*/

void multiplica_array(int array1[], int array2[], int resultado[], int tam) {
    for (int i = 0; i < tam; i++) {
        resultado[i] = array1[i] * array2[i];
    }
}

void imprimir_array(int array[], int tam) {
    printf("[");
    for (int i = 0; i < tam; i++) {
        printf("%d", array[i]);
        if (i < tam - 1) {
            printf(", ");
        }
    }
    printf("]\n");
}

int main() {
    int array1[] = {1, 3, 6, 7};
    int array2[] = {1, 3, 6, 7};
    int tam = sizeof(array1) / sizeof(array1[0]);
    int resultado[tam];

    multiplica_array(array1, array2, resultado, tam);

    printf("Saida: ");
    imprimir_array(resultado, tam);

    return 0;
}
