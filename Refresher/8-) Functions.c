#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int add1(int num1,int num2);		// Prototype of a function.

void swap(int *x,int *y);
void printHello();

int main(int argc, char *argv[]) {
	int number1=10,number2=30;
	int sum=add1(number1,number2);
	printf("%d \n",sum);
	printf("number1: %d number2: %d \n",number1,number2);
	swap(&number1,&number2);	// We are sending adreess to function.
	printf("number1: %d number2: %d\n",number1,number2);
	
	printHello();
	}
	
void printHello(){		// as you see we are using printf scanf or any other command in c. There are also function. System function.
	printf("Hello everyone \n");
}	
	
int add1(int num1,int num2){	// We define like; return type function name (parameters){actions}
	return num1+num2;			// Actions
}
void swap(int *x,int *y){	// We use pointers and actually we didn't return something but values changed.
    int temp=*x;
    *x=*y;
    *y=temp;
}
