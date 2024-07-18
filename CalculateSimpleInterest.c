#include <stdio.h>

float calculateSimpleInterest(float principal, float rate, float time) {
    return (principal * rate * time) / 100;
}

int main() {
    float principal = 1000.0;
    float rate = 5.0;
    float time = 2.0;

    float interest = calculateSimpleInterest(principal, rate, time);
    
    printf("Simple Interest: %.2f\n", interest);

    return 0;
}
