//Write a program that prints all prime numbers. (Note: if your programming language does not support arbitrary 
//size numbers, printing all primes up to the largest number you can easily represent is fine too.)

#include <iostream>

class prime {
    private:
        int pnum;
    public:
        prime(int &num);    //pass by reference
    
        int disp_pnum();
};

prime::prime(int &num) {    //pass by reference
    std::cout << "This is Para constr";
    this->pnum = num;
}

int prime::disp_pnum(){
    for (size_t i = 2; i < pnum; i++){
        for (size_t j = 2; j < pnum; j++){
            if (j % ) {
            /* code */
            }
        }
    }
}

int main(){

    int input;

    std::cout << "Enter number : ";
    std::cin >> input;

    prime obj1(input);      //pass by reference

    std::cout << obj1.disp_pnum();

    return 0;
}

