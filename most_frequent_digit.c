#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int most_frequent_digit(int numbers){
    int arr[10]={0,0,0,0,0,0,0,0,0,0};
	int length=sizeof(arr)/sizeof(arr[0]);
	while (numbers>=1){
        int digit = numbers % 10 ;
        numbers /= 10;
        arr[digit]++;
    }
    
    int mod=0, index=0;
    for(int i=0;i<length;i++){
        if (mod<arr[i]){
            mod=arr[i];
            index=i;
        }
    }
    return index;
}

int main(int argc, char *argv[]) {
	int mod1=most_frequent_digit(1231222);
	printf("%d",mod1);
	return 0;
}
