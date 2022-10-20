//Lecture - 52 Part A2 : Static Variable (Class Variable) inside Static Member Function (Class Functions)

//Program to show how Static vars can be accessed

/*1. Non Static Member Function
{
    Privately Declared:
        Non static var access -> Allowed
        Static var access -> Allowed

    Publicly Declared:
        Non static var access -> Allowed
        Static var access -> Allowed
}*/

/*2. Static Member Function
{
    Privately Declared:
        Non static var access -> NOT Allowed
        Static var access -> Allowed

    Publicly Declared:
        Non static var access -> NOT Allowed
        Static var access -> Not Allowed
}*/

#include <iostream>

using namespace std;

class AccessDemo{
    int priA = 10;
    static int priB;

    public:
    int pubI = 30;
    static int pubJ;

    void NonStatFunc(){
        std::cout << "Variables From NON-STATIC Member Func" << std::endl;

        std::cout << "Private Member Variables" << std::endl;
        std::cout << "Private Instance Var priA : " << priA << std::endl;
        std::cout << "Private Class Var priB : " << priB << std::endl;
        std::cout << std::endl;

        std::cout << "Public Member Variables" << std::endl;
        std::cout << "Public Instance Var pubI : " << pubI << std::endl;
        std::cout << "Public Class Var pubJ : " << pubJ << std::endl;
        std::cout << std::endl;
    }

    static void StatFunc(){
        std::cout << "Variables From STATIC Member Func" << std::endl;

        std::cout << "Private Member Variables" << std::endl;
        //std::cout << "Private Instance Var priA : " << priA << std::endl;   //ERROR
        std::cout << "Private Class Var priB : " << priB << std::endl;
        std::cout << std::endl;

        std::cout << "Public Member Variables" << std::endl;
        //std::cout << "Public Instance Var pubI : " << pubI << std::endl;    //ERROR
        std::cout << "Public Class Var pubJ : " << pubJ << std::endl;
        std::cout << std::endl;
    }

};

int AccessDemo::priB = 20;
int AccessDemo::pubJ = 40;

int main(){
    AccessDemo obj1;
    obj1.NonStatFunc();

    obj1.StatFunc(); //OR AccessDemo::StatFunc();   //Will give errors
    return 0;
}