//Lecture-51 Part-B2
//Declaring static var inside a class as instance var

#include <iostream>

class StaticDemo{
    
    public:
    static int x;
};

int StaticDemo::x;

int main(){
    StaticDemo obj1;
    StaticDemo obj2;

    StaticDemo::x = 10;

    obj1.x = 20;
}