//Lecture-51 Part-B
//Declaring static var inside a class as instance var

#include <iostream>

class StaticDemo{
    static int y; //this is just a declaration of how memory is to be allocated, actual memory is allocated by explicitly defining it outside class
    //static int x; //x = 20; ISO c++ forbids initializing any static var right inside class as instance var

    int p = 1000;
    public:
    //static member vars are usually preferred to be declared in public 
    static int x; //const static int x = 20; although this works but you can't modify x value later in whole program

    //Ways to declare & define Static var directly inside class
    /*(1)*/ static const int e = 99; //writing const indicates compiler to allocate memory right away here, hence this works

    /*(2)*/ static constexpr int z = 422; //this is allowed but only in C++11

    /*(3)*/ //static inline int z = 422; //this is allowed but only in C++17

    public:
    StaticDemo(){

        std::cout << "No arg constr" << std::endl; 
    }

    int getValueOfX(){
        return x;
    }

    int getValueOfY(){      //getter function to access private declared static data member aka class variable, 
    //if this func is declared as static, then classname can also be used to call it 
        return y;
    }

    void StaticVarInFunc(){
        static int x = 50;
        std::cout << "Static Var from in class func : " << x << std::endl;
    }
};

int StaticDemo::x = 20; //this is the strictly required first Definition(Initialization), for static var to work.
//Actual memory is allocated here by this line of code
//Unless you Define each Static var like this outside class explicitly you can't access it by any object or in any function.
//Later in the program you can reassign value as you like to.

int StaticDemo::y = 80; //int StaticDemo::y; also works, C++ initializes it to 0


int main(){
    StaticDemo obj1;
    //obj1.x = 40; //this is allowed but x must be declared as Public in class & defined atleast once expilcitly outside class
    StaticDemo obj2;
    StaticDemo obj3;

    obj1.StaticVarInFunc(); 

    std::cout << "Static Var privately declared in class : "<< obj1.getValueOfY() << std::endl; //returning Private declared static var
    //obj1.y = 999; //this is not allowed because it has Private Scope context
    //use getter setter method to access private static var

    // std::cout << StaticDemo::y; //this would work only if getValueofY() is declared as static func(), but you still can't modify this private static var

    std::cout << std::endl;

    std::cout << StaticDemo::z <<std::endl;

    std::cout << StaticDemo::e <<std::endl;
    

    std::cout << obj1.getValueOfX() << std::endl;
    std::cout << obj2.getValueOfX() << std::endl;
    obj1.x = 40; //changing value in obj1 but will be reflected in all objects cause static var is accesed from Data segment by all objects
    std::cout << obj3.getValueOfX() << std::endl;

    StaticDemo obj4;
    std::cout << obj4.getValueOfX() << std::endl;

    return 0;
}

//Conpiler doesn't allow initialising a static var inside class because it is common to all the objects that can
//be created from class StaticDemo & since static var are stored in non-BSS Data segment of process, it'd be unsafe
//to modify that var since each objects will have to accept that change