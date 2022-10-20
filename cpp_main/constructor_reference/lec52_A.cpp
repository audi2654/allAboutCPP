//Lecture - 52 Part A1 : Static Member Function (Class Functions)
//Program to show how such functions can be accessed

#include <iostream>

class VirginGalactic{
    static int x;

    public:
    static int y;

    VirginGalactic(){
        std::cout << "No Arg Constr" << std::endl;
    }

    static int GetterFuncForX(){
        return x;
    }

    static void spaceTour(){
        std::cout << "Space Tour with Richard" << std::endl;
    }
};

int VirginGalactic::x = 999;     //private static var
int VirginGalactic::y = 20;     //public static var

static int StaticNonMemberFunction(){
    static int j = 10;
    std::cout << std::endl;

    std::cout << "This is a Static Non Member Function" << std::endl;
    std::cout << "Value of j : " << j <<std::endl;
    j++;
    std::cout << std::endl;
    return j;
}



int main(){
    VirginGalactic::y = 30;     //Reassigning the public static var ainvayi

    //Two ways to call static member function
    VirginGalactic::spaceTour();        //1. Directly using class name without any object; a non-static member func() can't be called like this
    VirginGalactic obj1;                //2. With Object; a non-static member func() can be called only in 1 way i.e using an Object
    obj1.spaceTour();
    std::cout << std::endl;

    //2 way to access private static class variable
    std::cout << VirginGalactic::GetterFuncForX() << std::endl;      //without Object, using class name only if getter func() is declared as static
    std::cout << obj1.GetterFuncForX();                              //using Object
    std::cout << std::endl;

    //Calling static non member function
    StaticNonMemberFunction();  //j = 10
    StaticNonMemberFunction();  //j = 11
    StaticNonMemberFunction();  //j = 12

    return 0;
}