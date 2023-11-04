typedef struct NO {
    char valor;
    struct NO *proximo_no;
} NO;

NO *criar_no(char valor, NO *proximo_no);
void lista_inserir_no(NO *lista, NO *no);
void lista_imprimir(NO *lista);
int lista_quantidade_no(NO *lista);
NO *copiar_lista(NO *lista);
void lista_concatenar(NO* lista, NO* listaC);
void lista_liberar(NO* lista);

int lista_verificar_existencia(NO* lista, char valor_busca);
int lista_verificar_ocorrencias(NO* lista, char valor_busca);
void lista_imprimir_inversa(NO* lista);
void lista_inserir_no_i(NO* lista, int i);
void lista_remover_no_i(NO* lista, int i);
void lista_remover_no(NO* lista, char valor_busca);