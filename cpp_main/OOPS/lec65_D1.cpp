//Lecture - 65 Part D1 : Polymorphism - 2
//FUNCTION OVERLOADING

//Point: When one of the function has const arg & other has non-const arg

#include <iostream>

using std::endl;

class FuncOverload{
    public:
    //Using non-pointer const arg
    // void fun(int x){
    //     std::cout << "Int : " << x << endl;
    // }

    // void fun(const int x){
    //     std::cout << "Int-Const Var : " << x << endl;
    // }

    //Using pointer & reference const arg
    void fun(int& /***/x){
        //std::cout << "Non-const Pointer Arg Int : " << x << endl;
        std::cout << "Non-const Reference Arg Int : " << x << endl;
    }

    void fun(const int& /***/x){
        //std::cout << "Const Pointer Arg Int : " << x << endl;
        std::cout << "Const Reference Arg Int : " << x << endl;

    }
};

int main(){
    FuncOverload obj;

    int z = 9999;
    //obj.fun(z);   //Program gives error that normal fun() can't be overloaded with const fun()
    
    //obj.fun(&z);    //calls non-const int* x wala func
    obj.fun(z);    //calls non-const int& x wala func

    const int j = 888;
    //obj.fun(&j);    //calls const int* x wala func
    obj.fun(j);    //calls const int& x wala func
    
    return 0;
}

//When you use arg as const int & other as non-const int, it'll not compare & give error
//BUT if you use POINTER arg as const & non-const, it'll not give error

//const var from main() should go only into const var accepting function
//otherwise error of invalid type conversion from 'const int*' to 'int*
//same things happen if reference is used instead of pointer