#include<iostream>

int main(){

    int x(12), y(9);
    
    std::cout<<"Value of x==y: "<<(x==y)<<std::endl;                    //0
    std::cout<<"Value of x<=y: "<<(x<=y)<<std::endl;                    //0
    std::cout<<"Value of x>=y: "<<(x>=y)<<std::endl;                    //1
    std::cout<<"Value of x!=y: "<<(x!=y)<<std::endl;                    //1
    std::cout<<"Value of x!=y && x>y: "<<(x!=y && x>y)<<std::endl;      //1 x!=y:true and since its &&, next opeartion will be checked 
    std::cout<<"Value of y<x || x>y: "<<(y<x || x>y)<<std::endl;        //1 y<x:true and since its ||, next opeartion won't be checked

    return 0;
}