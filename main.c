#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *arr, i;
    int sum_odd = 0, sum_even = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    arr = (int*)malloc(n * sizeof(int));

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            sum_even += arr[i];
        } else {
            sum_odd += arr[i];
        }
    }

    printf("Sum of even elements: %d\n", sum_even);
    printf("Sum of odd elements: %d\n", sum_odd);

    free(arr);
    return 0;
}
