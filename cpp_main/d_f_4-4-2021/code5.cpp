#include <iostream>

int main(){

    int a(3), b(4), c(0);

    int z = a && b && ++c;

    // pre increment has higher precedence over logical

    // z = ((a && b) && (++c))
    // z = ((a && b) && (1))
    // z = ((3 && 4) && 1)
    // z = (true) && 1
    // z = true
    // z = 1

    std::cout<<"Value of z: "<<z<<std::endl;    //1

    return 0;
}