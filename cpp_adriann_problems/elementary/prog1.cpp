// Write a program that asks the user for their name and greets them with their name. 
// Modify the previous program such that only the users Alice and Bob are greeted with their names.

#include <iostream>
#include <string.h>
// or #include <cstring> 

using namespace std;


/*

class nameProg{

    char name;

    public:
        // Default constr gets added by g++ compiler

        char greet(char name[20]);
};

char nameProg::greet(char name[20]){

    char cmp = name;

    if (cmp == "alice"){
        cout << "Greetings " << name;
    } else {
        cout << "Nigh bhai ithun";
    }
}

int main(){
    char input;

    nameProg obj1;

    cout << "Enter name\n";
    cin >> input;

    obj1.greet(input);

    return 0;
}

*/

int main(){
    char name[20];
    char alice[] = "alice";

    cout << "Enter name\n";
    cin >> name;

    if(strcmp(name, alice) == 0){
        cout << "High Alice\n";
    } else {
        cout << "You are not ALice\n";
    }
    

    return 0;
}