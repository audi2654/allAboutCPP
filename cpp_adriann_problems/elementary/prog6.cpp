//Write a program that asks the user for a number n and gives them the possibility to choose between 
//computing the sum and computing the product of 1,…,n.

// Things used in this program
// class, objects, constructor, This pointer, argument passing by value in constr & member function,
// switch, while loop,

#include <iostream>

class compute
{
private:
    int add, prod, num;
public:
    compute(int num);

    int sum(int x);
    int product();
};

compute::compute(int num){
    this->num = num;
    add = 0;
    prod = 1;
}

int compute::sum(int x){

    for (size_t i = 0; i <= x; i++)
    {
        add = add + i;
    }

    return add;
    
}

int compute::product(){

    for (size_t i = 1; i <= num; i++)
    {
        prod = prod * i;
    }

    return prod;

}


int main(){
    int num,option;

    std::cout << "Enter Number : ";
    std::cin >> num;

    compute obj1(num);

    do {
    std::cout << "Enter Option \n 1.Sum \n 2.Product \n 3.Exit \n ";
    std::cin >> option;

    switch (option){
    case 1:
        std::cout << "The Sum is : "  << obj1.sum(num) << std::endl;
        break;

    case 2:
        std::cout << "The Product is : " << obj1.product() << std::endl;
        break;
    
    default:
        break;
    }

    } while (option != 3); 
    std::cout << "bye bye bhai\n";
    
    return 0;
}


