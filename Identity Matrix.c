#include<stdio.h>
int main() {

  int size, i, j;
  int a[100][100]={0};

  printf("Enter the size of the identity matrix: ");
  if (scanf("%d", &size)!=1|| size <=0 || size>100) {
    printf("Invalid input! Enter a positive integer.\n");
    return 1;
  }

  for (i=0;i<size;i++) {
    for (j=0;j<size;j++) {
      if (i==j) {
        a[i][j]=1;
      }
    }
  }

  printf("The identity matrix of size %d is:\n",size);
  for (i=0;i<size;i++) {
    for (j=0;j<size;j++) {
      printf("%d  ",a[i][j]);
    }
    printf("\n");
  } 
  return 0;
}