//Lecture - 63 Part C3 : Inheritance - 3

//MULTIPLE INHERITANCE

//Point covered: When members data & function have same name in both Parent Class,
//which one is accessed by the Derived Class object ?

//This scenario is the start of DIAMOND PROBLEM

#include <iostream>

using std::endl;

class Core2Web{
    int emp = 1;

    public:
    int emp2 = 777777;

    Core2Web(){
        std::cout << "Core2Web Constructor" << endl;
    }

    ~Core2Web(){
        std::cout << "Core2Web Destructor" << endl;
    }

    void motive(){
        std::cout << "Core programming classes" << std::endl;
        std::cout << "Core2Web Employee no. " << emp2 << endl;
    }
};

class Biencaps{
    private:
    int empNum = 24;

    public:
    int emp2 = 99999;

    Biencaps(){
        std::cout << "Biencaps Constructor" << endl;
    }

    ~Biencaps(){
        std::cout << "Biencaps Destructor" << endl;
    }

    void motive(){
        std::cout << "Building innovative software" << std::endl;
        std::cout << "Core2Web Employee no. " << emp2 << endl;
    }
};

class Incubator : public Biencaps, public Core2Web /*private Biencaps, public Core2Web*/ /*private Biencaps, protected Core2Web*/ {
    public:
    Incubator(){
        std::cout << "Incubator Constructor" << endl;
    }

    ~Incubator(){
        std::cout << "Incubator Destructor" << endl;
    }
    void disp(){
        //motive();     //gives error cause reference to ‘motive’ is ambiguous
        //std::cout << emp2 << endl;  //gives error cause reference to ‘motive’ is ambiguous

        std::cout << Core2Web::emp2 << endl;    //works
        std::cout << Biencaps::emp2 << endl;    //works
    }
};

int main(){
    Incubator obj;

    obj.disp();

    //obj.motive();  //Error when Core2Web is inherited as Private or Protected
    //gives error cause reference to ‘motive’ is ambiguous

    //Only below things work & removes ambiguity for compiler
    //can give Error depending upon the mode of inheritance
    obj.Core2Web::motive();
    obj.Biencaps::motive();

    return 0;
}