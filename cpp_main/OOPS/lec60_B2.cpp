//Lecture - 60 Part B2 : Operator Overloading for operator 'new' & 'delete'
//Program to show it in 2 ways
//Method-2: as IN-CLASS MEMBER FUNCTION

//Remember the output flow of this program
//Try commenting & uncommenting things from this program, gives many different results

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

    //Whenever you overload operator new & delete from inside a class, 
    //the operator function of new & delete automatically becomes STATIC,
    //hence it has no hidden 'this' pointer as its 1st parameter

    void* operator new(std::size_t osize){                    
        //here friend void* operator new() or static void* operator new() also works
        std::cout << "Inside My LOCAL Operator New" << std::endl;
        
        //void *p = malloc(osize);

        void *p = ::operator new(osize);      
        //this will again give an another call to GLOBAL new operator func yours or from library
        //from inside your in class overloaded new operator function & then calls malloc from inside that global func

        //std::cout << this->golds;           //gives ERROR because static func & no this ptr
        return p;
    }

    void operator delete(void* ptr){
        std::cout << "Inside My LOCAL Operator Delete" << std::endl;

        free(ptr);
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

    //int *x = new int(10);          
    //here for primitive data types new always calls the global operator new function from library or 
    //your written global operator funct & not yours in class member func,
    //here similar logic applies as unary, binary operators used wih primitive data types 
    //even when you've overloaded those operator funcs for your own class data type 

    delete obj1;    //OR delete(obj1); C-style also works
    //you use delete when you create an obj using new keyword to free its ptr memory

    return 0;
}