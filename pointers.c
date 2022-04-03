#include <stdio.h>
#include <stdlib.h>

// Learning pointers
int main() {
	char c,*cp;
	int i=10,*ip;
	float f,*fp;
	double d,*dp;
	ip=&i;								   // We are connecting variable i adreess to ip.
	printf("The value of i: %d \n",*ip);  // When we *ip we will get 10.
	printf("The adreess of i: %d \n",ip); // But this time we will get adreess of i.

//---------------------------------------------------------------------------------------------
	
	int array[]={0,0,0};
	int *a;								  //We are creating a pointer
	a=&array[1];						  // Connect to array[1]
	*a=7;								  // Reinitialize array[1] using adreess of array[1]
	printf("%d \n",array[1]);
	
//---------------------------------------------------------------------------------------------

	int ia[3]={0,1,2,3,4,5,8};							 
	int *iap=&ia[0];
	
	// So far so good	
	*(iap+2)=5;			// ?	In memory array's elements should keep consecutive.
	printf("%d",ia[2]);		// So we can access array elements to use one pointer.
	// Also we can use like that.
	printf("%d",*(ia+2));
	

	
}
