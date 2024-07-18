#include <stdio.h>

int findSmallest(int arr[], int size) {
    int min = arr[0];
    
    for (int i = 1; i < size; i++) {
        if (arr[i] < min)
            min = arr[i];
    }

    return min;
}

int main() {
    int numbers[] = {10, 20, 4, 45, 99, 80};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int smallest = findSmallest(numbers, size);
    printf("Smallest number in the array is: %d\n", smallest);

    return 0;
}
