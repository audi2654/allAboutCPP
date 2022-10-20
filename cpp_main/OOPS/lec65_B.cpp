//Lecture - 65 Part B : Polymorphism - 2
//FUNCTION OVERLOADING

//Point: When there's Reference in one of the function

#include <iostream>

using std::endl;

class FuncOverload{
    public:
    //Try comment & uncommenting below func to see difference

    void fun(int x){
        std::cout << "Int : " << x << endl;
    }

    void fun(int& x){
        std::cout << "Int-Reference : " << x << endl;
    }
};

int main(){
    FuncOverload obj;

    //obj.fun(10);    //calls 1st func, cause const value 10 is passed

    int z = 9999;
    obj.fun(z);     //here it'll cause ambiguity error cause z can go as direct x or as reference x
    //Remember Reference concept only works on a variable like a,x,z,y & not any const real value like 10,99,20

    return 0;
}