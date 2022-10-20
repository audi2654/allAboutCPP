//Lecture - 56 Part B
//Program to show how a whole class B can be declared as friend class in class A so that all the member functions 
//of class B can access private members of class A, instead of declaring each member function of class B 
//as friend in class A

#include <iostream>

using namespace std;

class FriendAccess;

class FarmHouse{
    int tv{1};
    int bedroom{2};
    int pool{3};

    void PrivateDisplay(){
        std::cout << tv << std::endl;
        std::cout << bedroom << std::endl;
        std::cout << pool << std::endl;
    }

    public:
    void PublicDisplay(){
        std::cout << tv << std::endl;
        std::cout << bedroom << std::endl;
        std::cout << pool << std::endl;
    }

    void privDisplay(){
        PrivateDisplay();
    }

    friend class FriendAccess;  //declaring as friendly & giving access to class B to all members of class A
};

class FriendAccess{
    public:
    void Member1(FarmHouse& refObj){
        std::cout << refObj.tv << std::endl;
        std::cout << refObj.bedroom << std::endl;
        std::cout << refObj.pool << std::endl;
    };

    void Member2(FarmHouse& refObj){
        std::cout << refObj.tv << std::endl;
        std::cout << refObj.bedroom << std::endl;
        std::cout << refObj.pool << std::endl;
    };

    void Member3(FarmHouse& refObj){
        refObj.PrivateDisplay();
    }

    void Member4(FarmHouse& refObj){
        refObj.PublicDisplay();
    }
};

int main(){
    FarmHouse obj1;
    obj1.privDisplay();         //displaying class A's own member function using its own Object
    std::cout << std::endl;

    FriendAccess obj2;
    obj2.Member1(obj1);         //accesing Private Vars of class A from class B
    std::cout << std::endl;

    obj2.Member2(obj1);         //accesing Private Vars of class A from class B
    std::cout << std::endl;

    obj2.Member3(obj1);         //accesing Private Member Function of class A from class B
    std::cout << std::endl;

    obj2.Member4(obj1);         //accesing Public Member Function of class A from class B
    std::cout << std::endl;

    return 0;
}
