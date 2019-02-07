/*
#include <stdio.h>

int main(void)
{
    char ch, message[80] = {0};
    int i, message_length = 0, shift_amount;

    printf("Enter message to be encrypted: ");
    for (i = 0; (ch = getchar()) != '\n' && i < 80; i++) {
        message[i] = ch;
        message_length++;
    }

    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift_amount);

    printf("Encrypted message: ");
    for (i = 0; i < message_length; i++) {

        if (message[i] >= 'A' && message[i] <= 'Z') {
            printf("%c", ((message[i] - 'A') + shift_amount) % 26 + 'A');
        }
        else if (message[i] >= 'a' && message[i] <= 'z') {
            printf("%c", ((message[i] - 'a') + shift_amount) % 26 + 'a');
        }
        else {
            printf("%c", message[i]);
        }

    }

    return 0;
}
*/
 \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\

/*
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define STACK_SIZE 100

/* ********external variables****** 


char ch, contents[STACK_SIZE];
int top = 0;

int stack_overflow(void)
{
        printf("Stack overflow");
        exit(EXIT_FAILURE);
}

int stack_underflow(void)
{
        printf("Stack underflow");
        exit(EXIT_FAILURE);
}

void make_empty(void)
{
    top = 0;
}

bool is_empty(void)
{
    return top == 0;
}

bool is_full(void)
{
    return top == STACK_SIZE;
}

void push(char i)
{
    if (is_full())
        stack_overflow();
    else
        contents[top++] = i;
}

char pop(void)
{
    if (is_empty())
        stack_underflow();
    else
        return contents[--top];
}


int main(void)
{
    printf("Enter parentheses and/or braces: ");
    while ((ch = getchar()) != '\n') {

        if (ch == '{' || ch == '(') {
            push(ch);
        } else if (ch == '}' && pop() != '{') {
            printf("Parentheses not nested properly.");
            break;
        } else if (ch == ')' && pop() != '(') {
            printf("Parentheses not nested properly.");
            break;
        }
    }

    if (is_empty())
        printf("All parentheses and braces are matched");
    else
        printf("Parentheses and braces are not matched");

    return 0;
}
*/










\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\






/*
#include <stdio.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main(void)
{
  int amount, twenties, tens, fives, ones;

  printf("Enter a dollar amount: ");
  scanf("%d", &amount);

  pay_amount(amount, &twenties, &tens, &fives, &ones);
  printf("$20 bills: %d\n", twenties);
  printf("$10 bills: %d\n", tens);
  printf(" $5 bills: %d\n", fives);
  printf(" $1 bills: %d\n", ones);

  return 0;
}

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones)
{
  *twenties = dollars / 20;
  dollars = dollars - *twenties * 20;

  *tens = dollars / 10;
  dollars = dollars - *tens * 10;

  *fives = dollars / 5;
  dollars = dollars - *fives * 5;

  *ones = dollars;
}
*/


