#include <stdio.h>

int main( ){
	int a,*ap;
	
	*ap=a;    // True they are value.
	*ap=&a	  // False. *ap value but &a is adreess
	ap=a;	  // False. ap is adreess but a is value.
	ap=&a;	  // True they are adreess.
}
