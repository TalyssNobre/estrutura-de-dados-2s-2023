#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
#include <time.h>

int main(int argc, char *argv[]) {
    FILE *arquivo;
    
    if (argc != 2) {
        printf("Erro de sintaxe!\n");
        exit(1);
    }

    if ((arquivo = fopen(argv[1], "r")) == NULL) {
        printf("Falha ao tentar abrir o arquivo: %s\n", argv[1]);
        exit(2);
    }

    float valor;
    fscanf(arquivo, "%f", &valor);
    NO *lista_nao_ordenada = criar_no(valor, NULL);
    NO *lista_ordenada = criar_no(valor, NULL);
 
    int count = 0;
    while (fscanf(arquivo, "%f", &valor) != EOF) {
        printf("N: %d\n", ++count);
        system("pause");
        //inserir_no_finalLista(lista_nao_ordenada, criar_no(valor, NULL));    
        lista_inserir_no_ordenado(lista_ordenada, criar_no(valor, NULL));
    }
    return 0;
}