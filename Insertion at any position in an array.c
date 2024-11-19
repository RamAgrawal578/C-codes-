#include<stdio.h>
int main () {
  int arr[100], n, m, pos;
  
  printf("Enter the number of elements in the array: ");
  scanf("%d",&n);

  printf("Enter the elements of the array:\n");
  for (int i = 0; i < n; i++)
  {
    scanf("%d",&arr[i]);
  }

  printf("Enter the element to be inserted: ");
  scanf("%d",&m);

  printf("Enter the position to insert the element: ");
  scanf("%d",&pos);

  if (pos<1||pos>n+1) {
    printf("Invalid position! Please eneter position between 1 and %d\n",n+1);
    return 1;
  }

  for (int i = n; i >= pos; i--)
  {
    arr[i] = arr[i-1] ;
  }
    
  arr[pos-1] = m ;
  n++;

  printf("Array after deletion:\n");
  for (int i = 0; i < n; i++)
  {
    printf("%d ",arr[i]);
  }
  
  return 0;
}