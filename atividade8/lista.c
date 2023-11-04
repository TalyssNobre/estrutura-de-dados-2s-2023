#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

NO *criar_no(char valor, NO *proximo_no) {
    NO *no = (NO *) malloc(sizeof(NO));
    no->valor = valor;
    no->proximo_no = proximo_no;
    return no;
}

void lista_inserir_no(NO *lista, NO *no) {
    if (lista != NULL) {
        if (lista->proximo_no == NULL) {
            lista->proximo_no = no;
        } else {
            lista_inserir_no(lista->proximo_no, no);
        }
    }
}

void lista_imprimir(NO *lista) {
    if (lista != NULL) {
        printf("%c ", lista->valor);
        lista_imprimir(lista->proximo_no);
    }
}

int lista_quantidade_no(NO *lista) {
    if (lista != NULL) {
        return lista_quantidade_no(lista->proximo_no) + 1;
    }
    return 0;
}

NO *copiar_lista(NO *lista) {
    if (lista != NULL) {
        return criar_no(lista->valor, copiar_lista(lista->proximo_no));
    }
    return NULL;
}

void lista_concatenar(NO* lista, NO* listaC){
    lista_inserir_no(lista, listaC);
}

void lista_liberar(NO* lista){
    if(lista != NULL){
        lista_liberar(lista->proximo_no);
        free(lista);
    }
}

// Funções solicitadas na atividade 8

int lista_verificar_existencia(NO* lista, char valor_busca) {
    if (lista == NULL) 
        return 0;
    
    if (valor_busca == lista->valor) 
        return 1;
    
    return lista_verificar_existencia(lista->proximo_no, valor_busca);
}

int lista_verificar_ocorrencias(NO* lista, char valor_busca) {
    int ocorrencia = 0;
    NO *no_atual = lista;
    while (no_atual) {
        if (no_atual->valor == valor_busca)
            ocorrencia++;
        no_atual = no_atual->proximo_no;
    } 

    return ocorrencia;   
}

void lista_imprimir_inversa(NO* lista) {
    if (lista != NULL) {
        lista_imprimir_inversa(lista->proximo_no);
        printf("%c ", lista->valor);
    }
}

void lista_inserir_no_i(NO* lista, int i) {
    if (i < 0 || i > lista_quantidade_no(lista)) {
        printf("Posicao invalida para insercao.\n");
        return;
    }

    NO* novo_no = criar_no('9', NULL);
    NO* atual = lista;

    if (i == 0) {
        novo_no->proximo_no = lista;
        lista = novo_no;
        return;
    }

    int pos = 0;
    while (atual != NULL && pos < i - 1) {
        atual = atual->proximo_no;
        pos++;
    }

    if (atual == NULL) {
        printf("Posição invalida para insercao.\n");
        free(novo_no);
        return;
    }

    novo_no->proximo_no = atual->proximo_no;
    atual->proximo_no = novo_no;
}

void lista_remover_no_i(NO* lista, int i) {
    if (i < 0) {
        printf("Posição inválida para remoção.\n");
        return;
    }

    NO* atual = lista;

    if (i == 0) {
        lista = lista->proximo_no;
        free(atual);
        return;
    }

    int pos = 0;
    while (atual != NULL && pos < i - 1) {
        atual = atual->proximo_no;
        pos++;
    }

    if (atual == NULL || atual->proximo_no == NULL) {
        printf("Posição inválida para remoção.\n");
        return;
    }

    NO* no_a_remover = atual->proximo_no;
    atual->proximo_no = no_a_remover->proximo_no;
    free(no_a_remover);
}

void lista_remover_no(NO* lista, char valor_busca) {
    NO* atual = lista;
    NO* anterior = NULL;

    while (atual != NULL) {
        if (atual->valor == valor_busca) {
            if (anterior != NULL) {
                anterior->proximo_no = atual->proximo_no;
            } else {
                lista = atual->proximo_no;
            }
            free(atual);
            atual = anterior;
        }
        anterior = atual;
        atual = atual->proximo_no;
    }
}