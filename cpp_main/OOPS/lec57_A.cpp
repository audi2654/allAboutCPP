//Lecture - 57 Part A1 : Operator Overloading using Friend Function
//Program to show OO when you want to return int type data of your own class using objects 

#include <iostream>

using namespace std;

class AddTwo{
    private:
    int x{10}, y{20};

    public:
    int a{100}, b{90};

    int display(){ return x+y; }        //internally calls to function: int operator+(int.int);

    //Operator Overloading
    friend int operator+(AddTwo& refObj1, AddTwo& refObj2);         //you're returning int type value here
};

int operator+(AddTwo& refObj1, AddTwo& refObj2){
    return refObj1.x + refObj2.y;
};

int main(){
    AddTwo obj1;
    std::cout << obj1.display() << std::endl;       //internally calls to function: int operator<<
    std::cout << obj1.a + obj1.b << std::endl;      //internally calls to function: int operator+(int obj1.a, int obj1.b);

    AddTwo obj2;

    std::cout << obj1 + obj2 << std::endl;          //internally calls to function: AddTwo operator+(AddTwo obj1, AddTwo obj2);

    return 0;
}