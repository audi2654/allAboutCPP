#include <iostream>
using namespace std;

int main(){

    int i, n(0), sum(0);

    cout << "Give 3 as input : ";
    cin >> n;

    for(i = 1; i <= 10; i++){
        sum = n * i;
        cout << " 3 x " << i << " = " << sum << endl;
    }



    return 0;
}