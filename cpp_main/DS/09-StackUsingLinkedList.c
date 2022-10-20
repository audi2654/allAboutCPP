//Lec - 14
//Program to show working of STACK using LINKED LIST

//Stack is simple an array seen with a perspective of stack

#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node *next;	//self referential structure pointer of type Node 
} *head = NULL;		//global pointer var head of type Node

void push(int x){	//addAtFirst() in LinkedList using as push() in Stack
	struct Node *newNode = (struct Node*) malloc(sizeof(struct Node));
	
	if(newNode == NULL){
		printf("Memory full, exiting\n");
		exit(1); 	//abortive exit
	}

	newNode->data = x;
	newNode->next = NULL;

	if(head == NULL){			//it means there are 0 nodes	use here isFull() function here
		head = newNode;
	} else{						//it means there is atleast 1 node in stack/linked list
		newNode->next = head;
		head = newNode;
	}
}

int pop(){		//deleteAtFirst() in LinkedList using as pop() in Stack
	struct Node *tempNode = head;	//assigning current Node head to tempNode

	if(head/*or tempNode*/ == NULL){		//use stack isEmpty() here 
		printf("Stack underflow");
		return -1;							//PROBLEM here -1 is returned as popped element when stack is actually empty or underflowed
	}

	int x = tempNode->data;			//storing data of current head
	
	head = head->next;	//moving head position to next node

	free(tempNode);		//freeing previous head or previous node

	//instead of returning we can also print popped data here directly
	return x;
}

void printStack(){
	struct Node *tempNode = head;
	
	printf("\nPrinting Stack:\n");
	while(tempNode != NULL){			//checking if current node i.e head(tempNode) is pointing to NULL or not use isEmpty() here
		printf("%d \n", tempNode->data);
		tempNode = tempNode->next;
	}
	printf("\n");
}

void main(){
	push(10);
	push(20);
	push(30);

	printf("Popped elemenet : %d\n", pop());
	printStack();
	printf("Popped elemenet : %d\n", pop());
	printf("Popped elemenet : %d\n", pop());
	printStack();
}

//MANY OTHER operations left for stack using Linked List, do it yourself