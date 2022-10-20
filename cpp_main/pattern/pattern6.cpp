// *
// = =
// * * *
// = = = =
// * * * * *




#include <iostream>

using namespace std;

int main() {

    int i = 1;

    while (i <= 5){
        int j = 1;
        while (j <= i) {  
        if (i == 2 || i == 4) {
            cout << " = ";
        } else {
            cout << " * ";
        }


           // cout << " * ";
            j++;
        }
        i++;
        cout << endl;
    }
    




    return 0;
}