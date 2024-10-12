#include <stdio.h>

unsigned long long fatorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * fatorial(n - 1);
}

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("O fatorial nao esta definido para numeros negativos.\n");
    } else {
        printf("O fatorial de %d eh %llu\n", numero, fatorial(numero));
    }

    return 0;
}
