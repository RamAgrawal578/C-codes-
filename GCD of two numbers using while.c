#include<stdio.h>
int main () {
  int a, b, gcd, count = 1, small;

  printf("Enter 2 integers: ");
  scanf("%d %d",&a,&b);

  small = (a<b)?a:b;
  while (count <= small) {
    if (a % count == 0 && b % count == 0) {
      gcd = count;
    }
    count++;
  }
  printf("GCD:%d\n",gcd);
  return 0;
  
}