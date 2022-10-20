// Write a program that asks the user for a number n and prints the sum of the numbers 1 to n

#include <iostream>
using namespace std;

int main(){

    int num(0), sum(0);

    cout << "Enter number\n";
    cin >> num;

    for (size_t i = 1; i <= num; i++)
    {
        sum = sum + i;
    }
    
    cout << sum << endl;

    return 0;
}