#include <stdio.h>

int main() {
    float a = 1.05;
    float b = 1.07;
    float c = 1.08;
    char funcao;
    
    scanf("%c", &funcao);
    
    float salario;
    scanf("%f", &salario);
    
    if(funcao == 'a'){
        salario *= a;    
    } else if (funcao == 'b'){
        salario *= b;    
    } else{
        salario *= c;    
    }

    printf("R$ %.2f\n",salario);
    
    return 0;
}