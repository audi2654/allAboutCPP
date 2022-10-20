//print ascii value of 1 to 128

#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

    //char range is -127 to +127 only & ascii value of 7 is bell

    /*for (int i = 1; i <= 128; i++)  
    {
        unsigned char ia = char(i);     
        cout << "The char for " << i << " is " << ia << endl;
        // if( i == 7){
        //     ;
        // } else
        // cout << i << endl;    
    }*/
    

    for (unsigned char i = 1; i <= 128; i++)
    {
        int ia = int(i);
        cout << "The char for " << ia << " is " << i << endl;
    }
    

    // for (unsigned char i = 1; i <= 138; i++)
    // {
    //     printf("The char for %d is : %c \n", i, i);
    // }


    return 0;
}