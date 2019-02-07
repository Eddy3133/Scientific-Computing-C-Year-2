/*
Name: Edirin Okpikpi
Student Number: 3078829
Assignment: 6
*/

#include <stdio.h>
#include <string.h>


void reverse(char *message);

int main(void)
{
    char message[80];

    printf("Enter message: ");
    fgets(message, sizeof(message), stdin);
    if (message[strlen(message) - 1] == '\n') {
        message[strlen(message) - 1] = '\0';
    }
    reverse(message);
    printf("Reversed message: %s", message);

    return 0;
}

void reverse(char *message)
{
    char p;
    char *u = message;
    while (*message) {
        message++;
    }
    char *d = --message; /* - ignore the '\0' char */

    for (; u < d; u++, d--) {
        p = *u;
        *u = *d;
        *d = p;
    }
}
