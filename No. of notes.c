#include<stdio.h>
int main () {
  int amount,notes;

  printf("Enter the amount: ");
  scanf("%d",&amount);

  if (amount<=0) {
    printf("Invalid input!");
  }

  if (amount>=2000) {
    notes = amount/2000;
    printf("2000 Rs notes: %d\n",notes);
    amount = amount % 2000;
  }

  if (amount>=500) {
    notes = amount/500;
    printf("500 Rs notes : %d\n",notes);
    amount = amount % 500;
  }

  if (amount>=200) {
    notes = amount/200;
    printf("200 Rs notes : %d\n",notes);
    amount = amount % 200;
  }

  if (amount>=100) {
    notes = amount/100;
    printf("100 Rs notes : %d\n",notes);
    amount = amount % 100;
  }

  if (amount>=50) {
    notes = amount/50;
    printf("50 Rs notes  : %d\n",notes);
    amount = amount % 50;
  }

  if (amount>=20) {
    notes = amount/20;
    printf("20 Rs notes  : %d\n",notes);
    amount = amount % 20;
  }

  if (amount>=10) {
    notes = amount/10;
    printf("10 Rs notes  : %d\n",notes);
    amount = amount % 10;
  }

  if (amount>=5) {
    notes = amount/5;
    printf("5 Rs notes   : %d\n",notes);
    amount = amount % 5;
  }

  if (amount>=2) {
    notes = amount/2;
    printf("2 Rs notes   : %d\n",notes);
    amount = amount % 2;
  }

  if (amount>=1) {
    notes = amount/1;
    printf("1 Rs notes   : %d\n",notes);
    amount = amount % 1;
  }

  return 0;
}