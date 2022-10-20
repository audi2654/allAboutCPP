//Lec 53: Global vs Static Variable Part - 2

#include <iostream>

void fun(){                   //Non-Class Func are by default Global with External Linkage (Global Scope)                    
    
    //extern int x;           //ERROR because x is declared as static
    extern int y;

    std::cout << "In file 2 Global Function" << std::endl;
    //std::cout << "In file 2 x: " << x;  //ERROR
    std::cout << "In file 2 y: " << y << std::endl;
}