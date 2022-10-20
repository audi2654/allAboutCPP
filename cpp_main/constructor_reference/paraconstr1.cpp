// 1 Shloki Ramayan of Lecture 40 41 42 43
//Program for Constructor Overloading i.e using multiple constr in same program 
//Program to show how 2 different para constr work even when they have same type & name of para
//Program to show how 'This' pointer is used in identifying correct local & instance var when they have same name

#include <iostream>
using namespace std;

class paraconstr1
{
private:
    int x = 99990; //instance variable
public:
    //Writing 5 different constructors in a single class
    paraconstr1(); //even though there's no para here, like all other constr there will always be a *this hidden pointer para in it
    paraconstr1(int x, int y);
    paraconstr1(int x);
    paraconstr1(char x);
    paraconstr1(float x);
    void display();
};

// for a para constr to be different it only needs to have different NUMBER of
// parameter from other constructors

paraconstr1::paraconstr1(){
    cout << "This is a No Argument Constructor\n";
}

paraconstr1::paraconstr1(int x , int y /*local variables*/){    
    cout << "Para constr with 2 para\n";
    this->x = x;       //use of 'this' pointer to correctly address instance var to store value of local var in itself
    cout << x << endl;
}

paraconstr1::paraconstr1(int x){
    cout << "Para constr with 1 para\n";
}

paraconstr1::paraconstr1(char x){
    cout << "Para constr with 1 CHAR para\n";
}

paraconstr1::paraconstr1(float x){
    cout << "Para constr with 1 FLOAT para\n";
    display();  //displays 99990 value of Instance var initialized in this Float constructor
}

void paraconstr1::display(){
    cout << "Inside display function\n";
    cout << "Value of X is: "<< x << endl; //this->x; also works here 
    //displays the Instance Var from the constr which is called the object using which display() member func is called
}

int main(){

    paraconstr1 obj0;
    paraconstr1 obj1(10,20);
    paraconstr1 obj2(200);
    paraconstr1 *obj3 = new paraconstr1('a');
    paraconstr1 obj4(float(10.5)); //c++ function style casting // OR (10.5f) OR ((float)10.5) c-style casting;

    /*while passing a float value as a parameter you'll have to type cast it in float value cause compiler otherwise 
    considers it as DOUBLE & gives error for not being able to find it type of constr & hence float wala constr 
    will not be called*/

    obj1.display();
    cout << endl;
    obj3->display();
    cout << endl;

    cout << "Code end\n" << endl;
    paraconstr1 display(); // OR void display(); also works but there's no output for this 
    // because display takes no arguments & it has no anyother value defined in itself of its own
    
    return 0;
}

