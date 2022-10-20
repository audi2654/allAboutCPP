//Prgram to copy string strings using arrays & pointer to strings

//#include <iostream>
#include <stdio.h>

void strcopy(char *t,char *s){
    while((*s = *t) != '\0'){
        //cout << *s;
        s++;
        t++;
    }
}

int main(){
    char *t = "T char string";
    char *s = "SSSSSSSSS";

    strcopy(t,s);

    return 0;
}

// while(*t != '\0'){
    //     cout << *t;
    //     t++;
    // }
    // cout << endl;

    // while(*s != '\0'){
    //     cout << *s;
    //     s++;
    // }
    // cout << endl;