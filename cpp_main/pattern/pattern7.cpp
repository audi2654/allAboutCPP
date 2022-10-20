// * * * * *
// * = = =
// * = =
// * =
// *

#include <iostream>

using namespace std;

int main() {

    cout << "Solution with FOR Loop" << endl;

    for (size_t i = 5; i >= 1; i--)
    {
        for (size_t j = 1; j <= i; j++)
        {
            if (i >= 1 && j == 1 || i == 5 && j >= 1)
            {
                cout << " * ";    
            } else {
                cout << " = ";
            }
            
        }
        cout << endl;
    }

    
    cout << endl << "Solution with WHILE Loop" << endl;

    int i(5);

    while (i >= 1) {
        int j(1);
        while (j <= i) {
            if (i >= 1 && j == 1 || i == 5 && j >= 1)
            {
                cout << " * ";    
            } else {
                cout << " = ";
            }
            j++;      
        }
        i--;
        cout << endl;
    }
    












    // int row(5), col(5);
    // int n = 0;

    // for (size_t i = row; i >= 1; i--) {
    //     for (int j = col-n; j >= 1; j--) {
    //         if (i == 5 && j >= 1 || j == 4 && i>=1) {
    //             cout << " * ";
    //         } else {
    //             cout << " = ";
    //         }
        
    //     }
    //     n++;
    //     cout << endl;      
    // }
    


    // int i = 1;
    // while (i <= 5) {

    //     int j = 5;
    //     while (j >= i) {

    //         if ((j<=1 && i<=5) || (i==1 && j<=5)) {
    //             cout << " * ";    
    //         } else {
    //             cout << " = ";
    //         }
            
    //         j--;
    //     }

    //     i++;    
    //     cout << endl; 

    // }

    // int i = 0;
    // int n = 0;
    
    
    // while(i<5){
    //  int j = 0;
    //  while(j<5-n){
    //     if((j==0 && i<5) || (i==0 && j<5))
    //     cout<< " * ";
    //     else
    //     cout << " = ";
    //     j++;
    //  }

    //  n++;
    //  i++;    
    //  cout << endl; 

    // }

    return 0;
}