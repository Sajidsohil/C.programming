#include <stdio.h>

void printFibonacci(int n) {
    static int n1 = 0, n2 = 1, n3;

    // Base case
    if (n > 0) {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;

        printf("%d ", n3);
        printFibonacci(n - 1);
    }
}

int main() {
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printFibonacci(n);

    return 0;
}
