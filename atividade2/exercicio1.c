#include <stdio.h>

/*Exercício 1 - Soma dos elementos de um array. Escreva uma função que recebe um array de números inteiros e 
retorna a soma de todos os elementos; */

int soma_array(int array[], int tam) {
    int soma = 0;
    for (int i = 0; i < tam; i++) {
        soma += array[i];
    }
    return soma;
}

int main() {
    int num[] = {20, 5, 4, 1};
    int tam = sizeof(num) / sizeof(num[0]);

    int resultado = soma_array(num, tam);
    printf("Soma dos elementos do array: %d\n", resultado);

    return 0;
}
