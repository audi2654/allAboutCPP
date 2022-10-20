#include <iostream>

int main(){

    int i,j;

    for(i=1; i<=5; i++){
        for(j=1; j<=5; j++){
            std::cout << "* ";
        }
        std::cout << "\n";
    }


    return 0;
}