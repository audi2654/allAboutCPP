//Lec - 11
//Program to show working of SINGLY CIRCULAR LINKED LIST

//if someone asks to use only 1 ptr instead of head & tail both, let go & don't create head 
//use tail->next = tempNode to traverse like head, because usually tail gives us the matching condition

//many functions have lots of small inner test cases to handle, use if-else to handle them

#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node *next;
};

struct Node *head = NULL;
struct Node *tail = NULL;

void printList(){
    struct Node *tempNode = head;

    do{
        if(tempNode->next != head){
            printf("|%d|->",tempNode->data);
        }else{
            printf("|%d|",tempNode->data);
        }

        tempNode = tempNode->next;
    }while(tempNode != head);
}

void countOfNodes(){
    struct Node *tempNode = head;
    int cnt = 0;

    do{
        tempNode = tempNode->next;
        cnt++;
    }while(tempNode != head);

    printf("Count of Nodes : %d", cnt);
}

void addAtFirst(int data){
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = newNode;

    newNode->next = head;
    tail->next = newNode;
    head = newNode;
}

void addAtLast(int data){
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = newNode;

    newNode->next = head;
    tail->next = newNode;
    tail = newNode;
}

void addAtPos(int data, int pos){
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = newNode;

    struct Node *tempNode = head;
    while(pos - 2){
        tempNode = tempNode->next;
        pos--;
    }

    newNode->next = tempNode->next;
    tempNode->next = newNode;
}

void deleteAtBegin(){
    head = head->next;
    free(tail->next);
    tail->next = head;
}

void deleteAtEnd(){
    struct Node *tempNode = head;

    while(tempNode->next->next != head){
        tempNode = tempNode->next;
    }

    tempNode->next = head;
    free(tail);
    tail = tempNode;
}

void deleteAtPos(int pos){
    struct Node *tempNode = head;
    
    while(pos - 2){
        tempNode = tempNode->next;
        pos--;
    }

    struct Node *tempNode2 = tempNode->next;
    tempNode->next = tempNode2->next;
    free(tempNode2);
}

void reverseInPlace(){     //swap pointers (i.e next)
    //var decl.
    struct Node *tempNode1 = head;
    struct Node *tempNode2 = NULL;
    struct Node *tempNode3 = tail;

    //no way to understand this without drawing & dryrunning
    printf("\nReverse in place : ");
    while(tempNode2 != head)
    {
       tempNode2 = tempNode1->next;
       tempNode1->next = tempNode3;
       tempNode3 = tempNode1;
       tempNode1 = tempNode2;
    }

    head = tempNode3;
    tail = tempNode1; //OR tail = temp2; also works
}


int main(int argc, char* argv[], char** envp){
	struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = 10;
	newNode->next = newNode;

	head = newNode;
	tail = newNode;

	char ch;

	do{
		printf("----Singly Circular List----\n");
		printf("1.printList()\n");
		printf("2.countOfNodes()\n");
		printf("3.addFirst()\n");
		printf("4.addLast()\n");
		printf("5.addAtPos()\n");
        printf("6.deleteAtBegin()\n");
        printf("7.deleteAtEnd()\n");
        printf("8.deleteAtPos()\n");
        printf("9.reverseInPlace()\n");

		int choice;

		printf("Enter choice : ");
		scanf("%d",&choice);

		switch(choice){
			case 1:
				printList();
				break;
            
            case 2:
                countOfNodes();
                break;

            case 3:
                {
                    int data;
                    printf("Enter node data : ");
                    scanf("%d",&data);

                    addAtFirst(data);
                    printList();
                }
                break;
            
            case 4:
                {
                    int data;
                    printf("Enter node data : ");
                    scanf("%d",&data);

                    addAtLast(data);
                    printList();
                }
                break;

            case 5:
                {
                    int data, position;
                    printf("Enter node position : ");
                    scanf("%d",&position);

                    printf("Enter node data : ");
                    scanf("%d",&data);

                    addAtPos(data, position);
                    printList();
                }
                break;

            case 6:
                deleteAtBegin();
                printList();
                break;

            case 7:
                deleteAtEnd();
                printList();
                break;

            case 8:
                {
                    int position;
                    printf("Enter node position to delete : ");
                    scanf("%d",&position);

                    deleteAtPos(position);
                    printList();
                    break;
                }
            
            case 9:
                reverseInPlace();
                printList();
                break;

			default:
				printf("Wrong choice\n");
				break;
		}

		printf("\nDo you want to continue ? Y/N : ");
		getchar();  //used to consume '\n' character
        scanf("%c",&ch);

	}while(ch == 'y' || ch == 'Y');

	return(0);
}
