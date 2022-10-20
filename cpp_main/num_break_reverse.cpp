#include <iostream>
using namespace std;

int main(){

    int rem(0), num(0), rnum(0);

    cout << "Enter a number to reverse: ";
    cin >> num;
    cout << endl;

    while(num != 0){

        rem = num % 10;
        rnum = rnum*10 +rem;
        cout << rem;
        num = num / 10;
    }
    cout <<endl << rnum << endl;
    return 0;
}