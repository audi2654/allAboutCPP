//Lecture - 63 Part A : Inheritance - 3
//Program to show different types of Inheritance : single, multilevel, multiple inheritance

//SINGLE LEVEL INHERITANCE

#include <iostream>

using std::endl;

class Core2Web{
    int x = 10;

    public:
    int y = 111;

    void disp(){
        std::cout << "X is : " << x << endl; 
    }
};

class Incubator : public Core2Web{
    int x = 20;

    public:
    int y = 999;               //overriding value of y here         

    void disp(){               //here in a way you override the inherited disp() of parent class
        std::cout << "X is : " << x << endl; 
    }
};

int main(){
    Incubator obj1;
    obj1.disp();

    Core2Web obj2;
    obj2.disp();

    std::cout << "Y is : " << obj1.y << endl;
    std::cout << "Y is : " << obj2.y << endl;

    //when compiler sees 2 implementation of a func or var with same name, 
    //it calls to that class mem func or var whose object is used to refer it
    return 0;
}