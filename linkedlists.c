#include<stdio.h>
#include<stdlib.h>


struct Node {
	int data;
	struct Node* next;
};

void printList(struct Node* n){	
	while(n != NULL){
		printf("%d\n",n -> data);
		n = n -> next;
	}
}

void addNode(struct Node* n, int num){

	struct Node* temp = n;
    while(temp != NULL){
		temp = temp -> next;
		//printf("%d\n",temp -> data);
    }
	
	n -> next = temp;
	temp -> data = num;
	temp -> next = NULL;
}
	
int main(){
	printf("Test");
    struct Node* head = NULL;

	head = (struct Node*)malloc(sizeof(struct Node));

	head -> data = 1;
    head -> next = NULL;
	
	addNode(head,4);

	printList(head);

    return 0;
}
