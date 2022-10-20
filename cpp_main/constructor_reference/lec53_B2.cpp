// Lec-53 Part B: Destructor-2
#include <iostream>

class Demo{
    int *ptr;

    public:
    Demo(){
        std::cout << "In no arg constr" << std::endl;
        ptr = new int;
        *ptr = 20;
    }

    ~Demo(){
        std::cout << "In Destr" << std::endl;
        delete(ptr);
    }

    void fun(){
        Demo obj;
        std::cout << "In func()" << std::endl;
    }
};

int main(){
    // Demo obj1;
    // obj1.fun();

    // std::cout << std::endl;

    //Same things happen if obj is created with new
    Demo *obj2 = new Demo();
    delete(obj2);          //????????? how does this work deleting obj2 right here, then how fun() can be called in next line
    (*obj2).fun(); //OR obj2->fun();
    //delete(obj2);      //if delete is not called here, destr is not called for clearing obj2 ball from heap & it'll be only removed at end when return 0 is executed
    
    std::cout << "\n";
    Demo obj3;
    Demo obj4;
    Demo obj6;
    Demo obj7;

    return 0;       //last time call to destr for obj1
}