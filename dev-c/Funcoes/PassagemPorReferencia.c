#include <stdio.h>

void imprimir(int *numero){
    *numero = *numero + 1;
    printf("DURANTE a funcao: %i\n", *numero);
}

int main(){
    int a = 5;
    printf("Antes da funcao: %zu \n", a);
    imprimir(&a);
    printf("Depois da funcao: %zu \n", a);
    

    return 0;
}