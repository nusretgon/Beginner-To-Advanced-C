#include <stdio.h>
int main(){
	int array[]={10,20,30,40,50};
	int sum=0;
	int i;
	float average;
	int length=sizeof(array)/sizeof(array[0]);
	printf("The length of array : %d \n",length);
	for (i=0;i<length;i++){
		sum+=array[i];
	}
	average=sum/length;
	printf("The sum of the array: %d \n",sum);
	printf("The average of the array : %f",average);
}
