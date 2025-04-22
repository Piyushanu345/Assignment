#include <stdio.h>
#include <math.h>
#include <assignment.h>

int main() {
    int number;
    printf("Enter a number to check if it's an Armstrong number: ");
    scanf("%d", &number);
    if (isArmstrong(number)) {
        printf("The number is an Armstrong number.\n");
    } else {
        printf("The number is not an Armstrong number.\n");
    }
    printf("Enter a number to check if it's a Palindrome: ");
    scanf("%d", &number);
    if (isPalindrome(number)) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }
    printf("Enter a number to check if it's a Spy Number: ");
    scanf("%d", &number);
    if (isSpyNumber(number)) {
        printf("Spy Number\n");
    } else {
        printf("Not Spy Number\n");
    }

    return 0;
}
