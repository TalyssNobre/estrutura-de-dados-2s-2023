#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main() {
    NO* n0 = criar_no('H', NULL);
    NO* n1 = criar_no('P', NULL);
    NO* n2 = criar_no('T', criar_no('D', criar_no('B', criar_no('X', criar_no('Z', NULL)))));
    NO* n3 = criar_no('Y', NULL);
    NO* n5 = criar_no('5', NULL);
    NO* n4 = criar_no('Q', criar_no('U', criar_no('U', criar_no('U', criar_no('U', NULL)))));

    lista_inserir_no(n0, n2);
    lista_inserir_no(n0, n1);
    lista_inserir_no(n0, n3);
    lista_inserir_no(n0, n4);
    lista_imprimir(n0);


    printf("\n\nO valor \'P\' esta contido na lista: %d\n\n", lista_verificar_existencia(n0, 'P'));
    
    printf("Ocorrencias: %d\n\n", lista_verificar_ocorrencias(n0, 'U'));

    printf("Lista Inversa\n");
    lista_imprimir_inversa(n0);
    printf("\n\n");

    // lista_inserir_no_i(n5, 0);

    printf("Remover NO na posicao i\n");
    lista_remover_no_i(n0, 2);
    lista_imprimir(n0);
    printf("\n\n");

    printf("remover NO com valor \'A\'\n");
    lista_remover_no(n0, 'A');
    lista_imprimir(n0);
    return 0;
}