#include <iostream>
using namespace std;

int main() {
    int a(10), i{1};

    for(i; i<=10; i++) {
        if(a == 10) {
            int b = 0;
            switch(b) {
                case 0:
                    std::cout<<"In Switch "<<i<<"\n";
                    //std::break();
            }
        }
    }
}