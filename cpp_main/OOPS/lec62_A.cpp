//Lecture - 62 Part A : Inheritance - 2
//Program to show Inheritance concept


//Remembere the output flow of this prog, when constr & destr are called

#include <iostream>

class Core2Web{
    public:
    int x = 10;

    Core2Web(){
        std::cout << "Parent Core2Web Constr" << std::endl;
    }

    ~Core2Web(){
        std::cout << "Parent Core2Web Destr" << std::endl;
    }

    void disp(){
        std::cout << "X value is : " << x << std::endl;
    }
};

class Incubator : public Core2Web{
    public:
    int y = 20;

    Incubator(){
        std::cout << "Child Incubator Constr" << std::endl;
    }

    ~Incubator(){
        std::cout << "Child Incubator Destr" << std::endl;
    }

    void dispChild(){
        std::cout << "X value is : " << x << std::endl;
        std::cout << "Y value is : " << y << std::endl;
    }
};

int main(){
    Incubator obj1;
    obj1.disp();
    obj1.dispChild();

    Core2Web obj;
    obj.disp();
    //obj.dispChild();      //ERROR

    return 0;
}