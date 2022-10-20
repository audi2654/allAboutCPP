//Reference
//Simple prog to see how reference works

#include <iostream>

class ref_demo{


};

int main(){

    // int n = 99;
    // int y = 56;

    // int &ref = n;

    // std::cout << y << " " << n << " " << ref << std::endl;

    // ref = y;

    // std::cout << y << " " << n << " " << ref << std::endl;

    int value1{ 5 };
    int value2{ 6 };

    int& ref{ value1 }; // okay, ref is now an alias for value1

    std::cout << value1 << " " << value2 << " " << ref << std::endl;

    ref = 9999999; // assigns 6 (the value of value2) to value1 -- does NOT change the reference!

    std::cout << value1 << " " << value2 << " " << ref << std::endl;

    return 0;
}