#include <stdio.h>

int main(){
    int X;
    scanf("%d",&X);
    
    
    if (X < 1800 || X > 2022 || X % 2 != 0 || X == 1916 || X == 1942 || X == 1946){
        printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d.\n", X);
    }
    else{
        if(X % 4 == 0 ){
            printf("Os Jogos Olimpicos de Verao ocorreram no ano de %d.\n",X);
        }
        else{
            printf("A Copa do Mundo de Futebol ocorreu no ano de %d.\n",X);
        }
    }

    return 0;
}