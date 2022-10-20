//Lecture - 58 Part A1 : Operator Overloading for Binary Operator
//Program to show OO using 3 different methods
//Method-1: FRIEND FUNCTION

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

    //Method-1: FRIEND FUNCTION
    friend void operator+(C2W& objRef, int x);
    friend void operator+(int x, C2W& objRef);  //changing order of paras for 100 + obj1; 
};

void operator+(C2W& objRef, int x){
    objRef.teachers = objRef.teachers + x;      //remember that Operator Friend func can't modify Priv vars directly, the func belongs to other class & is used here as friend 
    //it just has access to priv vars, you'll have to use ptr or ref of priv vars to modify them
    objRef.langs = objRef.langs + x;
}

void operator+(int x, C2W& objRef){
    objRef.teachers = objRef.teachers + x;      //remember that Operator Friend func can't modify Priv vars directly, the func belongs to other class & is used here as friend 
    //it just has access to priv vars, you'll have to use ptr or ref of priv vars to modify them
    objRef.langs = objRef.langs + x;
}

int main(){
    cout << "OO using Operator Func as Friend Function" << endl;

    C2W obj1(2,6);
    obj1.display();         //2,6

    //To do scenario - 1
    obj1 + 100;

    obj1.display();         //102,106

    std::cout << std::endl;

    //To do scenario - 2
    200 + obj1;

    obj1.display();         //302,306


    return 0;
}   