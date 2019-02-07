/*Name: Okpikpi Edirin
 *Student Number: 3078829
 *Section:ACS-2102/3 (Tuesday)
 */#include <stdio.h>
int main (){
	
	int num1, denom1, num2, denom2, result_num, result_denom;
	
	printf("Enter fraction using the plus sign (+) to separate the fractions: ");
	scanf("%d/%d %d/%d", &num1, &denom1, &num2, &denom2);
	
	result_num = num1 * denom2 + num2 * denom1;
	result_denom = denom1*denom2;

	
	printf("the sum is %d/%d\n",result_num, result_denom);
	
	return 0;

}

