/*Name: Okpikpi Edirin
 *Student Number: 3078829
 *Section:ACS-2102/3 (Tuesday)
 */
#include <stdio.h>
int main(void)
{
    float e = 1;
    int input, i, j;

    printf("Enter an integer to use to approximate: ");
    scanf("%d", &input);

   for(i=1; i<=input; i++)
{
    int result = 1;
    int j=1;
    for(j; j<=i; j++)
    {
        result = result * j;
    }
    e += 1 / (float)result; 
}

    printf("e equals %f\n", e);
    return 0;
}
