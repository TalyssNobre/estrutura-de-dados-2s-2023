#include <stdio.h>

/*Exercício 4 - Contar a quantidade de ocorrências de um elemento no array. 
Escreva uma função que recebe um array de números inteiros e um número inteiro de busca,
e retorna a quantidade de vezes que o número de busca aparece no array.*/

int conta_int_array(int array[], int tamanho, int busca) {
    int contador = 0;
    for (int i = 0; i < tamanho; i++) {
        if (array[i] == busca) {
            contador++;
        }
    }
    return contador;
}

int main() {
    int num[] = {2, 4, 5, 7, 9, 17, 1, 3};
    int tamanho = sizeof(num) / sizeof(num[0]);
    int busca = 5;

    int quantidade = conta_int_array(num, tamanho, busca);
    printf("Saida: %d\n", quantidade);

    return 0;
}
