
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n, i;
    int sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
 
    arr = (int*) malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }

      printf("Enter the elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        sum += arr[i];
    }

    printf("The sum of array elements: %d\n", sum);
  
    free(arr);

    return 0;
}
