//Write a program that prints a multiplication table for numbers up to 12

#include <iostream>

class table{
    int num, prod;

    public:
    table(int num);

    void multi();
};

table::table(int num){
    this->num = num;
    prod = 1;
}

void table::multi(){
    for (size_t i = 1; i <= 12; i++){
        std::cout << num << " x " << i << " = " << num*i << std::endl;
    }
}

int main(){
    int num;

    std::cout << "Enter num : ";
    std::cin >> num;

    table obj1(num);

    obj1.multi();

    return 0;
}