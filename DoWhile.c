#include <stdio.h>

int main() {
    int i = 1, n = 5;

    printf("Numbers from 1 to 5 using do-while loop:\n");

    do {
        printf("%d\n", i);
        i++;
    } while (i <= n);

    return 0;
}
