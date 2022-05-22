#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	// Write the duplicates
	int arr[]={1,2,3,4,5,6,7,8,8,3};
	int length=sizeof(arr)/sizeof(arr[0]);
	int sum=0;
	int *ap=arr;
	for (int i =0;i<length;i++){
		sum+=*(ap+i); 
	}
	printf("%d",sum);
	return 0;
}
