//Lec - 5 Function Pointers - 2
//Program to show passing of struct (made without malloc i.e in stack memory) in functions in CPP

//CPP code - use g++ to compile

#include <iostream>

struct Player{
    char pName[20] = "MSD";
    int jerNo = 7;
    char cName[20] = "India";
    float sal = 500.00;
};

void passCricPtr(Player *cric){
    printf("%s\n%i\n%s\n%f\n", cric->pName, cric->jerNo, cric->cName, cric->sal);
}

void passCric(Player cric){
    printf("%s\n%i\n%s\n%f\n", cric.pName, cric.jerNo, cric.cName, cric.sal);
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
    //Method - 1 (Copying)
    Player cric;
    passCric(cric);

    std::cout << "Size of struct Player is : " << sizeof(Player) << std::endl;

    //Method - 2 (using ptr)
    std::cout << std::endl;
    Player *cric2 = new Player();
    passCricPtr(cric2);


    return 0;
}
