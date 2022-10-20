//Lecture - 65 Part E : Polymorphism - 2
//FUNCTION OVERRIDING or VIRTUAL FUNCTION (only happens when Parent-Child class i.e Inheritance is involved)

#include <iostream>

using std::endl;

class Parent{
    public:
    Parent(){
        std::cout << "Parent Constr" << endl;
    }

    void Career(){
        std::cout << "Computer Engg" << endl;
    }

    virtual void Marriage(){            //using virtual here says wait until runtime to bind this func with child's object
        std::cout << "Deepika Padukone" << endl;
    }
};

class Child : public Parent{
    public:
    Child(){
        std::cout << "Child Constr" << endl;
    }

    void  Music(){
        std::cout << "Music" << endl;
    }

    /*void Marriage(){      //if here overriding method is not written then virtual method from parent class is called
        std::cout << "Disha Patani" << endl;
    }*/
};

int main(){
    Child *obj1 = new Child();          //Scenario-1
    (*obj1).Career();
    obj1->Music();
    obj1->Marriage();

    std::cout << endl;

    Parent *obj2 = new Parent();        //Scenario-2
    (*obj2).Career();
    obj2->Marriage();

    std::cout << endl;

    Parent *obj3 = new Child();         //Scenario-3
    obj3->Career();
    obj3->Marriage();

    std::cout << endl;

    //Child *obj4 = new Parent();     //invalid conversion from ‘Parent*’ to ‘Child*’ hence doesn't work
    //this is not possible because Child has inherited Parent & not the vice versa
    //also the class to be inherited must be declared & defined first & then inherited due to Top to Down compiling approach
    //here in a way you are creating a ptr var obj4 of type Child & storing in it the address of 
    //newly created in Heap Section ObjectVariable of type Parent using new keyword
    //Child objVars has inherited Parent's methods & not Parent objVars has inherited the Child's methods

    return 0;
}

//jyacha or jya type cha reference or pointer variable tyachyach methods or goshtinna call janar