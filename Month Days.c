#include<stdio.h>
int main () {
  int a;

  printf("Enter the month number (1-12): ");
  scanf("%d",&a);

  if (a==1||a==3||a==5||a==7||a==8||a==10||a==12)
  {
    printf("31 Days");
  }
  else if (a==4||a==6||a==9||a==11)
  {
    printf("30 Days");
  }
  else if (a==2)
  {
    printf("28 or 29 Days (depending on the leap year)");
  }
  else {
    printf("Invalid Input!");
  }
  return 0;
}
  