//Lecture - 64 Part A1 : Polymorphism - 1
//FUNCTION OVERLOADING (in C this same code won't work)

#include <iostream>

using std::endl;

void sum(int x, int y){
    printf("%d\n",x+y);
}

void sum(int x, int y, int z){
    printf("%d\n",x+y+z);
}

int main(){
    sum(10,20);
    sum(10,20,30);

    return 0;
}