//Lecture - 63 Part C2 : Inheritance - 3

//MULTIPLE INHERITANCE

//Point covered: Changing inheritence modes of each parent class

#include <iostream>

using std::endl;

class Core2Web{
    int emp = 1;

    public:
    Core2Web(){
        std::cout << "Core2Web Constructor" << endl;
    }

    ~Core2Web(){
        std::cout << "Core2Web Destructor" << endl;
    }

    void motive(){
        std::cout << "Core programming classes" << std::endl;
        std::cout << "Core2Web Employee no. " << emp << endl;
    }
};

class Biencaps{
    private:
    int empNum = 24;

    public:
    Biencaps(){
        std::cout << "Biencaps Constructor" << endl;
    }

    ~Biencaps(){
        std::cout << "Biencaps Destructor" << endl;
    }

    void agenda(){
        std::cout << "Building innovative software" << std::endl;
        std::cout << "Core2Web Employee no. " << empNum << endl;
    }
};

class Incubator : /*public Biencaps, public Core2Web*/ /*private Biencaps, public Core2Web*/ private Biencaps, protected Core2Web {
    public:
    Incubator(){
        std::cout << "Incubator Constructor" << endl;
    }

    ~Incubator(){
        std::cout << "Incubator Destructor" << endl;
    }
    void disp(){
        motive();
        agenda();
    }
};


int main(){
    Incubator obj;

    //obj.disp();

    obj.motive(); //Error when Core2Web is inherited as Private or Protected
    //obj.agenda(); //Error when Biencaps is inherited as Private or Protected

    return 0;
}