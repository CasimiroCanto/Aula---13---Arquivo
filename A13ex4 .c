#include <stdio.h>
#include <string.h>

int main() {
    char palavra[6]; 
    char letrasDigitadas[26] = {0};
    char letra;
    int tentativasErradas = 0;
    int totalLetras;
    int encontrou;

    printf("Digite uma palavra de até 5 letras: ");
    scanf("%5s", palavra);
    for (int i = 0; palavra[i] != '\0'; i++) {
        if (palavra[i] >= 'A' && palavra[i] <= 'Z') {
            palavra[i] += 32;
        }
    }

    totalLetras = strlen(palavra);
    printf("A palavra tem %d letras. Tente adivinhar as letras.\n", totalLetras);

    while (tentativasErradas < 3) {
        printf("Digite uma letra: ");
        scanf(" %c", &letra);

        if (letra >= 'A' && letra <= 'Z') {
            letra += 32;
        }

      

        letrasDigitadas[letra - 'a'] = 1; 
        encontrou=0;
        for (int i = 0; palavra[i] != '\0'; i++) {
            if (palavra[i] == letra) {
                printf("Letra encontrada na posição %d\n", i + 1);
                encontrou = 1;
            }
        }

        if (!encontrou) {
            tentativasErradas++;
            printf("Letra não encontrada. Tentativas restantes: %d\n", 3 - tentativasErradas);
        }
    }

    printf("Fim do jogo. A palavra era: %s\n", palavra);
    return 0;
}