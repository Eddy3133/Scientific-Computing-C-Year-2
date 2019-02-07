/*Name: Okpikpi Edirin
 *Student Number: 3078829
 *Section:ACS-2102/3 (Tuesday)
 */#include <stdio.h>

int main(void)
{
	#define Bigger (1)
    #define Smaller (-1)
    #define Same (0)
    int m1, m2, d1, d2, y1, y2;
    int result = Same;

    printf("Enter the first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &m1, &d1, &y1);

    printf("Enter the second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &m2, &d2, &y2);

    if (y1 < y2) {
        result = Smaller;
    }
    else if (y2 < y1) {
        result = Bigger;
    }
    else {
        if (m1 < m2) {
            result = Smaller;
        }
        else if (m2 < m1) {
            result = Bigger;
        }
        else {
            if (d1 < d2) {
                result = Smaller;
            }
            else if (d2 < d1) {
                result = Bigger;
            }
        }
    }

    switch (result) {
        case Bigger:
            printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n",m2, d2, y2, m1, d1, y1);
            break;
        case Smaller:
            printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n",m1, d1, y1, m2, d2, y2);
            break;
        case Same:
            printf("Dates are equal.\n");
            break;
        default: printf("opps\n");
        
    }
    return 0;
}
