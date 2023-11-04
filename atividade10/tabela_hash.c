#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tabela_hash.h"

#define TAMANHO_TABELA 100


typedef struct {
    char chave[100];
    char valor[100];
} ParChaveValor;


static ParChaveValor tabela[TAMANHO_TABELA];


int hash(char* chave) {
    unsigned int valor_hash = 0;
    for (int i = 0; chave[i] != '\0'; i++) {
        valor_hash += chave[i];
    }
    return valor_hash % TAMANHO_TABELA;
}


void put(char* chave, char* dado) {
    int indice = hash(chave);
    strcpy(tabela[indice].chave, chave);
    strcpy(tabela[indice].valor, dado);
}


char* get(char* chave) {
    int indice = hash(chave);
    if (strcmp(tabela[indice].chave, chave) == 0) {
        return tabela[indice].valor;
    }
    return NULL; 
}