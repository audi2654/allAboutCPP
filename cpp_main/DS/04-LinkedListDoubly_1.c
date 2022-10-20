//Lec- 9 Doubly Linked List - 1
//Program to show working of doubly linked list with functions

//INCOMPLETE

#include <stdio.h>
#include <stdlib.h>

struct Node{
    struct Node *prev;
    int data;
    strcut Node *next;
};

//declaring head globally
struct Node *head = NULL;

void printList(){
    struct Node *tempNode = head;

    while(tempNode->next != NULL){
        printf("|%d|->", tempNode->data);
        tempNode = tempNode->next;
    }
}

int main(int argc, char** argv, char* envp[]){
    //1st node
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    
    int data;
    printf("Enter data : ");
    scanf("%d", &data);

    newNode->prev = NULL;
    newNode->data = data;
    newNode->next = NULL;

    head = newNode;

    printList();

    return(0);
}