#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head,*tail=NULL;
int isEmpty(){
	if(head==NULL){
		return -1;
	}
	return 0;
}
void addNode(int data){
	struct node *newNode=(struct node*) malloc(sizeof(struct node));
	newNode -> data= data;
	newNode -> next= NULL;
	if(isEmpty()==-1){
		head=newNode;
		tail=newNode;
	}
	else{
		tail->next=newNode;
		tail=newNode;
	}
}
void print(){
	if(isEmpty()==-1){
		printf("Linked List is empty.");
	}
	else{
		struct node *curr=(struct node*) malloc(sizeof(struct node));
		curr=head;
		while (curr!=NULL){
			printf("%d \n",curr->data);
			curr=curr->next;
		}
	}
}
int deleteTail(){
	struct node *curr=(struct node*) malloc(sizeof(struct node));
	curr=head;
	while (curr->next->next!=NULL){
			curr=curr->next;
		}
		int retVal=curr->next->data;
		curr->next=NULL;
	return retVal;
}
int main(){
	addNode(1);
	addNode(2);
	addNode(3);
	addNode(4);
	addNode(5);
	addNode(6);
	addNode(7);
	deleteTail();
	print();
}

