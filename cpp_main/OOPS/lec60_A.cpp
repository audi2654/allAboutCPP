//Lecture - 60 Part A : Operator Overloading for operator 'new' & 'delete'
//void pointer part 

#include <iostream>

int main(){
    int x = 10;
    float y = 205.9;

    void *vptr = &x;    //int *vptr = &x; will work fine

    int* iptr = NULL;

    std::cout << "x = " << x << std::endl;
    std::cout << "vptr = " << vptr << std::endl;
    std::cout << "&vptr = " << &vptr << std::endl;
    
    //std::cout << "*iptr = " << *iptr << std::endl;    
    //above line gives error void* is not a ptr to obj type for ptr declared as void type 
    //because void ptr has to be in some valid type when you extract its data i.e while dereferencing

    //to make it work you need to typecast void ptr var in some valid non-void type
    std::cout << "*(int*)vptr = " << *((int*)vptr) << std::endl;
    
    std::cout << std::endl;

    iptr = (int*)vptr;
    std::cout << "iptr = " << iptr << std::endl;    //Same address as vptr
    std::cout << "*iptr((int*)vptr) = " << *iptr << std::endl;

    std::cout << std::endl;

    vptr = &y;
    std::cout << "y = " << y << std::endl;

    std::cout << "*(int*)vptr for y = " << *((int*)vptr) << std::endl;
    //above line gives some garbage value while dereferencing pointer which has addressed stored of y of type float
    //so you should always typecast in the type of the data which you are extracting

    return 0;
}