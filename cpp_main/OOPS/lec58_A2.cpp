//Lecture - 58 Part A2 : Operator Overloading for Binary Operator '+'
//Program to show OO using 3 different methods
//Method-2: MEMBER FUNCTION

#include <iostream>

using std::cout;
using std::endl;

class C2W{
    private:
    int teachers;
    int langs;

    public:
    C2W(int teachers, int langs){
        this->teachers = teachers;
        this->langs = langs;
    }

    void display(){
        std::cout << "Teachers : " << teachers << std::endl;
        std::cout << "Langs : " << langs << std::endl;
        
    }

    //Method-2: MEMBER FUNCTION
    void operator+(int x);          //func call goes like operator+(C2W objRef, int x);
    //but here hidden 'this' ptr already points to the class C2W object by default, no need to mention it

    //Unlike friend func you can't change order of paras in operator func as member func cause 1st para is always this ptr to class C2W
    //so in such func you only give 1 or 0 arguments
};

void C2W::operator+(int x){
    teachers = this->teachers + x;      
    this->langs = langs + x;
}

int main(){
    cout << "OO using Operator Func as Class Member Function" << endl;
    C2W obj1(2,6);
    obj1.display();         //2,6

    //To do scenario
    //obj1 + 200;
    
    //200 + obj1;       //you can do like this when you OO as a Member Func cause 1st para of mem func is always this ptr
    //& you need to change order of Paras to achieve this, but you can always achieve this using friend func


    obj1.display();         //202,206

    return 0;
}