/*
Name: Edirin Okpikpi
Student Number: 3078829
Assignment: 6
*/

#include <stdio.h>

int compute_vowel_count(const char *sentence);
int main()
{
    
    printf("Enter a Sentence: ");
    char sentence[58];
    
    fgets(sentence, sizeof(sentence), stdin);
    
    printf("number of vowels are %d",compute_vowel_count(sentence));
    
    return 0;
}

int compute_vowel_count(const char *sentence){
	
	const char *u = sentence;
    int vowels;
	vowels =  0;
	
	while(*u)
    {
    	switch(*u++){
		
case 'a':case 'e':case 'i':case 'o':case 'u':case 'A':case 'E':case 'I':case 'O': case 'U':  
			
			vowels++;
			break;
		}
        
    }
  return vowels;  
    
	
}



