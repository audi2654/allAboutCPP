//Lecture - 58 Part A3 : Operator Overloading for Binary Operator
//Program to show OO using 3 different methods
//Method-3: NORMAL NON-CLASS FUNCTION

#include <iostream>

using std::cout;
using std::endl;

class C2W{
    private:
    int teachers;
    int langs;

    public:
    C2W() {
        //required if use temp Object
    }

    C2W(int teachers, int langs){
        this->teachers = teachers;
        this->langs = langs;
    }

    void display(){
        cout << "Teachers : " << teachers << endl;
        cout << "Langs : " << langs << endl;
        
    }

    int getTeachers(){ return teachers; }
    int getLangs(){ return langs; }

};

//Method-3: NORMAL NON-CLASS FUNCTION
C2W operator+(C2W& objRef, int x){
    //C2W tempObj;      //you can use here temp Object also to return

    return C2W(objRef.getTeachers() + x, objRef.getLangs() + x); 
    //here para constr get called & used like C2W(2+x, 6+x)
}

int main(){
    cout << "OO using Operator Func as Normal Non-Class Function" << endl;
    C2W obj1(2,6);
    obj1.display();         //2,6

    //To do scenario
    obj1 = obj1 + 300;

    obj1.display();         //302,306

    return 0;
}