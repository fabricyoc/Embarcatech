#include <stdio.h>

void imprimir(int numero){
    numero = numero + 1;
    printf("DURANTE a funcao: %i \n", numero);
}

int main(){
    int a = 5;
    printf("Antes da funcao: %i\n", a);
    imprimir(a);
    printf("Depois da funcao: %i\n", a);

    return 0;
}