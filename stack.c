#include <stdio.h>
#include <stdlib.h>

// Stack Struct
struct node {
char letter;
struct node *next;
};

struct node *top = NULL;

int isEmpty(){
	if (top==NULL){
		return 0;
	}
	else{
		return 1;
	}
}
void stack_push(char letter){
    if(isEmpty()==0){
        struct node *new = (struct node *)malloc(sizeof(struct node));
        new->letter = letter ;
        new->next = NULL;
        top = new;
    }
    else {
        struct node *new = (struct node *)malloc(sizeof(struct node));
        new->letter = letter ;
        new->next = top;
        top = new;
    }
}

void print_stack(){
    if(isEmpty()==0){
        printf("Stack empty !.");
    }
    struct node *index = top;
    while(index!=NULL){
        printf("%d| ", index->letter);
        index = index->next;
    }
}
char stack_top(){
	return top->letter;
}

char stack_pop() {
    if(isEmpty()==0){
        return "Stack is empty.";
    }
    
	char popped=top->letter;
    top = top->next;

    return popped;
}