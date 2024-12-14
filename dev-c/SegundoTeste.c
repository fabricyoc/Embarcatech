#include <stdio.h>
#include <string.h>

struct Pessoa {
    char nome[100];
    int idade;
};

// Função para imprimir os dados da pessoa
void imprimirPessoa(struct Pessoa p) {
    printf("\t*** Imprimindo Pessoa ***\n");
    printf("Seu nome eh: %s \n", p.nome);
    printf("Sua idade eh: %i \n", p.idade);
}

// Função para setar os valores na estrutura
void setPessoa(struct Pessoa* p, char nome[100], int idade) {
    strcpy(p->nome, nome);  // Usando o operador "->" para acessar membros de um ponteiro
    p->idade = idade;
}

int main() {
    struct Pessoa p1;

    setPessoa(&p1, "fabricyo", 20);  // Passando o endereço de p1
    imprimirPessoa(p1);

    return 0;
}
