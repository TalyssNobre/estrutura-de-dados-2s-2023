#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
   int a = 3;
   int b = 7;
   int* p = &a;

   printf("a = %d\n", a);
   printf("a = %d\n", *p);
   printf("p = %p\n", p);
   printf("&a = %p\n", &a);

   int* p1;
   
   p1 = malloc(sizeof(int));
   printf("p1 = %p\n",p1);
   printf("*p1 = %d\n", *p1);
   *p = 2;
   printf("*p1 = %d", *p1);






    return 0;
}