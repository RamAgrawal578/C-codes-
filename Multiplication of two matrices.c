#include<stdio.h>
int main() {

  int n1, m1, n2, m2;
  
  printf("Enter the number of rows of matrix 1: ");
  scanf("%d", &n1);
  printf("Enter the number of colomns of matrix 1: ");
  scanf("%d", &m1);

  printf("Enter the number of rows of matrix 2: ");
  scanf("%d", &n2);
  printf("Enter the number of colomns of matrix 2: ");
  scanf("%d", &m2);

  int a[100][100], b[100][100], c[100][100] = {0}; 

  printf("Enter elements of 1st matrix:  \n");
  for (int i=0;i<n1;i++) {
    for (int j=0;j<m1;j++) {
      scanf("%d", &a[i][j]);
    }
  }
 
  printf("Enter elements of 2nd matrix:  \n");
  for (int i=0;i<n2;i++) {
    for (int j=0;j<m2;j++) {
      scanf("%d", &b[i][j]);
    }
  }
 
  for (int i=0;i<n1;i++) {
    for (int j=0;j<m2;j++) {
      for (int k=0;k<m1;k++) {
     c[i][j] += a[i][k] * b[k][j];
    }
  }
  }

  printf("Multiplication of two matrices are:  \n");
  for (int i=0;i<n1;i++) {
    for (int j=0;j<m2;j++) {
      printf(" %d ", c[i][j]);
    }
    printf("\n");
  }
  return 0;
}