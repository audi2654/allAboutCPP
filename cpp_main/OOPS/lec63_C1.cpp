//Lecture - 63 Part C1 : Inheritance - 3
//Program to show different types of Inheritance : single, multilevel, multiple inheritance

//MULTIPLE INHERITANCE

//Point covered: Sequence of calls to Constructor

#include <iostream>

using std::endl;

class Core2Web{
    public:
    Core2Web(){
        std::cout << "Core2Web Constructor" << endl;
    }

    ~Core2Web(){
        std::cout << "Core2Web Destructor" << endl;
    }
};

class Biencaps{
    public:
    Biencaps(){
        std::cout << "Biencaps Constructor" << endl;
    }

    ~Biencaps(){
        std::cout << "Biencaps Destructor" << endl;
    }
};

class Incubator : public Biencaps, public Core2Web{
    public:
    Incubator(){
        std::cout << "Incubator Constructor" << endl;
    }

    ~Incubator(){
        std::cout << "Incubator Destructor" << endl;
    }
};


int main(){
    Incubator obj;

    return 0;
}