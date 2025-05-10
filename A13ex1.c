#include <stdio.h>
#include <string.h>

int main() {
    char senha[20];
    char senhaCorreta[] = "azimo";
    int tentativas = 3;
    int acertou = 0;
    
    while (tentativas > 0 && !acertou) {
        printf("Digite a senha: ");
        scanf("%s", senha);
        
        if (strcmp(senha, senhaCorreta) == 0) {
            printf("Seja bem vindo!\n");
            acertou = 1;
        } else {
            tentativas--;
            if (tentativas > 0) {
                printf("Senha errada. Tentativas restantes: %d\n", tentativas);
            } else {
                printf("Tente novamente mais tarde.\n");
            }
        }
    }
    
    return 0;
}