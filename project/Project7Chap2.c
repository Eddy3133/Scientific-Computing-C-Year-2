/*Name: Okpikpi Edirin
 *Student Number: 3078829
 *Section:ACS-2102/3 (Tuesday)
 */
#include<stdio.h>
int main(){
int money, US20, US10, US5, US1;

printf ("Please enter US dollars amount: ");
scanf("%d", &money);
US20 = money/20;
printf("20 dollars bills: %d\n",US20);
US10=(money - US20*20)/10;
printf("10 dollars bills: %d\n",US10);
US5=(money-US20*20-US10*10)/5;
printf("5 dollars bills: %d\n",US5);
US1=(money-US20*20-US10*10-US5*5);
printf("1 dollars bills: %d\n",US1);
return 0;}


