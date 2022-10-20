//Lecture - 66 Part A : Virtual Function - 1 (Late binding, Runtime binding)

//Remember last lecture

#include <iostream>

using std::endl;

class Ambani{
    public:
    virtual void jio(){
        std::cout << "JIO" << endl;
    }

    virtual void reliance(){
        std::cout << "Reliance" << endl;
    }
};

class Anant : public Ambani{
    public:
    void jio(){
        std::cout << "JIO Mart" << endl;
    }
};

class Akash : public Ambani{
    public:
    void reliance(){
        std::cout << "Reliance Digital" << endl;
    }
};

int main(){
    Ambani *obj1 = new Anant();
    obj1->jio();

    std::cout << endl;

    Ambani *obj2 = new Akash();
    obj2->reliance();

    std::cout << endl;

    std::cout << sizeof(Ambani) << endl;
    std::cout << sizeof(Anant) << endl;
    std::cout << sizeof(Akash) << endl;

    return 0;
}

//Without virtual keyword, the size of classes will be 1 bytes
//Without virtual keyword, the size of classes will be 8 bytes
