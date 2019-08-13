/*
Name: Edirin Okpikpi
Student Number: 3078829
Assignment: 6
*/

#include <stdio.h>
#include <stdbool.h>


bool is_palindrome(const char *message);

int main(void)
{
    char message[80];

    printf("Enter message: ");
    fgets(message, sizeof(message), stdin); 
    if (message[strlen(message)-1] == '\n') {
        message[strlen(message)-1] = '\0';
    }
    printf("%spalindrome", is_palindrome(message) ? "" : "Not a ");
    return 0;
}

bool is_palindrome(const char *message)
{
    const char *p = message;
    while (*message) {
        message++;
    }
    const char *d = --message;

    for (; p < d; p++, d--) {
        if (!(*p == *d))
            return false;
    }
    return true;
}





