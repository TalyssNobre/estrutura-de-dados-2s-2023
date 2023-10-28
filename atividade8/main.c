#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main(int argc, char* argv[]) {

    No* n0 = no('C', NULL);
    No* n1 = no('E', NULL);
    No* n2 = no('A', no('D', no('B', no('X', no('Z', NULL))));
    No* n3 = no('U', NULL);

    lista_inserir_no(n0, n2);
    lista_inserir_no(n0, n1);
    lista_inserir_no(n0, n3);

    printf("Lista: ");
    lista_imprimir(n0);

    printf("\nQuantidade de nós: %d", lista_quantidade_nos(n0));

    No* n_copia = lista_copiar(n0);
    printf("\nCópia da lista: ");
    lista_imprimir(n_copia);

    lista_concatenar(n0, n_copia);
    printf("\nLista após a concatenação: ");
    lista_imprimir(n0);

    printf("\nVerificar existência de 'B' na lista (1 = Sim, 0 = Não): %d", lista_verificar_existencia(n0, 'B'));
    printf("\nOcorrências de 'C' na lista: %d", lista_verificar_ocorrencias(n0, 'C'));

    printf("\nImprimir a lista inversa: ");
    lista_imprimir_inversa(n0);

    lista_inserir_no_i(n0, 2);
    printf("\nLista após inserção de 'N' na posição 2: ");
    lista_imprimir(n0);

    lista_remover_no_i(n0, 3);
    printf("\nLista após remoção da posição 3: ");
    lista_imprimir(n0);

    lista_remover_no(n0, 'A');
    printf("\nLista após remoção de todos os 'A': ");
    lista_imprimir(n0);

    lista_liberar(n0);
    n0 = NULL;

    exit(0);
}
