#include <iostream>

using namespace std;

int main() {

    int a,b,c,d,e;

    cout << "Enter 5 subs marks : ";
    cin >> a >> b >> c >> d >> e;

    if (a && b && c && d && e > 35) {
        cout << "jinkla tu \n";
        int sum = a+b+c+d+e;
        switch (sum)
        {
        case (sum > 250):
            cout << "Nigh bhai";
            break;
        
        default:
            break;
        }
    } else {
        cout << "ja bhurrrr";
    }
    



    return 0;
}