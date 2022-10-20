//Linked List - 1
//Program to show working of linked list & size of Node

#include <stdlib.h>
#include <stdio.h>

#pragma pack(1)     //used to tell compiler to compulsorily gives memory & do padding in multiples of power of 2 i.e 1,2,4,8,16,32
                    //so even if char has size 1 it will get size as 2,4,6,8,32 as you defined for better alignment & padding

struct Node{
    char ch;
    //float f;
    struct Node *next;      //for sizeof(struct Node) highest size variable is considered as base size & is given in that multiple
                            //so as to maintain the padding
};

int main(int argc, char** argv, char** envp){
    
    printf("%ld\n", sizeof(struct Node));   //gives size as 16bytes if struct Node *next; exists, 8 if float f exists
    return 0;
}
