#include <stdio.h>

int main() {
    int num1 = 10, num2 = 5;
    
    printf("Addition: %d + %d = %d\n", num1, num2, num1 + num2);
    printf("Subtraction: %d - %d = %d\n", num1, num2, num1 - num2);
    printf("Multiplication: %d * %d = %d\n", num1, num2, num1 * num2);
    
    if (num2 != 0)
        printf("Division: %d / %d = %.2f\n", num1, num2, (float)num1 / num2);
    else
        printf("Division by zero is not possible\n");

    return 0;
}
