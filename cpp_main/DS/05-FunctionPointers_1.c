//Lec - 5 Function Pointers - 1
//Program to show passing of struct (made without malloc i.e in stack memory) in functions

#include <stdio.h>
void* malloc(size_t);   //instead of #include <stdlib.h>
#include <string.h>

struct Player{
    char pName[20];
    int jerNo;
    char cName[20];
    float sal;
};

void passCric(struct Player* cric){
    printf("%s\n%i\n%s\n%f\n", cric->pName, cric->jerNo, cric->cName, cric->sal);
}

void passFb(struct Player football){
    printf("%s, %i, %s, %f ", football.pName, football.jerNo, football.cName, football.sal);
}

void passSingleMem(char array[]){
    printf("%s", array);
}

void myStrCpy(char array[], char* str) /* (char* array, char* str) also works*/ {
    int i = 0;
    while(*str != '\0'){
        array[i] = *str;
        i++;
        str++;

        /*
        *array = *str;
        array++;
        str++;
        */
    }
}

int main(int argc, char** argv, char* envp[]){
    //Method - 1
    /*
    struct Player cricket = {"AAA", 8, "AAAAAA", 500};
    struct Player football = {"BBB", 7, "BBBBBB", 400};

    //creating struct ptrs to pass to funcs
    struct Player *cricPtr = &cricket;
    struct Player *fbPtr = &football; 

    passCric(cricPtr);
    printf("\n");

    passFb(football);
    printf("\n");

    passSingleMem(cricket.pName);
    printf("\n");

    passSingleMem((*cricPtr).pName);  //this works cause internally array declared paratmeter of func() is of ptr type
    printf("\n");

    printf("%li\n", sizeof(cricket));
    printf("%ld\n", sizeof(struct Player));
    */

    //Method - 2
    void *vptr = malloc(sizeof(struct Player));
    struct Player *cricPtr = (struct Player *)vptr;

    myStrCpy(cricPtr->pName, "QQQ");
    cricPtr->jerNo = 222;
    strcpy(cricPtr->cName, "India");
    cricPtr->sal = 500;

    passCric(cricPtr);

    return(0);
}
