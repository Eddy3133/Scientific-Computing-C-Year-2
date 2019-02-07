/*Name: Clinton Eziamaka
 *Student Number: 3074369
 */
# include<stdio.h>
float absolute(float x)
{
     if (x < 0)
         x = -x;
     return x;
}

float square(float x)
{
    float y = 1;

    while  ( absolute((y * y) / x  - 1.0) >= 0.0001 )
        y = ((x/y) + y) / 2;

    return y;
}

int main(void)
{
	float x;
	printf("Enter a positive number:");
	scanf("%f",&x);
    printf("Squareroot is: %f",square(x));
   
    return 0;
}
