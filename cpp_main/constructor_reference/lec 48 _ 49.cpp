//Lecture 48 & 49

#include <iostream>
using namespace std;

class ran{
    int r, q;
    ran *a;  //OR ran* a; when you create an object of same class inside same class you'll have to use pointer
    //This is Self Referential Pointer i.e ran pointer to ran, not a full instance
    //Not using pointer here gives error because while compiling up until this line Compiler doesn't know the total size of class ran
    //so unless class type ran is totally compiled it wouldn't know the size of whole class & what size to allot to object 'a'
    //but using pointer here is like since sizeof(a) == sizeof(void*) == well-known to the compiler  

    public:
    ran(){
        cout << "No arg constr" << endl;
    }

    ran(const ran& ref)
    //We write '&' reference before 'ref' here to avoid recursive call to Copy Constr when an obj calls the Copy Constr & is being copied in this 'ref'
    //If const is not written here line ran& obj4 = obj1.display(obj3); gives error i.e creating new obj to catch the return value of display()
    //Refer Copy Elision in Compiler concept
    { 
        cout << "copy constr" << endl;
    }

    ran &display(ran &ref){ //if the retuned value i.e object is to be catched in a new obj in main() you'll have to write const in copy constr
        //ran* ref;      //if you create an obj var here & return it it gives error as you are returning an local var, you can either declare it as global or create it as pointer obj var & return it as ptr

        return ref;        //OR return *ref; if even pointer var is returned it works
    }

    //another version of ran display() where no error is given where you dont use return type with reference i.e ran&
    /*ran display(ran ref){
        return ref;
    }*/

    int& disp();
};

int main(){
    ran obj1;
    ran obj2(obj1);
    ran obj3 = obj1;
    ran obj4 = obj1.display(obj3);    //this'll give error if const in not written in Copy Constr  //Refer Copy Elision in Compiler concept
    //ran& obj4 = obj1.display(obj3); //this also works

    return 0;
}