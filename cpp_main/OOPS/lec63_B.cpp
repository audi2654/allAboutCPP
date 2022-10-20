//Lecture - 63 Part B : Inheritance - 3
//Program to show different types of Inheritance : single, multilevel, multiple inheritance

//MULTI LEVEL INHERITANCE

//there can be any level of inheritance from 1st Base class to Nth Derived class

#include <iostream>

using std::endl;

class Core2Web{
    public:
    Core2Web(){
        std::cout << "C2W Constr" << endl;
    }

    ~Core2Web(){
        std::cout << "C2W Destr" << endl;
    }

    void disp(){
        std::cout << "I'm from Core2Web base class" << endl;
    }
};

class Incubator : public Core2Web{
    public:
    Incubator(){
        std::cout << "Incubator Constr" << endl;
    }

    ~Incubator(){
        std::cout << "Incubator Destr" << endl;
    }
};

class Startups : public Incubator{
    public:
    Startups(){
        std::cout << "Startups Constr" << endl;
    }

    ~Startups(){
        std::cout << "Startups Destr" << endl;
    }
};

int main(){
    Startups obj1;

    obj1.disp();

    //when compiler sees 2 implementation of a func or var with same name, 
    //it calls to that class mem func or var whose object is used to refer it
    return 0;
}