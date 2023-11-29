#include <stdio.h>

int findMaximum(int numbers[], int size) {
    int max = numbers[0];
    for (int i = 1; i < size; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }
    return max;
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int numbers[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    int max = findMaximum(numbers, n);
    printf("The maximum number is: %d\n", max);
    return 0;
}
