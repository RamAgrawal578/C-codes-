#include<stdio.h>

void y_Denominations(int amount) {
  int denominations[] = {2000,500,200,100,50,20,10,5,2,1};
  int numDenominations = sizeof(denominations)/sizeof(denominations[0]);

  printf("Denominations of amount %d:\n",amount);

  int i=0; 
  while (i < numDenominations) {
    if (amount >= denominations[i]) {
      int count = amount/ denominations[i];
      printf("%dx%d\n",count,denominations[i]);
      amount = amount%denominations[i];
      }
      i++;
    }
  }
    
int main() {
  int amount;
  printf("Enter the amount: ");
  scanf("%d",&amount);
  y_Denominations(amount);
  return 0;
}