//While( user == gullible )
/*
Write a program that continues to asks the user to enter any number other than 5 until the user enters the number 5.
Then tell the user "Hey! you weren't supposed to enter 5!" and exit the program.

★ Modify the program so that after 10 iterations if the user still hasn't entered 5 will 
tell the user "Wow, you're more patient then I am, you win" and exit.

★★ Modify the program so that it asks the user to enter any number other than the number equal to the number 
of times they've been asked to enter a number. (i.e on the first iteration "Please enter any number 
other than 0" and on the second iteration "Please enter any number other than 1" etc. etc. 
The program must behave accordingly exiting when the user enters the number they were asked not to.)
*/

//Always write some program description here
#include <iostream>

using namespace std;

//Part-3 Program : Good one to do dry run
int main(){
    int num, i(0);

    do{
        i++;

        std::cout << "Enter number other than " << i <<" : ";
        std::cin >> num;

        //i++; //See what happens if you increment i here instead of at the top

    }while(num > i || num < i); //Do dry run with this condition (num != i); & (num == i);

    std::cout << "Hey, you weren't supposed to enter " << i << " !\n";

    return 0;
}

/*
//Part-2 Program
int main(){
    int num, i(0);

    do{
        std::cout << "Enter number other than 5 : ";
        std::cin >> num;

        i++;
        if(i == 10){
            std::cout << "Wow, you're more patient then I am, you win\n";
            exit(0);
        }
    }while(num != 5);

    std::cout << "hey, you weren't supposed to enter 5\n";

    return 0;
}
*/

/* 
//Part-1 Program
int main(){
    
    int num;

    do{
        std::cout << "Enter any number other than 5 : ";
        std::cin >> num;
    }while(num < 5 || num > 5); //OR num != 5 also works

    std::cout << "hey, you weren't supposed to enter 5\n"; 
    return 0;
}
*/