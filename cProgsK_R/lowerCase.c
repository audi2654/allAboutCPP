#include <stdio.h>
#include <ctype.h>

int main(){
    int c;

    while((c = getchar()) != EOF){
        putchar(tolower(c));
    }
    printf("\n");

    // while((c = getchar()) != EOF){
    //     putchar(toupper(c));
    // }
    // printf("\n");
    return 0;
}