#include <stdio.h>

int main() {
    int num = 10;

    if (num > 0) {
        if (num % 2 == 0) {
            printf("%d is positive and even.\n", num);
        } else {
            printf("%d is positive and odd.\n", num);
        }
    } else {
        printf("%d is non-positive.\n", num);
    }

    return 0;
}
