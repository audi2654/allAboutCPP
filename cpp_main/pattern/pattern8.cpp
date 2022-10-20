/*
             *   
           * * *  
         * * * * * 
       * * * * * * *
*/


#include <iostream>
using namespace std;

int main() {

    for (size_t row = 1; row < 4; row++) {

        for (size_t space = 3; space >= 1; space--) {
            cout << " = ";
        }

        for (size_t j = 1; j <= row; j++) {
            cout << " * ";
        }
        cout << endl;
    }


    return 0;
}
