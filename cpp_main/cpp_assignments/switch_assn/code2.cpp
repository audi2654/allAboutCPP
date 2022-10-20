#include <iostream>

using namespace std;

int main() {
    int x = 10;
    int y = 20;

    switch(x) {             //error cause in switch x is expression & int is const so x will never
        case x:     //case with char must be written as case 'x'
            cout << "Case 10 : " << x << endl ;
    
        case y:
            cout << "Case 20 : " << y << endl ;
    }


    return 0;
}