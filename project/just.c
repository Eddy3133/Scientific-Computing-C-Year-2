#include <stdio.h>
#define dd "how"
int main(){

float max, kb;
max=kb;

printf("Enter a number: ");
scanf("%1f",&kb);


while(kb>0){
	
	scanf("%1f",&kb);
	
	if(max<kb){
		
		max=kb;
	}
}
printf("answer %d\n",max);
return 0;

}
