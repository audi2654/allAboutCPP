//Program to show static var declared inside an in-class member function

#include <iostream>
using namespace std;

class StaticDemo{
    public:
    static int x;
    
    void fun(){
        static int y = 10;
        //you can manipulate this static var using multiple objects but its visibility scope will still be local to fun() function

        //cout << x << endl;
        cout << y << endl;

        y++;
    }
};

int StaticDemo::x = 20;

int main(){
    StaticDemo obj1;
    StaticDemo obj2;
    StaticDemo obj3;

    fun(); //this won't work because the func is in class scope

    //to access y, you'll have to access it using object as shown below
    obj1.fun();     //10
    obj2.fun();     //11
    obj2.fun();     //12
    obj3.fun();     //13
    

    cout << endl << StaticDemo::x << endl;
    return 0;
}