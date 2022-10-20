//print alternate numbers in reverse

#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

    int num(15), range(30), i;

    cout << "Enter any number : ";
    cin >> num;

    cout << "Enter range : ";
    cin >> range;

    i = range;
    while(i > num){
        
        cout << i << endl;
        i = i-2;
    }

    cout << endl << "For Loop" << endl << endl;

    for(i = range; i > num;) {
        cout << i << endl;
         i = i-2;
    }

}