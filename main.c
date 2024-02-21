
#include <stdio.h>
#include <stdlib.h>

int main() {
  int *arr;
  int n, i;
  int sum = 0;

  printf("Enter the number of elements: ");
  scanf("%d", &n);

  // allocationg the memory for n numbers of array//

  arr = (int *)malloc(n * sizeof(int));

  // checking if the array is null and memory is allocated or not//
  if (arr == NULL) {
    printf("Memory not allocated.\n");
    exit(0);
  }
  // taking input from user
  printf("Enter the elements: ");
  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  // calculating the sum of element of array
  for (i = 0; i < n; i++) {
    sum += arr[i];
  }
  // printing the sum of array
  printf("The sum of array elements: %d\n", sum);

  free(arr);

  return 0;
}
