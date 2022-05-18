#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int a=10;
	if(a<5){
		printf(a+" is smaller than 5");
	}
	else if (a>5){			// We can increase number of else if, if we want.
		printf(a+" is greater than 5");
	}
	else{
		printf(a+ " = 5");
	}
	
	
}
