//program to print even nums between 50-70

#include <iostream>
using namespace std;

int main(){

    int m, n;

    cout << "Enter any two number : ";
    cin >> m >> n;

    for(int i = m; i<= n; i++){
        if(i%2 == 0){
            cout << "The even number is : " << i << endl;
        }
    }


    return 0;
}