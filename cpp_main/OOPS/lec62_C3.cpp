//Lecture - 62 Part C1 : Inheritance - 2
//Program to show Modes/Types of Inheritance in relation with access specifiers of inherited parent class

//PROTECTEDLY Inherited Parent Class

#include <iostream>

class Core2Web{
    private:
    int x = 10;

    protected:
    int y = 20;

    public:
    int z = 30;
};

class Incubator : protected Core2Web{                  //PROTECTEDLY Inherited Parent Class
    public:
    void disp(){
        std::cout << "X is : " << x << std::endl;       //ERROR
        std::cout << "Y is : " << y << std::endl;       //Protected --> Protected
        std::cout << "Z is : " << z << std::endl;       //Public --> Protected
    }
}

int main(){
    Incubator obj;
    
    std::cout << "X is : " << obj.x << std::endl;       //ERROR
    std::cout << "Y is : " << obj.y << std::endl;       //ERROR
    std::cout << "Z is : " << obj.z << std::endl;       //ERROR

    return 0;
}