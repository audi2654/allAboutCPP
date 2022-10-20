// Lecture 43
//Program for Constructor Overloading i.e using multiple constr in same program 
//& how different types of args & paras in constr work 

#include <iostream>

class demo{

    public:

    //You can play by commenting any of the below constr & see different output

    demo(char x){
        std::cout << "Char wala Para Constr \n";
    }

    demo(int x){
        std::cout << "Int wala Para Constr \n";
    }

    demo(float x){
        std::cout << "Float wala Para Constr \n";
    }

    demo(double x){
        std::cout << "Double wala Para Constr \n";
    }
    
};



int main(){

    demo obj2('a');             //even though char 1 byte is passed still calls 1st int wala constr
    demo obj1(10);              //calls 1st constr

    demo obj3(float(10.5));     //c++ function style casting // OR (10.5f) OR ((float)10.5) c-style casting;
    demo obj4(10.5);            //calls double wala constr
    return 0;
}
