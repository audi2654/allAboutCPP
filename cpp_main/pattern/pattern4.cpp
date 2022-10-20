// A  2  C  4  E
// F  7  H  9  
// J 11  L  
// M 14
// O


#include <iostream>

using namespace std;

int main () {
    
    char ch = 'A';
    int num = 1;

    int outer = 1;
    while(outer <= 5) {

        int inner = 5;
        while(inner >= outer) {
    
            if(inner == 2 || inner == 4) {
                cout << num << " ";
            }
            else {
                cout << ch << " ";
            }
            
            inner--;
            ch++;
            num++;
        }
        cout << endl;
        outer++;
    }


    return 0;
}