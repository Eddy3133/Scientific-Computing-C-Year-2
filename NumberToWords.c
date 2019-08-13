
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
    
    char *One_Nine[99] = {[1]="one.",[2]= "two.",[3]= "three", [4]="four.", [5]="five.", [6]="six.", [7]="seven.", [8]="eight.", [9]="nine."};

char *Ten_Nineteen[99] = {[0]="ten.", [1]="eleven.", [2]="twelve.", [3]="thirteen.", [4]="fourteen.", [5]="fifteen.", [6]="sixteen.", [7]="seventeen.",[8]="eighteen.", [9]="nineteen."};

    char *Twenty_Ninety[99] = {[2]="twenty-", [3]="thirty-", [4]="forty-", [5]="fifty-", [6]="sixty-", [7]="seventy-", [8]="eighty-", [9]="ninety-"};


	while(d1 == *Twenty_Ninety[99] && d2 == *Ten_Nineteen[99] > 0 ){
		
		if (d1 == 1) {
			printf("%c", *Ten_Nineteen[99]);
		
	}

    
        
}
return 0;
}
