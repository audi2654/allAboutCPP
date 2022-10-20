#include<iostream>

int main(){

    int x = 3, a;

    a = ++x + ++x + ++x + ++x;

 // a = x + ++x + ++x + ++x     here x=4                                                            1st pre increment
 // a = x + x + ++x + ++x       here x=5 & two opeartions done, add them before moving ahead        2nd pre increment
 // a = (5 + 5) + ++x + ++x 

 // a = (10) + x + ++x          here x=6 & two operations done, add them before moving ahead        3rd pre increment
 // a = ((10) + 6) + ++x 

 // a = (16) + x                here x=7 & two operations done, add them before moving ahead        4th & last pre increment
 // a = (16) + 7
 
 // a = ((16) + 7)
 // a = (23)                    latest value of x is 7

    std::cout<<"Value of a: "<<a<<std::endl;    //23
    std::cout<<"Value of x: "<<x<<std::endl;    //7

    return 0;
}