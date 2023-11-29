#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int array[n];
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    int maxElement = array[0];
    int maxIndex = 0;

    for (i = 1; i < n; i++) {
        if (array[i] > maxElement) {
            maxElement = array[i];
            maxIndex = i;
        }
    }

    printf("The maximum element is %d and its index is %d.\n", maxElement, maxIndex);

    return 0;
}
