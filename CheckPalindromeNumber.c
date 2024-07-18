#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int num) {
    int originalNum = num;
    int reversedNum = 0;

    while (num > 0) {
        int remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    return (originalNum == reversedNum);
}

int main() {
    int number = 12321;

    if (isPalindrome(number))
        printf("%d is a palindrome\n", number);
    else
        printf("%d is not a palindrome\n", number);

    return 0;
}
