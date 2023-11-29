#include <stdio.h>

int sumOfDigits(int number) {
    int sum = 0;
    while (number != 0) {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    int sum = sumOfDigits(number);
    printf("The sum of digits of the number is: %d\n", sum);
    return 0;
}
