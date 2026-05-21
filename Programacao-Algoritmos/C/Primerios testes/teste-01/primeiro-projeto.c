#include <stdio.h>

int main() {
    char nome [50];
    int idade;
    printf("Insira seu nome: ");
    scanf( "%s",nome);
    printf("\nOlá %s, insira sua idade: ",nome);
    scanf("%d", &idade);
    printf("Seu nome é %s, e você tem %d anos!",nome,idade);

    return 0;
}