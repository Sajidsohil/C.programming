#include <stdio.h>

// Recursive function to calculate factorial
int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n-1);
}

int main() {
    int n, i;

    printf("Enter the number of elements in the factorial sequence: ");
    scanf("%d", &n);

    printf("Factorial sequence: ");
    for (i = 0; i <= n; i++) {
        printf("%d ", factorial(i));
    }

    return 0;
}
