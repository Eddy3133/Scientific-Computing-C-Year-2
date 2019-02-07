
/*Name: Okpikpi Edirin
 *Student Number: 3078829
 *Section:ACS-2102/3 (Tuesday)
 */#include <stdio.h>

int main(void)
{
    float maximum = 0, a;   
    while(a > 0){
    	printf("Enter a number:");
        if(scanf(" %f", &a) == 1) {
            if(a > maximum){
                maximum = a;
            }
        }
	}

   printf("Largest number: %f", maximum);

   return 0;
}
