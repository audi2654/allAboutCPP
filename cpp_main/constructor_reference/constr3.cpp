// Lecture 38
// Program to show Parameterized & No Argument Constructor

#include <iostream>
using namespace std;

class building{
    int dpt = 5;

    public:
        building(){
            cout << "This is No Argument constr called by dpt1\n";
        }

        building(int x){
            cout << "This is Parameterized constr which takes an argument/parameter while object creation by dpt2.\n";
        }
    
        void attend();
};

void building::attend(){
    cout << "This is just a Member Funtion with Scope Resolution method\n";
}

int main(){

    building dpt1;          //calls No Arg constr
    building dpt2(10);      //calls Para constr

    cout << endl;

    cout << "Func call by dpt1:\n";
    dpt1.attend();

    cout << endl;

    cout << "Same Func call by dpt2:\n";
    dpt2.attend();            
    return 0;
}