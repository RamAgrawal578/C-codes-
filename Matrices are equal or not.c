#include<stdio.h>
int main() {

  int n, m, i, j;
  
  printf("Enter the number of rows of matrices: ");
  scanf("%d", &n);

  printf("Enter the number of colomns of matrices: ");
  scanf("%d", &m);

  int a[100][100], b[100][100];

  printf("Enter elements of 1st matrix:  \n");
  for (i=0;i<n;i++) {
    for (j=0;j<m;j++) {
      if (scanf("%d",&a[i][j])!=1) {
        printf("Invalid input! Only integers are allowed.\n");
        return 1;
      }
    }
  }
 
  printf("Enter elements of 2nd matrix:  \n");
  for (i=0;i<n;i++) {
    for (j=0;j<m;j++) {
      if (scanf("%d",&b[i][j])!=1) {
        printf("Invalid input! Only integers are allowed.\n");
        return 1;
      }
    }
  }
  
  int equal = 1;
  for(i=0;i<n;i++) {
    for(j=0;j<m;j++) {
  if (a[i][j]!=b[i][j]) {
   equal = 0;
   break ;
  }
 }
 if (!equal) {
  break;
 }
  }

if (equal) {
  printf("The matrices are equal.\n");
} else {
  printf("The matrices are not equal.\n");
}

  return 0;
}