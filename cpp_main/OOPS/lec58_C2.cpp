//Lecture - 58 Part C2 : Operator Overloading for POST Increment Unary Operator '++'
//Program to show Unary OO using 3 different methods

#include <iostream>

using std::cout;
using std::endl;

class Placement{
    int noOfComp;

    public:
    Placement(int x){
        noOfComp = x;
    }

    int getNoOfComp(){ return noOfComp; }

    void disp(){
        cout << "Total No of Companies : " << noOfComp << endl;
    }

    //Method-1 : Using Friend Function
    // friend void operator++(Placement& objRef, int){
    //     objRef.noOfComp = objRef.noOfComp++;
    // }

    //Method-2 : Using Member Function
    // void operator++(int){
    //     noOfComp = noOfComp++;
    // }

};

//Method-3 : Using Normal Non-Class Function
Placement operator++(Placement& objRef, int){ //here int is an Dummy Parameter required to differentiate between Post & Pre increment 
    int x = objRef.getNoOfComp();

    return Placement(x++);
}

int main(){
    Placement obj1(5);
    obj1.disp();

    obj1 = obj1++;
    obj1.disp();

    return 0;
}