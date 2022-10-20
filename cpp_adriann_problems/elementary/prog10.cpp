//Write a program that prints the next 20 leap years.

// Things used in this program
// class, pointer type objects, constructor, This pointer, argument passing by value in member function by using
// another member function inside class, argument passing by value in member function from user using reference



#include <iostream>

class leapyear
{
private:
    int num;
public:
    leapyear();

    void leap_y(int &x);    //pass by reference

    void disp(int &input);  //pass by reference
  
};

leapyear::leapyear(){
    std::cout << "In constructor\n";
}

void leapyear::leap_y(int &x){

    if(x % 4 == 0)
    {
        if(x % 100 == 0)
        {
            if(x % 400 == 0)
            {
                std::cout << "Leap Year : " << x << std::endl;
            } else
            { 
                std::cout << "No Leap Year"<< std::endl;
            }
        } else
        { 
            std::cout << "Leap Year"<< std::endl;
        }
    } else
    { 
        std::cout << "No Leap Year"<< std::endl;
    }
}

void leapyear::disp(int &input){        //pass by reference
    leap_y(input);
}

int main(){
    int ip;

    std::cout << "Enter num : ";
    std::cin >> ip;

    leapyear *obj1 = new leapyear;

    obj1->disp(ip);     //pass by reference
    return 0;
}