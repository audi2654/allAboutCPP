//Switch assn

#include <iostream>

using namespace std;

int main() {

    unsigned int a = 20;

    switch (~a) {                                   // ~(20) = -(20+1) = -21
        case 20: {
            cout << "Case 20 : " << a << endl;
            break;
        }

        case -20: {
            cout << "Case -20 : " << a << endl;     
            break;
        }

        case -21: {                                 //This will execute case ~(positive num) = +(num + 1)
            cout << "Case -21 : " << a << endl;
            break;
        }
            
        default:
            break;
    }



    return 0;
}