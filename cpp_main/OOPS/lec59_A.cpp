//Lecture - 59 Part A1 : Operator Overloading for EXTRACTION operator '<<', similar things for '>>'
//Program to show it in 3 ways
//Method-1: FRIEND FUNCTION

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

    //Method-1: FRIEND FUNCTION
    friend std::ostream& operator<<(std::ostream& out, Core2Web& objRef){
        out << objRef.langs << std::endl;
        out << objRef.noOfTeachers << std::endl;
        return(out);     //return std::cout; also works
    }
};

int main(){
    Core2Web obj1(6,2);

    std::cout << obj1;       //call goes to: ostream& operator<<(ostream, Core2Web);

    return 0;
}