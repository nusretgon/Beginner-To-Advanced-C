#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int number1=10;
	int *num1;		
	// We will see &(ampersand) sign again.	
	num1=&number1;			// num1 and &number1 keep adresses. We pair this adreesses.From now on they keeps same values.
	printf("%d \n",*num1);	// Output = 10
	printf("%d",num1);		// In my computer the adreess = 6487572  so 6487572.adreess in my RAM keeps 
	
	int number2=20,*num2;
	*num2=number2;
	printf("%d",num2);
	}

