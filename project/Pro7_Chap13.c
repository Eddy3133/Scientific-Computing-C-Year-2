/*Name: Okpikpi Edirin
 *Student Number: 3078829
 *Section:ACS-2102/3 (Tuesday)
 */
#include <stdio.h>

int main(void)
{
    int digit, divide, multiply;
    char *One_Nine[] = {"one.", "two.", "three", "four.", "five.",
                          "six.", "seven.", "eight.", "nine."};

    char *Ten_Nineteen[] = {"ten.", "eleven.", "twelve.", "thirteen.",
                           "fourteen.", "fifteen.", "sixteen.", "seventeen.",
                           "eighteen.", "nineteen."};

    char *Twenty_Ninety[] = {"twenty-", "thirty-", "forty-", "fifty-",
                          "sixty-", "seventy-", "eighty-", "ninety-"};

    printf("Enter a two-digit digit: ");
    scanf("%d", &digit);

    if (digit < 1 || digit > 99) {
        printf("Error, please enter a digit between 1 and 99.");
        return 0;
    }

    divide = digit / 10;
    multiply = digit % 10;

    printf("You entered the digit ");
    
    if (divide == 0) 
        printf("%s", One_Nine[multiply-1]);
    else if (divide == 1) 
        printf("%s", Ten_Nineteen[multiply]);
    else
        printf("%s%s", Twenty_Ninety[divide-2], One_Nine[multiply-1]);

    return 0;
}
