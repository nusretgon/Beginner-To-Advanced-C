#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void fact(int,int *);
int main(int argc, char *argv[]) {
	int fac;
	int a=5;
	factorial(a,&fac);
	printf("%d : %d",a,fac);
	return 0;
}
void factorial(int a, int *f){
	*f=1;
	for(int i=2;i<=a;i++){
		*f*=i;
	}
}
