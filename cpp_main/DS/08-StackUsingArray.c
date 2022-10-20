//Lec - 12
//Program to show working of STACK using ARRAY

//Stack is simple an array seen with a perspective of stack

#include <stdio.h>
#include <stdlib.h>

#define size 5

int stackArray[size];
int top = -1;

int isFull(){
	if(top == size - 1){
		return 1;
	}
	return 0;
}

void push(int data){
	if(isFull()){
		printf("\nStack Overflow\n");
		return;
	}
	top++;
	stackArray[top] = data;
}

int pop(){
	if(top == -1){
		printf("\nStack Underflow\n");
		return -1;
	}
	//stackArray[top] = 0;
	top--;
	return(stackArray[top + 1]);
}

void printStack(){
	printf("\nPrinting stack\n");
	for(int i = top; i >= 0; i--){
		printf("|%d|\n", stackArray[i]);
	}
}

int main(int argc, char* argv[], char** envp){
	char ch = 'y';
	do{
		printf("1.push()\n");
		printf("2.pop()\n");
		printf("3.printStack()\n");
		printf("4.isFull()\n");

		int choice;
		printf("Enter you choice : ");
		scanf("%d", &choice);

		switch(choice){
			case 1:
			{
				int data;
				printf("Enter data to push: ");
				scanf("%d", &data);
				push(data);
			}
			break;

			case 2:
			{
				int rm;
				rm = pop();
				//some issue in below if-else when you push 2 elements & pop 2 elements
				if(top != -1 && rm == -1){
					printf("Popped element : %d\n", rm);
				}else
				{
					printf("Popped element : %d\n", rm);
				}
			}	
			break;

			case 3:
				printStack();
				break;

			default:
				printf("Wrong choice\n");
				break;
		}

		printf("\nDo you want to continue ?: ");
		getchar();
		scanf("%c", &ch);

	}while(ch == 'y' || ch == 'Y');
	
	return(0);
}
