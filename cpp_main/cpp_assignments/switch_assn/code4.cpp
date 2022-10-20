#include <iostream>

using namespace std;


int main() {

    int x = 2;

    switch(x << (x + 1)) {

        case 1: cout << "Case 1\n"; break;

        case 2: cout << "Case 2\n"; break;

        case 3: cout << "Case 2\n"; break;

        case 4: cout << "Case 4\n"; break;

        case 8: cout << "Case 8\n"; break; 
    
        default: cout << "Default case as answer is 16 of expression in switch\n"; break;
        // Default case will execute because the bitwise left shift operator will
        // shift the binary 0010 by 3 positions to left so 10000 which is equal to 16
        // also x = x * 2 raise to (x+1)
    }

    return 0;
}