#include <stdio.h>

int main(){
    int a = 20;
    int *b = &a;

    printf("Sem ponteiro: %i \n", a);
    printf("Endereco: %zu \n", &a);
    printf("Com ponteiro: %zu \n", b);


    return 0;
}