//Write a program that asks the user for a number n and prints the sum of the numbers 1 to n. Modify the program such 
//that only multiples of three or five are considered in the sum, e.g. 3, 5, 6, 9, 10, 12, 15 for n=17

#include <iostream>

class only_odd_num_sum{
    int sum;
    int num;

    public:
    only_odd_num_sum(int num){
        this->num = num;
        sum = 0;
    }

    int show_sum();
};

int only_odd_num_sum :: show_sum(){

    for (size_t i = 1; i < num; i++) {
        if (i%3 == 0 || i%5 == 0){
            sum = sum + i;
        }
        
    }

    return sum; // OR std::cout << "Sum is : " << sum << std::endl;

}

int main(){

    int num = 0;
    int sum;

    std::cout << "Enter number : ";
    std::cin >> num;

    only_odd_num_sum obj1(num);

    std::cout << "Sum is : " << obj1.show_sum() << std::endl;


    return 0;
}