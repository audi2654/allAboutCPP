//Lecture - 65 Part C : Polymorphism - 2
//FUNCTION OVERLOADING

//Point: When one of the function is static & other non-static

#include <iostream>

using std::endl;

class FuncOverload{
    public:
    static void fun(int x){
        std::cout << "Int-Static : " << x << endl;
    }

    void fun(int x){
        std::cout << "Int : " << x << endl;
    }
};

int main(){
    FuncOverload obj;

    int z = 9999;
    obj.fun(z);
    
    return 0;
}

//Program gives error that normal fun() can't be overloaded with static fun(),
//because in Func Overloading only Func Prototype matters & not any reture type or qualifier