/*Name: Okpikpi Edirin
 *Student Number: 3078829
 *Section:ACS-2102/3 (Tuesday)
 */
 
#include <stdio.h>
#include <stdlib.h>
#define n 10

int main(int first, char* second[n])
{
    int sum = 0;
    char **p;
	
	
    for (p = second + 1; p < second + first; p++){
	
        sum += atoi(*p);
}
    printf("Total: %d", sum);
    return 0;
}
