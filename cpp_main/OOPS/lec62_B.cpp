//Lecture - 62 Part B : Inheritance - 2
//Program to show Access Specifiers behaviour on member data of Classes in Inheritance concept

#include <iostream>

class Core2Web{
    private:
    int x = 10;

    protected:      //PROTECTED
    int z = 30;

    public:
    int y = 20;

    void disp(){
        std::cout << "X is : " << x << std::endl;
        std::cout << "Y is : " << y << std::endl;
        std::cout << "Z is : " << z << std::endl;
    }
};

class Incubator : public Core2Web{
    public:
    void dispChild(){
        //std::cout << "X is : " << x << std::endl;           /*ERROR*/
        std::cout << "Y is : " << y << std::endl;
        std::cout << "Z is : " << z << std::endl;
    }
};

int main(){
    Core2Web obj1;
    //std::cout << obj1.x << std::endl;                       /*ERROR*/
    std::cout << obj1.y << std::endl;
    //std::cout << obj1.z << std::endl;                       /*ERROR*/
    obj1.disp();


    Incubator obj2;
    //std::cout << obj2.x << std::endl;                       /*ERROR*/
    std::cout << obj2.y << std::endl;
    //std::cout << obj2.z << std::endl;                       /*ERROR*/
    obj2.disp();    //try obj2.dispChild(); also works

    return 0;
}