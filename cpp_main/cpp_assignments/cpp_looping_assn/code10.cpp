//print all number that divide 65

#include <iostream>

using namespace std;

int main() {

    int num;

    cout << "Enter a number : ";
    cin >> num;

    int i = 1;
    while(i <= num ) {
        if(num % i == 0) {
            cout << i << endl ;
        }  
        i++;
    }    

    return 0;
}