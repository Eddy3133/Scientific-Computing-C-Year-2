
/*Name: Clinton Eziamaka
 *Student Number: 3074369
 */
#include <stdio.h>

int main(void)
{
    char Scanned, ch[80] = {0};
    int i, sizze = 0, n;

    printf("Enter message to be encrypted: ");
    for (i = 0; (Scanned = getchar()) != '\n' && i < 80; i++) {
        ch[i] = Scanned;
        sizze++;
    }

    printf("Enter shift amount (1-25): ");
    scanf("%d", &n);

    printf("Encrypted message: ");
    for (i = 0; i < sizze; i++) {

        if (ch[i] >= 'A' && ch[i] <= 'Z') {
            printf("%c", ((ch[i] - 'A') + n) % 26 + 'A');
        }
        else if (ch[i] >= 'a' && ch[i] <= 'z') {
            printf("%c", ((ch[i] - 'a') + n) % 26 + 'a');
        }
        else {
            printf("%c", ch[i]);
        }

    }

    return 0;
}
