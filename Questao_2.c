#include <stdio.h>

int main() {
    int controle, numero, digito, soma = 0;
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("%d eh par\n", numero);
    } else {
        printf("%d eh impar\n", numero);
    }
    controle = numero;
    while (controle != 0) {
        digito = controle % 10; 
        soma += digito;       
        controle /= 10;         
    }

    printf("A soma dos algarismos de %d eh %d\n", numero, soma);

    return 0;
}