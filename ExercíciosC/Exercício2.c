#include <stdio.h>

int main(){
    int soma = 0;

    for (int i = 0; i <= 250; i++){
    soma = soma + i;
    }

    printf("A soma de 1 a 250 e %i", soma);

    return 0;
}