// 25 25 25 25 25
// 16 16 16 16
// 9  9  9
// 4  4  
// 1


#include <iostream>

using namespace std;

int main() {

    int row, col;

    cout << "Enter row : ";
    cin >> row;

    cout << "Enter col : ";
    cin >> col;

    cout << endl;

    for(int i = row; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << i*i << " ";
        }
        cout << endl;
    }
    return 0;
}
