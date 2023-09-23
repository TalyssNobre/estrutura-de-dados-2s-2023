#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){

    FILE *f;

    f = fopen("teste.txt","W");
    if(f == NULL){

        perror("Nao foi possivel abrir o arquivo");
        exit(1);
    }
    

    int r = fprintf(f, "Texto na tela ");
    if(r < 0){
       perror("Nao foi possivel abrir o arquivo");
       exit(1);
    }
    fclose(f);

    

    exit(0);
}