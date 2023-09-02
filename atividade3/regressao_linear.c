#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Ponto {
    double x;
    double y;
};

int main() {
printf("Abrindo o arquivo...\n");
FILE *arquivo = fopen("atividade3/dados.csv", "r");


if (!arquivo) {
    perror("Erro ao abrir o arquivo, tente novamente");
    return 1;
}
printf("Arquivo aberto com sucesso.\n");

    
    int numLinhas = 0;
    char linha[1024]; 
    while (fgets(linha, sizeof(linha), arquivo)) {
        numLinhas++;
    }

  
    struct Ponto *pontos = (struct Ponto *)malloc(numLinhas * sizeof(struct Ponto));
    if (!pontos) {
        perror("Erro ao alocar a memória");
        fclose(arquivo);
        return 1;
    }


    rewind(arquivo);

   
    int i = 0;
    while (fgets(linha, sizeof(linha), arquivo)) {
      
        char *token = strtok(linha, ",");
        pontos[i].x = atof(token);
        token = strtok(NULL, ",");
        pontos[i].y = atof(token);
        i++;
    }

    fclose(arquivo);

   
    double somaX = 0.0, somaY = 0.0;
    for (int j = 0; j < numLinhas; j++) {
        somaX += pontos[j].x;
        somaY += pontos[j].y;
    }

    double mediaX = somaX / numLinhas;
    double mediaY = somaY / numLinhas;

   
    double somaXY = 0.0, somaXQuadrado = 0.0;
    for (int j = 0; j < numLinhas; j++) {
        somaXY += (pontos[j].x - mediaX) * (pontos[j].y - mediaY);
        somaXQuadrado += (pontos[j].x - mediaX) * (pontos[j].x - mediaX);
    }

    double a = somaXY / somaXQuadrado;
    double b = mediaY - (a * mediaX);

   
    printf("Resultados da Regressão Linear:\n");
    printf("Equação da Regressão Linear: y = %.2fx + %.2f\n", a, b);
    printf("Coeficiente Angular (Inclinação): a = %.2f\n", a);
    printf("Coeficiente Linear (Ponto de Intercepção): b = %.2f\n", b);

    
    free(pontos);

    return 0;
}