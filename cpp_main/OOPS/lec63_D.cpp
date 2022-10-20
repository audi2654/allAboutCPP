//Lecture - 63 Part D : Inheritance - 3

//MULTIPLE INHERITANCE

//Point covered: DIAMOND Problem

//Start of VIRTUAL base class or function discussed in lec 66 & 67

#include <iostream>

using std::endl;

class Shashi{
    public:
    int emp2 = 222;

    Shashi(){
        std::cout << "Shashi Constructor" << endl;
    }

    ~Shashi(){
        std::cout << "Shashi Destructor" << endl;
    }

    void motive(){
        std::cout << "Top most parent class" << std::endl;
        std::cout << "Shashi Employee no. " << emp2 << endl;
    }
};


class Core2Web : virtual public Shashi{
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

class Biencaps : virtual public Shashi{
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
        std::cout << endl  << "Incubator Destructor" << endl;
    }
    void disp(){
        //motive();     //gives error cause reference to ‘motive’ is ambiguous
        //std::cout << emp2 << endl;  //gives error cause reference to ‘motive’ is ambiguous
        //and in such diamond cases it can cause tremendous ambiguity

        std::cout << Core2Web::emp2 << endl;    //works
        std::cout << Biencaps::emp2 << endl;    //works
    }
};

int main(){
    Incubator obj;

    std::cout << endl;
    obj.disp();

    //obj.motive();  //Error when Core2Web is inherited as Private or Protected
    //gives error cause reference to ‘motive’ is ambiguous

    //Only below things work & removes ambiguity for compiler
    //can give Error depending upon the mode of inheritance
    obj.Core2Web::motive();
    obj.Biencaps::motive();

    return 0;
}