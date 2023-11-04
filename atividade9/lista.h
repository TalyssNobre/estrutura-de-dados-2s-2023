typedef struct NO {
    float valor;
    struct NO *proximo_no;
} NO;

NO *criar_no(float valor, NO *proximo_no);
void inserir_no_finalLista(NO *lista, NO *no);
void inserir_no_inicioLista(NO *lista, NO *no);
void inserir_no_entre_dois_nos(NO *no_anterior, NO *no);
void lista_inserir_no_ordenado(NO *lista, NO* no);
void imprimir_lista(NO *lista);