#include <stdio.h>

double calcular_dobro(double n){
    return n*2;
}


int main(int argc, char* argv[]){
int n = 11;
int n2 = 0;
float f1 = 1.5;
double d1 = 1.5555555;
char letra = 'J';

if(n2){
  printf("0 eh verdadeiro\n");

}
if(n){
  printf("-11 eh verdadeiro\n");

}
for(n = 0; n < 10; n++){
  printf("%d",n);

}
printf("\n");
n = 0;
do{
  printf(n < 10);
  n++;
}while (n < 10)
{
    /* code */
}


return 0;
}