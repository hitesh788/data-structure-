#include <stdio.h>

int main(void) {
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);

  int *arr=(int*)malloc(n*sizeof(int));
  printf("Enter the elements:");
  for (int i=0; i<n; i++){
    scanf("%d",&arr[i]);
  }
  printf("The odd element are:\n");
  for(int i=0; i<n; i++){
    if(arr[i]%2!= 0){
      printf("%d\n", arr[i]);
    
    }
  }
  printf("The even element are:\n");
  for(int i=0; i<n; i++){
    if(arr[i]%2 == 0){
      printf("%d\n", arr[i]);
    }
  }
  return 0;
}