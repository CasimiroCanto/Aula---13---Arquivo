#include <stdio.h>
#include <string.h>


void ordenarString(char *str) {
    int n = strlen(str);
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (str[i] > str[j]) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int saoAnagramas(char *str1, char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    
    if (len1 != len2) {
        return 0;
    }
    
    char copia1[len1 + 1];
    char copia2[len2 + 1];
    
    strcpy(copia1, str1);
    strcpy(copia2, str2);
    
    ordenarString(copia1);
    ordenarString(copia2);
    
    return strcmp(copia1, copia2) == 0;
}

int main() {
    char str1[100], str2[100];
    
    printf("Digite a primeira string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; 
    
    printf("Digite a segunda string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; 
    
    if (saoAnagramas(str1, str2)) {
        printf("\"%s\" e \"%s\" são anagramas!\n", str1, str2);
    } else {
        printf("\"%s\" e \"%s\" NÃO são anagramas.\n", str1, str2);
    }
    
    return 0;
}