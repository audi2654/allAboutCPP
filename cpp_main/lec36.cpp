//Lecture 36: Do-While Loop
//do while is used for Menu Driven Problem Applications
#include <iostream>
 
using namespace std;

//Program 2
int main(){
    int num;
    char ch;

    do{
        std::cout << "Enter Number : ";
        std::cin >> num;

        int rem(0), rev(0);
        int var = num;

        while(num != 0){
            rem = num % 10;
            rev = rev*10 + rem;
            num = num / 10;
        }

        std::cout << var << " " << rev << std::endl;
        
        std::cout << "Continue karaychay ? ";
        std::cin >> ch;

    }while(ch == 'y' || ch == 'Y'); //OR while(ch != 'n' || ch != 'N'); also works

    return 0;
}


//Program 1
/*
int main(){ 
    int i = 1;

    do{
        if(i % 2 == 0){
            std::cout << i << " is Even\n";
        } else{
            std::cout << i << " is Odd\n";
        }
        i++;

    }while(i <= 20);
    std::cout << "Out of While Loop\n";
    
    return 0;
}
*/