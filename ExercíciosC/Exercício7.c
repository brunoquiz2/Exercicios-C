#include <stdio.h>

int main() {
    int numeros[10];
    int i, maior, menor;

    printf("Digite 10 numeros inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    maior = menor = numeros[0];

    for (i = 1; i < 10; i++) {
        if (numeros[i] > maior) {
            maior = numeros[i];
        }
        if (numeros[i] < menor) {
            menor = numeros[i];
        }
    }

    printf("O maior numero eh: %d\n", maior);
    printf("O menor numero eh: %d\n", menor);

    return 0;
}
