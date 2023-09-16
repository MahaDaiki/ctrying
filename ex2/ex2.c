#include<stdio.h>

int main (){
	int i, num[9];
	while (1) {
		printf("\nEnter your number:\n ");
		for(i=0;i<10;i++){
			scanf("%d",&num[i]);
		}
		if ( num[1]==6){
			printf("Mobile: +212");
			for(i=0;i<10;i++){
			printf("%d",num[i]);
		}
		}
		else  if ( num[1]==5) {
			printf("Fix : +212");
			for(i=0;i<10;i++){
			printf("%d",num[i]);
			}
		}
		}

return 0 ;
}
