#include <stdio.h>
#include <string.h>


/*Verificar se um elemento existe no array Escreva uma função que recebe um array de strings e uma string de busca,
 e retorna "1" se a string de busca existe no array, ou "0" caso não exista.

Exemplo: busca_string(["texto", "J", "EDA"], "EDO")
Saída: 0 */


int busca_string(char *array[], int tam, char *busca) {
    for (int i = 0; i < tam; i++) {
        if (strcmp(array[i], busca) == 0) {
            return 1;  // aqui encontrou a string
        }
    }
    return 0;  // aqui significa que não encontrou a string
}

int main() {
    char *strings[] = {"texto", "J", "EDA"};
    int tam = sizeof(strings) / sizeof(strings[0]);
    char busca[] = "EDO";

    int resultado = busca_string(strings, tam, busca);
    printf("Saida: %d\n", resultado);

    return 0;
}
