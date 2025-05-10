#include <stdio.h>

int main() {
    int vetor[5] = {9, 7, 3, 6, 8};
    int tamanho = 5;
    int maior;
    
    printf("Vetor antes da ordenacao: ");
    for(int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    
    for(int j = 0; j < tamanho - 1; j++) {
        for(int i = 0; i < tamanho - 1 - j; i++) {
            if(vetor[i] > vetor[i+1]) {
                maior = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = maior;
            }
        }
    }
    
    printf("Vetor depois da ordenacao: ");
    for(int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    
    return 0;
}