int isArmstrong(int n) {
    int original = n;
    int sum = 0, digits = 0, temp = n;

    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    return sum == original;
}
int isPalindrome(int n) {
    int original = n, reversed = 0;

    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }

    return original == reversed;
}
int isSpyNumber(int n) {
    int sum = 0, product = 1;

    while (n > 0) {
        int digit = n % 10;
        sum += digit;
        product *= digit;
        n /= 10;
    }

    return sum == product;
}
