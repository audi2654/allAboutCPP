// Lecture 39
// Program to show creation of objects by 2 different ways Normal way which creates in Stack section
// & other by Pointer which creates in Heap section

#include <iostream>
using namespace std;

class company{

    private:
        int x = 5;

    public:
        company();

        company(int z){
        cout << "This is a Para constr\n";
        }

        void compInfo(int x);
};

company::company(){
    cout << "This is a No Arg constr\n";
    cout << "Printing x from class from inside constr : " << x << endl;
}

void company::compInfo(int x){
    cout << "In compInfo\n";
    cout << "Printing x from compInfo, value given through main() : " << x << endl;
}

int main(){

    company obj1;                       // Normal way to create obj in Stack section
    company *obj2 = new company(10);    // Pointer way to create obj in Heap Section

    cout << endl;

    obj1.compInfo(10);
    cout << endl;

    obj2->compInfo(20);
    cout << endl;

    (*obj2).compInfo(30);


    return 0;
}