#include <stdio.h>

float convertFahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int main() {
    float fahrenheit = 77.0;
    float celsius = convertFahrenheitToCelsius(fahrenheit);

    printf("%.2f Fahrenheit is %.2f Celsius\n", fahrenheit, celsius);

    return 0;
}
