//Lecture - 61 Part B : Inheritance - 1
//Program to show Inheritance concept in Classes

//Remember the flow for calls to constr & destr when classes are inherited

#include <iostream>

class Player{
    public:
    Player(){
        std::cout << "Parent Player constr" << std::endl;
    }

    void disp(){
        std::cout << "In Disp Func" << std::endl;
    }

    ~Player(){
        std::cout << "Parent Player Destr" << std::endl;
    }
};

class Cricket: public Player{
    public:
    Cricket(){
        //when you inherit from any parent class, compliler adds super() keyword here in constr & it calls to the parent's constr
        std::cout << "Child Cricket constr" << std::endl;
    }

    ~Cricket(){
        std::cout << "Child Cricket Destr" << std::endl;
    }
};

int main(){
    //Player obj1;
    //obj1.disp();
    
    Cricket obj2;
    //obj2.disp();

    return 0;
}