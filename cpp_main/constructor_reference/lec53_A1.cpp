//Lec 53: Global vs Static Variable Part - 1

#include <iostream>

static int x = 10;  //Static Global with Internal Linkage (File Scope)
int y = 20;

void fun();         //Non-Class Func are by default Global with External Linkage (Global Scope)

int main(){

    std::cout << "In file 1 x: " << x << std::endl;
    std::cout << "In file 1 y: " << y << std::endl;
    fun();
    
    return 0;
}