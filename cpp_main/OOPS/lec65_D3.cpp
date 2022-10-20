//Lecture - 65 Part D3 : Polymorphism - 2
//FUNCTION OVERLOADING

//Point: When one of the function is const & other non-const

//Similar for STRINGS, INT but here func & its object is const & not its arg or vars

#include <iostream>

using std::endl;

class FuncOverload{
    public:

    //Using CONST func
    void fun(std::string /***/x){
        //std::cout << "Non-const Pointer Arg String : " << x << endl;
        std::cout << "Non-const Reference Arg String : " << x << endl;
    }

    void fun(std::string /***/x) const{
        //std::cout << "Const Pointer Arg String : " << x << endl;
        std::cout << "Const Reference Arg String : " << x << endl;

    }

    void fun(int x){
        std::cout << "Non-const Func INT : " << x << endl;
    }

    /*const*/ void fun(int x) const{
        std::cout << "Const Func INT : " << x << endl;
    }
};

int main(){
    FuncOverload obj;
    const FuncOverload obj2;        //calls to const func()

    const std::string z = "zzzz";   //here writing const won't matter cause there's no func that has const arg in it   
    //obj.fun(&z);    //calls non-const string* x wala func
    obj.fun(z);    //calls non-const string& x wala func

    std::string j = "jjjj";   //here not writing const won't matter cause there's no func that has const arg in it    
    //obj2.fun(&j);    //calls const string* x wala func
    obj2.fun(j);    //calls const string& x wala func cause obj is const even though var is non-const

    const int x = 10;
    obj.fun(x);         //calls non const func
    obj2.fun(x);        //calls const func cause obj is const
    
    return 0;
}

//When you use arg as const  & other as non-const String, it'll not compare & give error
//BUT if you use POINTER arg as const & non-const, it'll not give error

//const var from main() should go only into const var accepting function
//otherwise error of invalid type conversion from 'const String*' to 'String*
//same things happen if reference is used instead of pointer

//const void fun(int x){}; & void fun(int x) const{}; are different,
//former is CONST OVERLOADING & says that return type value will be constant &
//the latter is CONST FUNCTION & says that the func will be a constant func