
/*Name: Okpikpi Edirin
 *Student Number: 3078829
 *Section:ACS-2102/3 (Tuesday)
 */
 #include <stdio.h>

int main(void)
{
    int d1, d2;

    printf("Enter two digits: ");
    scanf("%1d%1d",&d1,&d2);

    if (d1 == 1) {
        switch(d2) {
            case 0: printf(" ten"); break;
            case 1: printf(" eleven"); break;
            case 2: printf(" twelve"); break;
            case 3: printf(" thirteen"); break;
            case 4: printf(" fourteen"); break;
            case 5: printf(" fifteen"); break;
            case 6: printf(" sixteen"); break;
            case 7: printf(" seventeen"); break;
            case 8: printf(" eighteen"); break;
            case 9: printf(" ninteen"); break;
        }
        return 0;
    }
    switch(d1) {
        case 1: printf("ten"); break;
        case 2: printf("twenty"); break;
        case 3: printf("thirty"); break;
        case 4: printf("forty"); break;
        case 5: printf("fifty"); break;
        case 6: printf("sixty"); break;
        case 7: printf("seventy"); break;
        case 8: printf("eighty"); break;
        case 9: printf("ninety"); break;
    }
    switch(d2) {
        case 0: break;
        case 1: printf(" one"); break;
        case 2: printf(" two"); break;
        case 3: printf(" three"); break;
        case 4: printf(" four"); break;
        case 5: printf(" five"); break;
        case 6: printf(" six"); break;
        case 7: printf(" seven"); break;
        case 8: printf(" eight"); break;
        case 9: printf(" nine"); break;
    }
    return 0;
}
