#include <stdio.h>

void bubbleSort(int array[], int tamanho) {
    int i, j, temp;

    for (i = 0; i < tamanho - 1; i++) {
        
        for (j = 0; j < tamanho - i - 1; j++) {
            
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int main() {
    int numeros[10];
    int i;

    printf("Digite 10 numeros inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    
    
    bubbleSort(numeros, 10);

    
    printf("Em ordem crescente:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}
