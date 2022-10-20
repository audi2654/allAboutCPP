//Linked List - 1
//Program to show working of simple linked list

#include <stdlib.h>
#include <stdio.h>

struct Node{
    char ch;
    struct Node *next;
} *ptr1 = NULL;

struct Node *ptr2 = NULL;

int main(int argc, char** argv, char** envp){
    //Creating 1st node
    ptr1 = (struct Node *)malloc(sizeof(struct Node));
    ptr1->ch = 'A';
    ptr1->next = NULL;

    //Creating 2nd node
    ptr2 = (struct Node *)malloc(sizeof(struct Node));
    ptr2->ch = 'B';
    ptr2->next = NULL;

    //Linking node 1 to node 2
    ptr1->next = ptr2;

    //Creating 3rd node using same old ptr2
    ptr2 = (struct Node *)malloc(sizeof(struct Node));
    ptr2->ch = 'C';
    ptr2->next = NULL;

    //Linking node 1,2 to node 3
    ptr1->next->next = ptr2;

    //printing list
    while(ptr1 != NULL){
        printf("|%c|%p|->", ptr1->ch, ptr1->next);
        ptr1 = ptr1->next;
    }

    printf("\n");
    return 0;
}
