#include <stdio.h>

void triangulo_esquerda(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void triangulo_direita(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int numero;
    char opcao;

    do {
        printf("Digite um numero: ");
        scanf("%d", &numero);

        printf("Digite uma letra (A - esquerda, D - direita, F - sair): ");
        scanf(" %c", &opcao);

        if (opcao == 'A') {
            triangulo_esquerda(numero);
        } else if (opcao == 'D') {
            triangulo_direita(numero);
        } else if (opcao != 'F') {
            printf("Opcao invalida. Use A, D ou F.\n");
        }

    } while (opcao != 'F');

    printf("Programa encerrado.\n");
    return 0;
}