//Linked List - 2
//Program to show working of singly linked list with functions

#include <stdlib.h>
#include <stdio.h>

//global variable decl.
struct Node{
    char ch;
    struct Node *next;
} *head = NULL; //global head

struct Node *node1 = NULL;

//global function decl. & definition
void printNode_v1(){
    printf("\n");

    struct Node *tempNode = head;
    while(tempNode != NULL){
        if(tempNode->next != NULL){
            printf("|%c|->", tempNode->ch);
        } else {
            printf("|%c|", tempNode->ch);
        }
        tempNode = tempNode->next;
    }

    tempNode = NULL;
    free(tempNode);

    printf("\n");
}

//variations of functions
void printNode_v2(struct Node **head){
    printf("\n");

    struct Node *tempNode = *head;
    while(tempNode != NULL){
        if(tempNode->next != NULL){
            printf("|%c|->", tempNode->ch);
        } else {
            printf("|%c|", tempNode->ch);
        }
        tempNode = tempNode->next;
    }

    tempNode = NULL;
    free(tempNode);

    printf("\n");
}

void printNode_v3(struct Node **head){      //causing some errors
    printf("\n");
    struct Node **preserveNode = head;
    struct Node **tempNode = head;
    while((*tempNode) != NULL){
        printf("|%c|->", (*tempNode)->ch);
        (*tempNode) = (*tempNode)->next;
    }

    head = preserveNode;
    printf("Inside v3\n");
    printf("\n");

    tempNode = NULL;
    free(tempNode);
}

void printNode_v4(struct Node *h){
    printf("\n");

    struct Node *tempNode = h;
    while(tempNode != NULL){
        if(tempNode->next != NULL){
            printf("|%c|->", tempNode->ch);
        } else {
            printf("|%c|", tempNode->ch);
        }
        tempNode = tempNode->next;
    }
    printf("\n");

    tempNode = NULL;
    free(tempNode);
}

void addAtBegin(char beginChar){
    //creating temp node & assigning values
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->ch = beginChar;
    //since we want this node at beginning of LL, we immediately create a link 
    //between current 1st node & this now newly created node, so this new node becomes 1st node
    //we do this by assigning the value of head(i.e addr of current 1st node) 
    //in next var of this newly created 1st node as below, so link to current 1st node is not lost & chain is preserved
    temp->next = head;

    //now since link is created between current 1st node & this new node, we update value in head & 
    //assign the addr of this new node to head
    //assigning addr of any node to head signifies that the node is 1st in list & is at the head
    head = temp;

    temp = NULL;
    free(temp);
}

void addAtBegin_v2(char beginChar, struct Node **h){
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->ch = beginChar;
    temp->next = NULL;
    
    temp->next = *h;

    *h = temp;

    temp = NULL;
    free(temp);
}

void addAtEnd(char endChar){
    //creating a temp node & assigning values
    struct Node *trav = (struct Node *)malloc(sizeof(struct Node));
    trav = head;
    while(trav->next != NULL){
        trav = trav->next;
    }

    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    trav->next = newNode;

    newNode->ch = endChar;
    newNode->next = NULL;

    trav = NULL;
    free(trav);
}

void addAtEnd_v2(char endChar){
    //creating a temp node & assigning values
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->ch = endChar;
    newNode->next = NULL;

    struct Node *tempTraverse = (struct Node *)malloc(sizeof(struct Node)); //OR
    //struct Node *tempTraverse = head;
    tempTraverse = head;
    while(tempTraverse->next != NULL){
        tempTraverse = tempTraverse->next;
    }
    
    tempTraverse->next = newNode;

    tempTraverse = NULL;
    free(tempTraverse);
}

void addAtPosition(int pos){
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->ch = '^';
    newNode->next = NULL;

    struct Node *tempNode = head;

    //while(pos - 2)    //works
    while(pos > 2)      //but condition is better
    {
        tempNode = tempNode->next;
        pos--;
    }

    // newNode = tempNode->next;
    // tempNode->next = newNode->next;

    newNode->next = tempNode->next;
    tempNode->next = newNode;
    
    tempNode = NULL;
    free(tempNode);

    //for only 1 node to add at last position is handled here because remember
    //the total count of node becomes current node count + 1 new node to add which is equal to position to add
    //so the above while loop stops right at the last node instead of 2nd last node only in this partiular case
    //but ideally addAtEnd() should be used here instead by using if-else

    //in this function 0th & 1st position as same 1st position, use if-else to handle it
}

void deleteAtBegin(){
    struct Node *tempNode = head;

    head = head->next;

    free(tempNode);

    printf("\n------- %c -------\n",tempNode->ch);
}

