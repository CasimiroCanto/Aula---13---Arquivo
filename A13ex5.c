#include <stdio.h>
#include <string.h>

int main() {
    char nome[50], sobrenome[50], completo[100] = "";

    printf("Digite o nome: ");
    scanf("%s", nome);
    
    printf("Digite o sobrenome: ");
    scanf("%s", sobrenome);

    strcat(completo, nome);
    strcat(completo, " ");
    strcat(completo, sobrenome);

    printf("Nome completo: %s\n", completo);

    return 0;
}