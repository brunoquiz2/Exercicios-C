#include <stdio.h>
#include <string.h>

int main() {
    char str[100]; 
    int i, count = 0;

    printf("Digite uma palavra: ");
    fgets(str, sizeof(str), stdin); 

    for (i = 0; str[i] != '\0'; i++) {
        char c = str[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            count++;
        }
    }

    printf("Numero de vogais na palavra: %d\n", count);

    return 0;
}
