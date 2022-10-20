//Program about an Character Pointers, Arrays & Functions in C

#include <iostream>

using namespace std;

int main(){
    int i = 0;
    int j(i);
    char arrMsg[] = "This is array of characters";
    const char *ptrMsg = "This is a ptr to a string constant";

    while(*ptrMsg != '\0'){
        cout << *ptrMsg;
        ptrMsg++;
    }
    cout << endl;

    while(arrMsg[j] != '\0'){
        cout << arrMsg[j];
        j++;
    }
    cout << endl;

    return 0;
}