//Lecture - 52 Part A3 : Initializing Static Variable (Class Variable) inside Static Member Function (Class Functions)

#include <iostream>

class AccessDemo{
    int x;
    static int y;

    public:

    AccessDemo(){
        x = 10;
        //y = 20;
        //you can't initialize static class var in constr like this
        //because C++ doesn't support static constructors
    }

    void fun(){
        int a = 100;
        static int b(90);

        std::cout << std::endl;
        std::cout << x << std::endl;        //10
        std::cout << y << std::endl;        //20
        std::cout << a << std::endl;        //100
        std::cout << b << std::endl;        //90

        x++;    //no change since for every fun() call this is re iniialise as if created for first time    
        y++;
        a++;    //no change since for every fun() call this is re iniialise as if created for first time
        b++;
        
    }

    static void gun();
};

int AccessDemo::y = 20;     //Initialization at point of Definition; Correct way to initialize static class var

void AccessDemo::gun(){
    int a = 100;
    static int b(90);

    std::cout << std::endl;
    //std::cout << x << std::endl;      //ERROR
    std::cout << y << std::endl;        //20
    std::cout << a << std::endl;        //100
    std::cout << b << std::endl;        //90

    y++;
    a++;    //no change since for every fun() call this is re iniialise as if created for first time
    b++;    
}


int main(){
    AccessDemo obj1, obj2;

    //Calling non-static member function fun()
    std::cout << "Calling non-static member function fun()" << std::endl;
    obj1.fun();             //y = 20, b = 90          
    obj2.fun();             //y = 21, b = 91

    //Calling static member function gun()
    std::cout << std::endl << "Calling static member function gun()" << std::endl;
    obj1.gun();             //y = 20, b = 90
    AccessDemo::gun();      //y = 21, b = 91
    obj2.gun();             //y = 22, b = 92
    
    return 0;
}
