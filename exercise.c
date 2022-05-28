#include <stdio.h>
#include <stdlib.h>
/*
Calculate Average of the Marks of 5 Students with
using struct (HINT: struct has student name and mark).
*/
struct Student{
	char name[20];
	int mark;
};
int main(){
	struct Student list[5];
	float average=0;
	for(int i=0;i<5;i++){
		printf("Enter student %d name:",i+1);
		scanf("%s",&list[i].name);
		printf("Enter student %d mark:",i+1);
		scanf("%d",&list[i].mark);
	}
	for(int j=0;j<5;j++){
		average+=list[j].mark;
	}
	printf("Average of marks = %.2f",average/5);
}
