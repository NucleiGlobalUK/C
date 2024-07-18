#include <stdio.h>

int findLargest(int arr[], int size) {
    int max = arr[0];
    
    for (int i = 1; i < size; i++) {
        if (arr[i] > max)
            max = arr[i];
    }

    return max;
}

int main() {
    int numbers[] = {10, 20, 4, 45, 99, 80};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int largest = findLargest(numbers, size);
    printf("Largest number in the array is: %d\n", largest);

    return 0;
}
