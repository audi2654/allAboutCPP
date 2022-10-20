// Lec-53 Part B: Destructor-1
#include <iostream>

class Demo{
    int x = 10;

    public:

    /*3 things that compiler creates by default in class if not written & gets copied in each object
        1.Default Constr (here won't come because we have user defined)
        2.Default Copy Constr (here it will come because we haven't user defined)
        3.Default Destructor (here it won't come because we have user defined)
    */

    Demo(){
        //x is defined above but compiler still gets it initialized in here (instance var)

        std::cout << "In Constr" << std::endl;
    }

    ~Demo(){
        //Like constr, destr too will be called everytime for each object created in a program

        std::cout << "In Destr" << std::endl;
    }

};


int main(){
    //Where a memory to an object is allocated is an implementation detail, compiler use their built in allocator 
    //to decide what should be allocated in which segment & where, using custom allocator you can even allocate
    //memory to new keyword objects in text segment, heap for new keyword is just most commonly used implementation
    //Similar static & dymanic memory allocation techniques are implemented for functions, vars, etc


    //Each obj get its own copy of Constr, Copy Constr, Destructor (& Para Constr only if user defined)

    Demo obj1;     //Statically allocated: All non-heap i.e with static keyword or non-static obj gets created in code/text segment of virtual memory space
    //in the memory of function in which it is created i.e in Stack segment, so here in our case obj1 gets created
    //in the stack frame of main() func in stack segement


    Demo *obj2 = new Demo();     //Dynamically allocated: gets created using (new or malloc) in heap segment of virtual memory space

    delete(obj2);   //Calls Destructor for only obj2
    return 0;       //Calls Destructor for obj1 & remaining clean up
}

