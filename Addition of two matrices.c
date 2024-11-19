#include<stdio.h>
int main() {

  int n, m;
  
  printf("Enter the number of rows: ");
  scanf("%d", &n);
  printf("Enter the number of colomns: ");
  scanf("%d", &m);

  int a[100][100], b[100][100], c[100][100]; 

  printf("Enter elements of 1st matrix:  \n");
  for (int i=0;i<n;i++) {
    for (int j=0;j<m;j++) {
      if (scanf("%d",&a[i][j])!=1) {
        printf("Invalid input! Only integers are allowed.\n");
        return 1;
    }
  }
  }

  printf("Enter elements of 2nd matrix:  \n");
  for (int i=0;i<n;i++) {
    for (int j=0;j<m;j++) {
      if (scanf("%d",&b[i][j])!=1) {
        printf("Invalid input! Only integers are allowed.\n");
        return 1;
    }
  }
  }
  for (int i=0;i<n;i++) {
    for (int j=0;j<m;j++) {
      c[i][j]=a[i][j]+b[i][j];
    }
  }

  printf("Addition of two matrices is: \n");
    for (int i=0;i<n;i++) {
     for (int j=0;j<m;j++) {
      printf("%d ",c[i][j]);
     }
    printf("\n");
    }

    return 0;

}