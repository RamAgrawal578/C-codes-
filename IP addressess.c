#include<stdio.h>
int main() {
  printf("Generating IP addressess:\n");

  for (int i = 0; i < 255; i++) {
    for (int j = 0; j < 255; j++) {
      for (int k = 0; k < 255; k++) {
        for (int l = 0; l < 255; l++) {
          printf("%d.%d.%d.%d\n",i,j,k,l);
        }
      }
    }
  }
  return 0;
}