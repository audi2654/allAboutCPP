//Lec - 54 : Static Object & Singleton Pattern
#include <iostream>

class Demo{
    public:
    Demo(){
        std::cout << "In Constructor\n";
    }

    ~Demo(){
        std::cout << "In Destructor\n";
    }

    int fun(){
        std::cout << "In fun()\n";
        return 10;
    }
};

static Demo obj4;
int x = obj4.fun();

int main(){
    std::cout << "Main starts\n";
    
    Demo obj1;

    {
        //Demo obj2;            //It has Block level Lifetime scope so destr will be called as soon as this block ends
        static Demo obj2;       //With static, becomes File level Lifetime scope i.e it'll exist until the end of program
        //static objects gets created in Data segment non-bss part
    }
    
    obj1.fun();
    //obj2.fun();                 //ERROR because of Block level Visibility Scope even when obj has File level Lifetime scope

    std::cout << "Main ends\n";

    std::cout << "Printing from Global Static Object : " << x << std::endl;


    return 0;   //calls destructor for obj1 & static obj2 & global static obj3
}