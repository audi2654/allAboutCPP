//Print multiples of 6 upto 60

#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

    int num, range, sum(0);

    printf("Enter any number : ");
    scanf("%d", &num);
    printf("Enter range number : ");
    scanf("%d", &range);

    //Solution 1

    // for( int i = 1; i <= range; i++){
    //     sum = i * num;
    //     if(sum > range){
    //         ;
    //     } else
    //     printf(" The multiple of num %d in range %d are : %d \n", num, range, sum);
    // }

    //Solution 2

    // for(sum = num; sum <= range; sum = sum+num)
    // {
    //     cout << sum << endl;
    // }
        
    //Solution 3

    // while(sum <= range-num) {
    //     sum = sum + num;
    //     cout << sum << endl;
    // }

    //Solution 4

    for (int i = num; i<=range-num; i++) {
        sum = sum + num;
        if (sum <= range)
        {
            cout << sum << endl;
        }
    }

    //Solution 5

    // do{
    //     sum = sum + num;
    //     cout << sum << endl;
    // } while (sum <= range-num);

    return 0;
}