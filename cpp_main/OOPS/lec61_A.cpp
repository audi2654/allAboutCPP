//Lecture - 61 Part A : Inheritance - 1
//Program to show Composition/Aggregation concept in Classes

#include <iostream>

class Player{
    std::string name;
    int jerNo;

    public:
    Player(){
        //Empty constructor;
    }

    Player(std::string name, int jerNo){
        this->name = name;
        this->jerNo = jerNo;
    }

    void details(){
        std::cout << name << std::endl;
        std::cout << jerNo << std::endl;
    }
};

class Cricket{
    Player objCric;
    int runs;

    public:
    Cricket(const Player& objCric, int runs){
        this->objCric = objCric;
        this->runs = runs;
    }

    void info(){
        objCric.details();
        std::cout << runs << std::endl;
    }
};

class Football{
    Player objFoot;
    int goals;

    public:
    Football(const Player& objFoot, int goals){
        this->objFoot = objFoot;
        this->goals = goals;
    }

    void info(){
        objFoot.details();
        std::cout << goals << std::endl;
    }
};

int main(){
    Cricket obj1({"Virat", 10}, 6666);
    obj1.info();

    std::cout << std::endl;

    Football obj2({"Messi", 25}, 356);
    obj2.info();

    return 0;
}