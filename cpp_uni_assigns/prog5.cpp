/*Write a program that presents the user w/ a choice of your 5 favorite beverages 
(Coke, Water, Sprite, ... , Whatever). Then allow the user to choose a beverage by entering a number 1-5.
Output which beverage they chose.

★ If you program uses if statements instead of a switch statement, modify it to use a switch statement.
If instead your program uses a switch statement, modify it to use if/else-if statements.

★★ Modify the program so that if the user enters a choice other than 1-5 then it will output 
"Error. choice was not valid, here is your money back."
*/


#include <iostream>

using namespace std;

int main(){
    int choice;
    char ch;

    do
    {
        std::cout << "1. Coke" << std::endl;
        std::cout << "2. Water" << std::endl;
        std::cout << "3. Sprite" << std::endl;
        std::cout << "4. Frooty" << std::endl;
        std::cout << "5. Juice" << std::endl;
        std::cout << "Enter your choice : ";
        std::cin >> choice;

        //Using if else
        /*
        if(choice == 1) {
            std::cout << "Here's you Coke" << std::endl;
        }else if(choice == 2) {
            std::cout << "Here's you Water" << std::endl;
        }else if(choice == 3) {
            std::cout << "Here's you Sprite" << std::endl;
        }else if(choice == 4) {
            std::cout << "Here's you Frooty" << std::endl;
        }else if(choice == 5) {
            std::cout << "Here's you Juice" << std::endl;
        }else{
            std::cout << "Error. choice was not valid, here is your money back" << std::endl;
        }
        */

        //Using switch
        
        switch (choice)
        {
        case 1:
            std::cout << "Here's you Coke" << std::endl;
            break;

        case 2:
            std::cout << "Here's you Water" << std::endl;
            break;

        case 3:
            std::cout << "Here's you Sprite" << std::endl;
            break;

        case 4:
            std::cout << "Here's you Frooty" << std::endl;
            break;

        case 5:
            std::cout << "Here's you Juice" << std::endl;
            break;

        default:
            std::cout << "Error. choice was not valid, here is your money back" << std::endl;
            break;
        }
        
        std::cout << "Do you want to continue? y/n : ";
        std::cin >> ch;
    } while (ch == 'Y' || ch == 'y');

    return 0;
}