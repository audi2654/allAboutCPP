//Lecture - 59 Part A3 : Operator Overloading for EXTRACTION operator '<<', similar things for '>>'
//Program to show it in 3 ways
//Method-3: NORMAL NON-CLASS FUNCTION

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

    int getLangs(){ return langs; }
    int getNoOfTeachers(){ return noOfTeachers; }
};

//Method-3: NORMAL NON-CLASS FUNCTION
std::ostream& operator<<(std::ostream& out, Core2Web objRef){
    out << objRef.getLangs() << std::endl;
    out << objRef.getNoOfTeachers() << std::endl;
    return out;
}

int main(){
    Core2Web obj1(6,2);

    std::cout << obj1;       //call goes to: ostream& operator<<(ostream, Core2Web);

    return 0;
}