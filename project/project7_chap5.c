/*Name: Okpikpi Edirin
 *Student Number: 3078829
 *Section:ACS-2102/3 (Tuesday)
 */
#include <stdio.h>

int main(){
    int digit, maximum, minimum;

    printf ("Enter four digitbers: ");
    scanf ("%d", &digit);
    maximum = minimum = digit;
    int i = 0;
    for (i; i < 3; i++)
    { 
        scanf ("%d", &digit);
        if (maximum < digit)
            maximum = digit;
        else if (minimum > digit)
            minimum = digit;
    }

    printf ("Largest: %d \n",maximum);
    printf("Smallest: %d \n",minimum);
    return 0;
}
