#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	// Write the duplicates
	int arr[]={1,2,3,4,5,6,7,8,8,3};
	int length=sizeof(arr)/sizeof(arr[0]);
	for (int i=0;i<length;i++){
		for(int j=i+1;j<length;j++){
			if(arr[i]==arr[j]){
				printf("%d",arr[j]);

}

	return 0;
}
