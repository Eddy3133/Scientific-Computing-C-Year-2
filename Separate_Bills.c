/*
Name: Edirin Okpikpi
Student Number: 3078829
Assignment: 5
*/
#include <stdio.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main(void)
{
  int amount, twenties, tens, fives, ones;

  printf("Enter a USD amount: ");
  scanf("%d", &amount);

  pay_amount(amount, &twenties, &tens, &fives, &ones);
  printf("$20 bills: %d\n", twenties);
  printf("$10 bills: %d\n", tens);
  printf(" $5 bills: %d\n", fives);
  printf(" $1 bills: %d\n", ones);

  return 0;
}

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones)
{
  *twenties = dollars / 20;
  dollars = dollars - *twenties * 20;

  *tens = dollars / 10;
  dollars = dollars - *tens * 10;

  *fives = dollars / 5;
  dollars = dollars - *fives * 5;

  *ones = dollars;
}
