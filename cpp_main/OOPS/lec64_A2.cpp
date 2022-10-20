//Lecture - 64 Part A1 : Polymorphism - 1
//FUNCTION OVERLOADING

#include <iostream>

using std::endl;

class FuncOverload{
    public:
    void fun(int x){
        std::cout << "Int : " << x << endl;
    }

    void fun(float x){
        std::cout << "Float : " << x << endl;
    }

    void fun(int x, float y){
        std::cout << "Int-Float" << endl;
    }

    void fun(float x, int y){
        std::cout << "Float-Int" << endl;
    }
};

int main(){
    FuncOverload obj;

    obj.fun(10);
    obj.fun(10.5f);

    obj.fun(10,0.5F);
    obj.fun(10.8f,5);

    obj.fun('A');     //char is promoted into int
    //obj.fun(10l);   //long will demote float & will give error

    return 0;
}