// =  *  *  =  
// *  *  *  *  
// *  *  *  * 
// =  *  *  =



#include <iostream>

using namespace std;

int main () {

    int row, col;

    cout << "Enter row : ";
    cin >> row;

    cout << "Enter col : ";
    cin >> col;
    
    int x = 1;

    for (int i = 1; i <= row; i++)
    {
        // for (int j = 1; j <= col; j++)
        // {
        //     if (i == 1 && j == 1 || i == row && j == 1 || i == 1 && j == col || i == row && j == col)
        //     {
        //         cout << " = ";
        //     }
        //     else {
        //         cout << " * ";
        //     }
        // }

        for (int j = 1; j <= col; j++)
        {
            if ((i == 1 || i == row) && (j == 1 || j == col))
            {
                cout << " " << x << " ";
                x++;
            }
            else {
                cout << " * ";
            }
        }

        
        cout << endl;
    }
    
    return 0;
}