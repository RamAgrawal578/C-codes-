#include<stdio.h>
int main () {
  int arr[100] = {1,2,3,4,5};
  int n = 5;
  int pos;

  printf("Enter the position to delete the element: ");
  scanf("%d",&pos);

  if (pos<1||pos>n+1) {
    printf("Invalid position! Please eneter position between 1 and %d\n",n+1);
    return 1;
  }

  for (int i = pos-1; i < n-1; i++)
  {
    arr[i] = arr[i+1] ;
  }
    
  n--;

  printf("Array after deletion:\n");
  for (int i = 0; i < n; i++)
  {
    printf("%d ",arr[i]);
  }
  
  return 0;
}