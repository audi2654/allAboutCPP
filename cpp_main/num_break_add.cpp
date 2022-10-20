#include <iostream>
using namespace std;

int main(){

    int unum(0), num(0), rem(0), sum(0);

    cout << "Enter your number: ";
    cin >> unum;
    cout << endl;

    num = unum;

    while (num != 0)
    {   
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
        
        cout << "Value from while: " << sum << " " << num << endl;

    }
    
    cout <<endl << "Given number was: "<< unum << " & addition of it's literals is: "<< sum <<endl;

    return 0;   
}