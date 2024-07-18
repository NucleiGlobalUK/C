#include <stdio.h>

int binaryToDecimal(int binary) {
    int decimal = 0;
    int base = 1;
    int temp = binary;

    while (temp) {
        int lastDigit = temp % 10;
        temp = temp / 10;
        decimal += lastDigit * base;
        base = base * 2;
    }

    return decimal;
}

int main() {
    int binary = 10101;

    printf("Binary %d in decimal: %d\n", binary, binaryToDecimal(binary));

    return 0;
}
