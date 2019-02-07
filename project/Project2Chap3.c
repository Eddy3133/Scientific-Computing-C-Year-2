/*Name: Okpikpi Edirin
 *Student Number: 3078829
 *Section:ACS-2102/3 (Tuesday)
 */
#include <stdio.h>

int main(){
	
	int IT;
	float UC;
	int mm, dd, yyyy;
	
	printf("Enter item number: ");
	scanf("%d",&IT);
	printf("Enter unit price: ");
	scanf("%g",&UC);
	printf("Enter purchase date (mm/dd/yyyy): ");
	scanf("%d",&mm);
	scanf("%d",&dd);
	scanf("%d",&yyyy);
	
	
		
	if(UC>9999.99){
		UC=0;
	}

	
	printf("Item \t Unit \t Purchase \n\t Price \t Date \n %d\t $ %g\t %d/ %d/ %d",IT,UC,mm,dd,yyyy);
	return 0;
}
	

