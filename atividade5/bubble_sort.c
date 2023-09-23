#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bubble_sort.h"

#define MAX_PALAVRA 100

void swap(char *str1, char *str2) {
    char temp[MAX_PALAVRA];
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
}

void bubble_sort_words(const char *arquivo_entrada, const char *arquivo_saida) {
    FILE *entrada = fopen(arquivo_entrada, "r");
    if (entrada == NULL) {
        printf("Erro ao abrir o arquivo de entrada.\n");
        exit(1);
    }

    char palavras[MAX_PALAVRA][MAX_PALAVRA];
    int num_palavras = 0;

    while (fscanf(entrada, "%s", palavras[num_palavras]) != EOF) {
        num_palavras++;
    }

    fclose(entrada);

    for (int i = 0; i < num_palavras - 1; i++) {
        for (int j = 0; j < num_palavras - i - 1; j++) {
            if (strcmp(palavras[j], palavras[j + 1]) > 0) {
                swap(palavras[j], palavras[j + 1]);
            }
        }
    }

    FILE *saida = fopen(arquivo_saida, "w");
    if (saida == NULL) {
        printf("Erro ao criar o arquivo de saída.\n");
        exit(1);
    }

    for (int i = 0; i < num_palavras; i++) {
        fprintf(saida, "%s\n", palavras[i]);
    }

    fclose(saida);
}
