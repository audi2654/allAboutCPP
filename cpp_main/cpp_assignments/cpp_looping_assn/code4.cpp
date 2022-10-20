// print all divisors of 50

#include <iostream>
using namespace std;

int main(){
    int m;

    cout << "Enter any number : ";
    cin >> m;

    for (size_t i = 1; i <= m; i++)
    {
        if (m%i == 0)
        {
            cout << "The divisor is : " << i << " & division is : " << m/i <<endl;
        }
        
    }
    

}