//Grading Program
/*
Write a program that allows the user to enter the grade scored in a programming class (0-100).
If the user scored a 100 then notify the user that they got a perfect score.

★ Modify the program so that if the user scored a 90-100 it informs the user that they scored an A

★★ Modify the program so that it will notify the user of their letter grade
0-59 F 60-69 D 70-79 C 80-89 B 90-100 A
*/


#include <iostream>
 
using namespace std;

char gradeFunc(int grades){
    if (grades >= 90 && grades <= 100)
        return 'A';
    else if(grades >= 80 && grades <= 89)
        return 'B';
    else if(grades >= 70 && grades <= 79)
        return 'C';
    else if(grades >= 60 && grades <= 69)
        return 'D';
    else if(grades >= 0 && grades <= 59)
        return 'F';
    else
        return 'E';
}
 
int main(){
    int grades;
    char ch;

    do{
        std::cout << "Enter your grade : ";
        std::cin >> grades;

        char x = gradeFunc(grades);
        switch(x)
        {
            case 'A' : cout << "You got Grade A\n"; break;
            case 'B' : cout << "You got Grade B\n"; break;
            case 'C' : cout << "You got Grade C\n"; break;
            case 'D' : cout << "You got Grade D\n"; break;
            case 'F' : cout << "You got Grade F\n"; break;
            default: std::cout << "Wrong Score\n"; break;
        }

        std::cout << "Do you want to continue ? (Y/N) : ";
        std::cin >> ch;
    }while(ch == 'y' || ch == 'Y');
    std::cout << "Exiting\n";

    return 0;
}