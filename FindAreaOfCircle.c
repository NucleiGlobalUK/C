#include <stdio.h>

#define PI 3.14159

float findArea(float radius) {
    return PI * radius * radius;
}

int main() {
    float radius = 5.0;
    float area = findArea(radius);

    printf("Area of the circle with radius %.2f is %.2f\n", radius, area);

    return 0;
}
