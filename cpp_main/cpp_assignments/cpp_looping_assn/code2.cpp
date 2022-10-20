// Code for ODD numbers between 20 - 40

#include <iostream>
using namespace std;

int main(){

    int m, n;

    cout << "Enter 20 & 40 number : ";
    cin >> m >> n;

    for (int i = m; i <= n; i++){
        if (i%2 != 0){
            cout << "The odd number is : " << i << endl;
        }
    }


    return 0;
}