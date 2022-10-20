//Lecture - 58 Part B : Operator Overloading for Unary Operator '-'
//Program to show Unary OO using 3 different methods

#include <iostream>

using std::cout;
using std::endl;

class Grade{
    int x;

    public:
    Grade(int x){
        this->x = x;
    }

    void display(){
        cout << x << endl;;
    }

    int getX(){ return x; }

    //Method-1 : Using Friend Function
    /*friend void operator-(Grade& objRef){
        objRef.x = -(objRef.x);
    }*/

    //Method-2 : Using Member Function
    /*void operator-(){
        (*this).x = -(this->x);
    }*/
};

//Method-3 : Using Normal Non-Class Function
Grade operator-(Grade& objRef){
    return Grade(-objRef.getX());
}

int main(){
    Grade obj1(10);
    obj1.display();

    obj1 = -obj1;
    obj1.display();

    return 0;
}