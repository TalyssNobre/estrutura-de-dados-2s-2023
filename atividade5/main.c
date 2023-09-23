#include <stdio.h>
#include <stdlib.h>
#include "bubble_sort.h"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso: %s <arquivo_entrada.txt>\n", argv[0]);
        return 1;
    }

    char *arquivo_entrada = argv[1];
    char *arquivo_saida = "arq_palavras_ordenado.txt";

    // Chama a função para ordenar as palavras
    bubble_sort_words(arquivo_entrada, arquivo_saida);

    printf("Palavras ordenadas e salvas em '%s'\n", arquivo_saida);

    return 0;
}
