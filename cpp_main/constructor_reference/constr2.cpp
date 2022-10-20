// Lecuture 37
//Program to show Default constructor


#include <iostream>
using namespace std;

class ghar{

    private:
        int tijori = 1;

    // here no constr is defined still compiler will add it for us
    // & all Instance variables will still be initialized 

};


int main(){

    ghar obj1;

    cout << "This program has a default constructor\n";


    return 0;
}