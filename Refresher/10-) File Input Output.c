#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	FILE *fp;
	char c;
	fp=fopen("Ctext.txt","r");		
	/* r means read,w means if text is exist, delete inside of the text and write
	   a means append existing file anything.
	   If you want you can learn about this command deeply from Internet
	*/
	if (fp==NULL){
		printf("ERROR!");
		exit(1);
	}
	do{			// Do-while loop
		c=getc(fp);
		printf("%c",c);
	}
	
	while(c!=EOF);
	fclose(fp);
	
	return 0;
}
