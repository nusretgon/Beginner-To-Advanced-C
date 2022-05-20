#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char letters[]={"m","u","s","r","e","t"};
	
	int numbers[]={1,2,3,4,5,6,7,8,9};
	
	printf("%d \n",numbers[0]);
	numbers[1]=10;
	printf("%d \n",numbers[1]);	// Output = 10
	
	for (char i : letters){
		printf("%c",i);
	}
	}

