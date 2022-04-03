#include <stdio.h>


// QUESTION: Write C code that sum of array with pointer.
int main() {
	int array[]={10,20,30,40,50};
	int sum=0;
	int length=sizeof(array)/sizeof(array[0]);
	for(int i=0;i<length;i++){
		sum+=*(array+i);
	}
	printf("Sum: %d",sum);
}
