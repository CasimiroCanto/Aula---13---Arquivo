#include <stdio.h>
#include <string.h>

int main() {
    char palavra[11]; 
    int i, j, tamanho;
    int palindromo = 1; 

    printf("Digite a palavra: ");
    scanf("%10s", palavra);

    tamanho = strlen(palavra);

    for (i = 0, j = tamanho - 1; i < j; i++, j--) {
        char letraInicio = palavra[i];
        char letraFim = palavra[j];

        if (letraInicio >= 'A' && letraInicio <= 'Z') {
            letraInicio = letraInicio - 'A' + 'a';
        }
        if (letraFim >= 'A' && letraFim <= 'Z') {
            letraFim = letraFim - 'A' + 'a';
        }

        if (letraInicio != letraFim) {
            palindromo = 0;
            break;
        }
    }

    if (palindromo) {
        printf("Resultado: é um palíndromo!\n");
    } else {
        printf("Resultado: NÃO é!\n");
    }

    return 0;
}