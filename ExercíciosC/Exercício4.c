#include <stdio.h>

int main() {
    int x,s;

    printf("Digite um valor:\n");
    scanf("%d", &x);

    s = 0;

    while (s <= 10) {
        printf("%d x %d = %d\n", x, s, s*x);
        s = s + 1;
    }
    return(0);
}