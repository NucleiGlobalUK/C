#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {
    int length = strlen(str);
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
}

int main() {
    char str[] = "Hello, World!";
    
    printf("Original string: %s\n", str);
    printf("Reversed string: ");
    reverseString(str);

    return 0;
}
