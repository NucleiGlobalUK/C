#include <stdio.h>

unsigned long long factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int number = 5;
    unsigned long long fact = factorial(number);

    printf("Factorial of %d = %llu\n", number, fact);

    return 0;
}
