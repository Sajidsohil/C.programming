#include <stdio.h>

int isArmstrong(int number) {
    int originalNumber, remainder, n = 0, sum = 0;

    originalNumber = number;

    while (originalNumber != 0) {
        originalNumber /= 10;
        ++n;
    }

    originalNumber = number;

    while (originalNumber != 0) {
        remainder = originalNumber % 10;
        sum += pow(remainder, n);
        originalNumber /= 10;
    }

    if (sum == number)
        return 1;
    else
        return 0;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (isArmstrong(number))
        printf("%d is an Armstrong number.\n", number);
    else
        printf("%d is not an Armstrong number.\n", number);

    return 0;
}
