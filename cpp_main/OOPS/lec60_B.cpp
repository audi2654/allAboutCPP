//Lecture - 60 Part B1 : Operator Overloading for operator 'new' & 'delete'
//Program to show it in 2 ways
//Method-1: as NORMAL NON-CLASS NORMAL GLOBAL FUNCTION

//Remember the output flow of this program 

#include <iostream>

class OlympicGolds{
    int golds;
    std::string country;

    public:
    //Constructor
    OlympicGolds(std::string country, int golds){
        std::cout << "Inside Para Constr" << std::endl;
        this->country = country;
        this->golds = golds;
    }
    
    //Destructor
    ~OlympicGolds(){
        //Remember Destructor only cleans things initialized by a Constructor inside obj gola, it doesn't free any memory of gola
        std::cout << "Inside Destr" << std::endl;
    }

    void display(){
        std::cout << country << " : " << golds << std::endl;
    }
};

void* operator new(std::size_t osize){
    std::cout << "Inside My GLOBAL Operator New" << std::endl;
    
    void *p = malloc(osize);
    return p;
}

void operator delete(void* ptr){
    std::cout << "Inside My GLOBAL Operator Delete" << std::endl;

    free(ptr);
}

int main(){
    OlympicGolds *obj1 = new OlympicGolds("USA", 39);
    obj1->display();

    delete obj1;    //OR delete(obj1); C-style also works
    //you use delete when you create an obj using new keyword to free its ptr memory

    return 0;
}