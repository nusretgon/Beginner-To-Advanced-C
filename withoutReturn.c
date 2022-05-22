#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void Division(int number1,int number2,int *dividend,int *remainder);
int main(int argc, char *argv[]) {
	int number1=10,number2=3;
	int number3,number4;
	Division(number1,number2,&number3,&number4);
	printf("%d,%d",number3,number4);
	return 0;
}
void Division(int number1,int number2,int *dividend,int *remainder){
	*dividend= number1 / number2;
	*remainder= number1 % number2;
}
