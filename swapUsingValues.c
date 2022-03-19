#include <stdio.h>
void swap(int x,int y);	// First we create a function. 
void main(){
    int x=10;
    int y=15;
    printf("x= %d y= %d \n",x,y);
    swap(x,y);		// We are calling swap function.
    
    printf("x= %d y= %d",x,y);
    void swap(int x,int y){	// We are saying to function what it do.
    int temp=x;
    x=y;
    y=temp;
}
}
	/* 
		THE DIFFERENCE BETWEEN USING POINTERS AND VALUES IS
		WHILE WE ARE USING VALUES, FUNCTION SHOULD BE IN MAIN FUNCTION
	*/
	