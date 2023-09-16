#include <stdio.h>

int main(){
	char op;
	float n1,n2;
	while(1){
		printf("Enter an operator (+, -, *, /) \nif you want to exit press x: ");
		scanf("%c",&op);
        	if (op == 'x' || op == 'X') {
			 printf("Exiting .\n");
			break;
		}
	printf("Enter two numbers:\n");
	scanf("%f  %f",&n1,&n2);
	switch (op) {
		case '+':
			printf(" %.2f + %.2f = %.2f" ,n1,n2,n1 + n2);
			break;
		case '-':
                        printf(" %.2f - %.2f = %.2f" ,n1,n2,n1 - n2);
			break;
		case '*':
                        printf(" %.2f * %.2f = %.2f" ,n1,n2,n1 * n2);
			break;
		case '/':
			if (n2 != 0){
				printf(" %.2f / %.2f = %.2f" ,n1,n2,n1 / n2);
			}
			else {
				printf("impossible to divide by 0");
			}
			break;
		default:
			  printf("Invalid operator. Please enter +, -, *,/.\n");
			break;
		}
	}
	return 0 ;
}
