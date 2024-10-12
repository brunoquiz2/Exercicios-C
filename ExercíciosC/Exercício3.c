#include <stdio.h>

int main(){
    int numero, i, resultado = 0;

    printf("Digite um valor:");
    scanf("%d", &numero);

    for (i = 2; i<= numero / 2; i++) {
        if (numero % 1 == 0) {
            resultado++;
            break;
        }
    }

    if (resultado == 0)
    printf("%d eh um numero primo", numero);
    else
    printf("%d nao eh um numero primo", numero);

    return 0;
}