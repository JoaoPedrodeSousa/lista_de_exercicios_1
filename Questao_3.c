#include <stdio.h>

int main() {
    int senha_cadastrada, senha_digitada, tentativas = 0;
    
    printf("senha cadastrada: ");
    scanf("%d\n", &senha_cadastrada);
    
    while (1) {
        scanf("%d", &senha_digitada);
        
        if (senha_digitada == senha_cadastrada) {
            printf("senha valida!\n");
            break;

        } else {
            printf("senha invalida!\n");
        }
    }

    return 0;
}
