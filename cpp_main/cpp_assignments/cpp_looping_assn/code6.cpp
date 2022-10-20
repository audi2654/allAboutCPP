// print UPPER CASE letters to there lower case 

#include <stdio.h>
#include <iostream>

using namespace std;

int main(){

    unsigned char ch;

    cout << "Enter any upper case letter : ";
    cin >> ch;

    for (char i = ch; i <= 'Z'; i++)
    {
        cout << "The lower case of "<< i << " is " << char(i+32) << endl;
    }

    // for (int i = ch; i <= 90 /* 'Z' */; i++)
    // {
    //     printf("The lower case of %c is %c \n", char(i), char(i+32));
    // }
    




    return 0;
}