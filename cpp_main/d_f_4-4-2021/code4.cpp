#include <iostream>

int main(){

    int a(3), b(4), c(0);

    int z = a && b && a || c;

    // && has more precedence than ||

    // z = ((a && b) && a) || c
    // z = ((3 && 4) && a) || c
    // z = ((true) && 3) || c
    // z = (true) || c;
    // z = true
    // z = 1

    std::cout<<"Value of z: "<<z<<std::endl;    //1

    return 0;
}