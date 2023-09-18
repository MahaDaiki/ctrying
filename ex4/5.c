
#include<stdio.h>
void printtable(char place[]){
	  
        for (int i=0;i<10;i++){
                printf("%c",place[i]);
                if((i+1) % 3 == 0) printf("\n");
                else { printf ("|");}
 
}
printf("\n");
}
int checkwin(char place[]){
	if ( (place[0] == place[1] && place[0] == place[2]) ||(place[0]==place[3] && place[0] ==place [6]) ||
	(place[0] == place[4] && place[0] == place[8]) ||(place[3]==place[4] && place[3] ==place [5]) || (place[6] == place[7] && place[6] == place[8]) ||(place[2]==place[4] && place[2] ==place [6]) ){
		printf (" winner ");
	return 1;
}
	else 
		return 0;
}
int main() {

	char place[]= { '1','2','3','4','5','6','7','8','9'};
	printtable(place);
char  value, x='X' ;
int i;

while(1){
int validation = 0;
	printf("your choice:\n");
	scanf (" %c" ,&value);
	
	for ( int i =0 ;i<10;i++){
	if ( place[i]==value){
		place[i]=x;validation = 1;
	}
	}
	if(validation == 0){
		continue;}

	printtable(place);
	if (x == 'X'){
                x='O';
        }
        else{
                x='X';
        }
	
	int win = checkwin(place);
	if (win == 1){
		printf ("GG EZ\n");
}
}
return 0;
}
