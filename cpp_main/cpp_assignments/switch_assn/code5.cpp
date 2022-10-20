#include <iostream>

using namespace std;

int main() {

    int a;
    int b = -1; 

    switch(a = (sizeof(int) > b)) 
    // here this switch expression evaluates to false i.e 0 because
    // in c/c++ while comparing signed & unsigned int, the signed int gets
    // converted into unsigned int i.e all any int will get converted into 
    // its binary unsigned int value hence -1 turns out to be very very big unsigned int
    // hence any number before it will always be small
    
    {

        case 1: cout << a-b << " True :\n"; break;

        case 0: cout << a-b << " False\n"; break;
    }



    return 0;
}