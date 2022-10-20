#include <iostream>

using namespace std;

int main() {

    float a = 5.2;

    switch ((int)a)
    {
    case 1: {
        cout << "Case 1\n"; 
        break;
    }

    case 5: {                   //Due to type casting this will execute 5.2 will be round off to 5
        cout << "Case 5\n";  
        break;
    }

    case 2: {
        cout << "Case 2\n"; 
        break;
    }
        
    default:
        cout << "Default case\n";
        break;
    }



    return 0;
}