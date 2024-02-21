#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,  *arr, i;
    int sum1 = 0, sum2 = 0;

    printf("Enter the size of the  array: ");
    scanf("%d", &n);

    arr = (int*)malloc(n * sizeof(int));

    printf("Enter the elements of the first array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum1 += arr[i];
    }

    printf("Enter the elements of the second array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum2 += arr[i];
    }

    printf("Sum of elements in the first array: %d\n", sum1);
    printf("Sum of elements in the second array: %d\n", sum2);

    return 0;
}
