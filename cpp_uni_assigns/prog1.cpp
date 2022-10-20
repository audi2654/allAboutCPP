#include <iostream>

using namespace std;

void printIntroMenu();
void printMainMenu();
void start();
void login();
void createAccount();

char menuInput;

int main(){
    
    cout << "Welcome to ATM" << endl;

    start();
    
    return 0;
}

void start(){
    cout << "Select an option from below : " << endl;

    printIntroMenu();
}

void printIntroMenu(){
    char option;
    do
    {
        cout << "l -> Login" << endl;
        cout << "c -> Create Account" << endl;
        cout << "q -> Quit" << endl;

        cout << "Enter Option : ";
        cin >> option;
        cout << endl;

        switch (option)
        {
        case 'l':
            cout << "Login" << endl;
            login();
            break;
        
        case 'c':
            cout << "Create Account" << endl;
            createAccount();
            break;

        case 'q':
            cout << "Quit" << endl;
            cout << "Program Quit" << endl;
            exit(0);
            break;

        default:
            break;
        }
    } while (option != 'q');   
}

void login(){

}

void createAccount(){

}