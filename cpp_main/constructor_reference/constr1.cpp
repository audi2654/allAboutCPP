// Lecture 37
// Program to show how constructor is called as soon as you create an objects 
// & it'll be called for every object you create

#include <iostream>
using namespace std;

class aditya{
private:
    int x;
public:
    aditya();
};

aditya::aditya(){
    cout << "This is no-arg constructor\n";
}

int main(){
    aditya obj1;
    aditya obj2;
    aditya obj3;
    return 0;
}