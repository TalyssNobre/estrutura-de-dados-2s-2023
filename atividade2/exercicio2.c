#include <stdio.h>

/* Maior e menor elemento do array. Escreva uma função que recebe um array de números inteiros e retorna o menor e o maior elemento do array.
Exemplo: menor_maior_array([5, 7, 9,6])
Saída: 5, 9 */

void menor_maior_elemento(int array[], int tam, int *menor, int *maior) {
    *menor = array[0];
    *maior = array[0];

    for (int i = 1; i < tam; i++) {
        if (array[i] < *menor) {
            *menor = array[i];
        }
        if (array[i] > *maior) {
            *maior = array[i];
        }
    }
}

int main() {
    int num[] = {5, 7, 9, 6, 2, 10};
    int tam = sizeof(num) / sizeof(num[0]);

    int menor, maior;
    menor_maior_elemento(num, tam, &menor, &maior);

    printf("O menor elemento do array e: %d\n", menor);
    printf("O maior elemento do array e: %d\n", maior);

    return 0;
}
