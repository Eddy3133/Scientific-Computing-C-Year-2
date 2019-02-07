







#include <stdio.h>


int main()
{
    char line[150];
    int i, h;

    h =  0;

    printf("Enter a line of string: ");
    scanf("%[^\n]", line);

    for(i=0; line[i]!='\0'; ++i)
    {
     
	 	switch(line[i]){
	 		
			
			case 'a': h++;
			case 'e': h++;
			case 'i': h++;
			case 'o': h++;
			case 'u': h++;
			case 'A': h++;
			case 'E': h++;
			case 'I': h++;
			case 'O': h++;
			case 'U': h++;
			
			
			
		}
	   if(*u=='a' || *u=='e' || *u=='i' ||
           *u=='o' || *u=='u' || *u=='A' ||
           *u=='E' || *u=='I' || *u=='O' ||
           *u=='U')
        {
            ++vowels;
        }
        
    }

    printf("Vowels: %d",h);
    
		

    return 0;
}








#include <stdio.h>


int main()
{
    char line[150];
    int i, vowels, consonants, digits, spaces;

    vowels =  0;

    printf("Enter a line of string: ");
    scanf("%[^\n]", line);

    for(i=0; line[i]!='\0'; ++i)
    {
        if(line[i]=='a' || line[i]=='e' || line[i]=='i' ||
           line[i]=='o' || line[i]=='u' || line[i]=='A' ||
           line[i]=='E' || line[i]=='I' || line[i]=='O' ||
           line[i]=='U')
        {
            ++vowels;
        }
        
    }

    printf("Vowels: %d",vowels);
    
    	switch(s[i]){
			
			case 'a': h++;
			case 'e': h++;
			case 'i': h++;
			case 'o': h++;
			case 'u': h++;
			
			
		}
		

    return 0;
}
