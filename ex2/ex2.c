#include<stdio.h>

int main (){
	int i; 
	char num[10],c;
	do {
		printf("\nEnter your number:\n ");
		for(i=0;i<10;i++){
			scanf("%c",&num[i]);
		}
		if ( num[1]=='6'){
			printf("Mobile: +212");
			for(i=1;i<10;i++){
			printf("%c",num[i]);
		}
		}
		else  if ( num[1]=='5') {
			printf("Fix : +212");
			for(i=1;i<10;i++){
			printf("%c",num[i]);
			}
		}
	printf("\nDo you want to enter another number? (y/n): ");
        scanf(" %c", &c);

    } while (c == 'y' || c == 'Y');


return 0 ;
}
