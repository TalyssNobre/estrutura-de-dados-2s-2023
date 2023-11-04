#include <stdio.h>
#include <stdlib.h>
#include "tabela_hash.h"

int main() {
    put("Franca", "Paris");
    put("Espanha", "Madri");
    put("Italia", "Roma");

    char* capital = get("Espanha");
    if (capital != NULL) {
        printf("A capital da Espanha e: %s\n", capital);
    } else {
        printf("Espanha nao encontrado na tabela.\n");
    }

    capital = get("Italia");
    if (capital != NULL) {
        printf("A capital da Italia e: %s\n", capital);
    } else {
        printf("Italia nao encontrada na tabela.\n");
    }

    capital = get("Franca");
    if (capital != NULL) {
        printf("A capital da Franca e: %s\n", capital);
    } else {
        printf("Franca nao encontrada na tabela.\n");
    }

    capital = get("Japao");
    if (capital != NULL) {
        printf("A capital do Japao e: %s\n", capital);
    } else {
        printf("Japao nao foi encontrado na tabela.\n");
    }

    return 0;
}