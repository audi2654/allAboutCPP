//Lecture - 59 Part A2 : Operator Overloading for EXTRACTION operator '<<', similar things for '>>'
//Program to show it in 3 ways

//Method-2: IN CLASS MEMBER FUNCTION

//PROGRAM will never WORK

//You can never overload << & >> operator using a IN CLASS MEMBER FUNCTION
//because for << & >> to work the first para has to be of ostream type compulsorily, but writing a func
//inside class as member requires & has by default 1st para as 'this' ptr to class which is not possible
//in case for << & >> operator & it causes contradictions & gives error


//Check out lec58_A.cpp & lec58_A2.cpp for more on this, similar logic applies here

#include <iostream>

class Core2Web{
    private:
    int langs;
    int noOfTeachers;

    public:
    Core2Web(int langs, int noOfTeachers){
        this->langs = langs;
        this->noOfTeachers = noOfTeachers;
    }

    //Method-2: MEMBER FUNCTION
    std::ostream& operator<<(std::ostream& out){
        out << langs << std::endl;
        out << noOfTeachers << std::endl;
        return(out);
    }
};

int main(){
    Core2Web obj1(6,2);

    std::cout << obj1;       //call goes to: ostream& operator<<(ostream, Core2Web);

    return 0;
}