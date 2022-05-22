#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	struct Student{
		char name[20];
		int stdId;
		int grades[5];
	};
	struct Student student1;
	strcpy(student1.name,"Nusret");
	student1.stdId=971;
	student1.grades[5];
	int std1Exams=5;
	
	printf("%d:%s: \n",student1.stdId,student1.name);

	for(int i=0;i<std1Exams-1;i++){
		scanf("%d \n",&student1.grades[i]);
	}


	for(int j=0;j<std1Exams;j++){
		printf("%d \n",student1.grades[j]);
	}

	return 0;
}
