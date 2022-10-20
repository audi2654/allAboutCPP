//Lecture - 57 Part A2 : Operator Overloading without using Friend Function
//Program to show OO when you want to return & print data of your own type

#include <iostream>

using namespace std;

class AddTwo{
    private:
    int x{10}, y{20};

    public:
    int a{100}, b{90};

    int display(){ return x+y; }        //internally calls to function: int operator+(int.int);

    //Operator Overloading

    /*friend int operator+(AddTwo& refObj1, AddTwo& refObj2);*/         //you're returning int type value here

    friend AddTwo operator+(AddTwo& refObj1, AddTwo& refObj2);      //you're returning your UserDefined type value here
};

/*int operator+(AddTwo& refObj1, AddTwo& refObj2){
    return refObj1.x + refObj2.y;
};*/

AddTwo operator+(AddTwo& refObj1, AddTwo& refObj2){
    return refObj1.x + refObj2.y;
    //gives error for above line for not converting the integer type result to return type AddTwo 
};


int main(){
    AddTwo obj1;
    std::cout << obj1.display() << std::endl;       //internally calls to function: int operator<<
    std::cout << obj1.a + obj1.b << std::endl;      //internally calls to function: int operator+(int obj1.a, int obj1.b);

    AddTwo obj2;

    int x;
    std::cout << x;                 //internally calls to: ostream operator<<(ostream& cout, int x){};

    std::cout << obj1 + obj2 << std::endl;          
    //internally calls to function: AddTwo operator+(AddTwo obj1, AddTwo obj2) & then to: AddTwo operator<<(ostream cout, AddTwo obj1+obj2)

    //Gives error for above line cause compiler finds no match for function like: AddTwo operator<<(ostream, AddTwo){};
    //Since you are asking the '<<' operator to handle you own UserDefined datatype AddTwo, 
    //there's no inbuilt definition to such type so you need to Overload the '<<' operator too, if you want to return
    //the AddTwo type value from operator+ function & for the above statement to work correctly.
    //Or else you can always return an int value from: int operator+(AddTwo& refObj1, AddTwo& refObj2) function

    return 0;
}