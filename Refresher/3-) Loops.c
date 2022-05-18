#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int a=10;
	int sum=0;
	
	for(int i=0;i<a;i++){
		sum+=i;
	}
	printf("%d",sum);	// While we use %d ,we say I am using integer. %f float %c char and %s string.
	printf("\n");		// New line
	int j=10;
	while(1){			// It's like while(true) or for(;;) infinite loop 
		if (j>20){
			break;		// Every infinite loop have break command.
		}
		else {
			printf("%d ",j);
			j++;
		}
	}
	
	
}
