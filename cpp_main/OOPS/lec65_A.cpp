//Lecture - 65 Part A : Polymorphism - 2
//FUNCTION OVERLOADING

//Point: When there's default argument in a function

#include <iostream>

using std::endl;

class FuncOverload{
    public:
    //Try comment & uncommenting below func to see difference

    void fun(int x){
        std::cout << "Int : " << x << endl;
    }

    void fun(int x, float y = 20.5f/*default arg*/){
        std::cout << "Int-Float : " << x << " " << y << endl;
    }
};

int main(){
    FuncOverload obj;

    //Try comment & uncommenting below calls to see difference
    obj.fun(10);  //this call causes ambiguity error because it can go to any of the both func cause 1 func has default arg
    obj.fun(20, 10.5f);

    return 0;
}