#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char letters[]={'N','u','s','r','e','t'};
	int lengthChar=sizeof(letters)/sizeof(letters[0]);	// This process gives us the length of letters array.
	
	int numbers[]={1,2,3,4,5,6,7,8,9};
	
	printf("%d \n",numbers[0]);
	numbers[1]=10;
	printf("%d \n",numbers[1]);	// Output = 10
	
	for (int i=0;i<lengthChar;i++){
		printf("%c",letters[i]);		// Output = Nusret
	}
	}

