#include <stdio.h>

int main() {
    int idade;
    char nome[50];

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    fflush(stdin);  // <-- agora limpa o ENTER

    printf("Digite seu nome completo: ");
    scanf("%[^\n]", nome);   // <-- aqui pula sem fflush(stdin)

    printf("\nIdade: %d\n", idade);
    printf("Nome: %s\n", nome);

    return 0;
}