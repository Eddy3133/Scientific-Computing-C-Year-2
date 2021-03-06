#include <stdio.h>

int compute_vowel_count(const char *sentence);

int main(void)
{
    char sentence[80];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    printf("Your sentence contains %d vowels.", compute_vowel_count(sentence));

    return 0;
}
        
int compute_vowel_count(const char *sentence)
{
    const char *p = sentence;
    int vowel_count = 0;

    while (*p) {
        switch(toupper(*p++)) {
            case 'A': case 'E': case 'I': case 'O': case 'U':
                vowel_count++;
                break;
        }
    }
    return vowel_count;
}
