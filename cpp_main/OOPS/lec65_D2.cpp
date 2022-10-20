//Lecture - 65 Part D2 : Polymorphism - 2
//FUNCTION OVERLOADING

//Point: When one of the function has const arg & other has non-const arg

//Using STRINGS here, similar to int

#include <iostream>

using std::endl;

class FuncOverload{
    public:

    //Using pointer & reference const arg
    void fun(std::string& /***/x){
        //std::cout << "Non-const Pointer Arg String : " << x << endl;
        std::cout << "Non-const Reference Arg String : " << x << endl;
    }

    void fun(const std::string& /***/x){
        //std::cout << "Const Pointer Arg String : " << x << endl;
        std::cout << "Const Reference Arg String : " << x << endl;

    }
};

int main(){
    FuncOverload obj;

    std::string z = "zzzz";    
    //obj.fun(&z);    //calls non-const string* x wala func
    obj.fun(z);    //calls non-const string& x wala func

    const std::string j = "jjjj";    
    //obj.fun(&j);    //calls const string* x wala func
    obj.fun(j);    //calls const string& x wala func
    
    return 0;
}

//When you use arg as const  & other as non-const String, it'll not compare & give error
//BUT if you use POINTER arg as const & non-const, it'll not give error

//const var from main() should go only into const var accepting function
//otherwise error of invalid type conversion from 'const String*' to 'String*
//same things happen if reference is used instead of pointer