void deleteAtEnd(){
    struct Node *tempNode = head;

    while(tempNode->next->next != NULL){
        tempNode = tempNode->next;
    }

    free(tempNode->next);
    printf("\n-deleteAtEnd : %p-\n",tempNode->next);

    tempNode->next = NULL;
    printf("\n-deleteAtEnd after NULLing : %p-\n",tempNode->next);
    printf("\n-deleteAtEnd : ch is %c-\n",tempNode->ch);
}

void deleteAtPos(int pos){
    struct Node *tempNode = head;

    while(pos > 2){
        tempNode = tempNode->next;
        pos--;
    }

    struct Node *tempNode2 = tempNode->next;

    printf("\n-------\n");
    printf("\n****%p****",tempNode2->next);
    printf("\n****%c****\n",tempNode2->ch);
    printf("\n-------\n");

    //making link between node earlier to node-to-be-deleted & node next to it
    //& separating out node-to-be-deleted of whole linked list to delete
    //below 2 lines work exactly similar to each other
    //tempNode->next = tempNode->next->next;
    tempNode->next = tempNode2->next;

    free(tempNode2);

    //if pos = count of nodes, use deleteAtEnd using if-else
}

int countNode(){
    printf("\n");

    struct Node *temp = head;
    int count = 0;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }

    printf("Count of Nodes : %d", count);
    printf("\n");

    temp = NULL;
    free(temp);

    return count;
}

void reverseSwap(){     //swap data
    //var decl.
    struct Node *tempNode1 = head;
    struct Node *tempNode2 = head;

    int cnt = countNode();
    int i = 0;

    //need to traverse only cnt/2 i.e half of total nodes using tempNode1 to reverse list 
    while(i < (cnt / 2)){

        //to swap element we always have to come back 1 node from last node after every swap operation
        //so in 1st iteration we traverse till last node from head & for next iterations we traverse from head
        //till last node - i, we use i here because i is incrementing by 1 after every iteration & we are 
        //just taking advantage of what we have already declared
        //& we declare num here, simply to stop the while loop
        int num = 1;
        while(num < (cnt - i)){
            tempNode2 = tempNode2->next;
            num++;
        }

        int swap = 0;

        //tempNode2 is pointing to last node now, so put its data in swap variable
        swap = tempNode2->ch;

        //tempNode1 is pointing to node from starting side i.e from head's end of linked list
        //so we store data of tempNode1 in tempNode2
        tempNode2->ch = tempNode1->ch;

        //now we store data from swap(i.e data from lastnode tempNode2) in tempNode1
        tempNode1->ch = swap;

        //since we always want tempNode2 to stop 1 node behind of current last node in 1 by 1 reverse order,
        //we have to start its traversing again & always from head
        tempNode2 = head;

        //now we also want our tempNode1 to move to next node to swap from starting side of linked list
        //we just assign ptr of next node to current tempNode ptr
        tempNode1 = tempNode1->next;

        //to stop out while loop after cnt/2 i.e half of total number nodes we increment i by 1 after each iteration 
        i++;
    }
}

void reverseInPlace(){     //swap pointers (i.e next)
    //var decl.
    struct Node *tempNode1 = head;
    struct Node *tempNode2 = NULL;
    struct Node *tempNode3 = NULL;

    //no way to understand this without drawing & dryrunning
    printf("\nReverse in place : "); 
    while(tempNode1 != NULL){
       tempNode2 = tempNode1->next;
       tempNode1->next = tempNode3;
       tempNode3 = tempNode1;
       tempNode1 = tempNode2;
    }

    head = tempNode3;
}

int main(int argc, char** argv, char** envp){
    //Creating 1st node
    node1 = (struct Node *)malloc(sizeof(struct Node));
    node1->ch = 'A';
    node1->next = NULL;

    //Assigning node1 ptr value to head ptr value
    head = node1;

    //printing list
    printNode_v1();

    //node2
    addAtBegin('B');
    printNode_v1();

    addAtBegin('C');
    addAtBegin('D');
    addAtBegin('E');
    addAtBegin('F');
    printNode_v1();

    addAtEnd('b');
    addAtEnd('c');
    addAtEnd('d');
    printNode_v2(&head);

    addAtEnd('f');
    //printNode_v3(&head);      //causing some error, head addr is changing in this function but no warning or error shown
    printNode_v1();

    addAtEnd('x');
    struct Node *h = head;
    printNode_v4(h);


    addAtBegin_v2('G', &head);
    printNode_v4(head);

    addAtBegin_v2('H', &head);
    addAtEnd_v2('y');
    printNode_v4(head);

    countNode();

    addAtPosition(15);
    printNode_v1();

    deleteAtBegin();
    printNode_v1();

    deleteAtEnd();
    printNode_v1();

    deleteAtPos(7);
    printNode_v1();

    reverseSwap();
    printNode_v1();

    reverseInPlace();
    printNode_v1();

    printf("\n");
    return 0;
}
