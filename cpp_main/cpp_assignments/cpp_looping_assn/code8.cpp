//print alphabets in reverse order

#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

    unsigned char ch;

     cout << "Enter any Letter : ";
     cin >> ch;
    // printf("Enter any alphabet : ");
    // scanf("%c", ch);

    while(ch <= 122 && ch >= 97 || ch <= 90 && ch >= 65) {
        cout << ch << endl;
        ch--;
    }



    return 0;
}