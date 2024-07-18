#include <stdio.h>

float convertCelsiusToFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

int main() {
    float celsius = 25.0;
    float fahrenheit = convertCelsiusToFahrenheit(celsius);

    printf("%.2f Celsius is %.2f Fahrenheit\n", celsius, fahrenheit);

    return 0;
}
