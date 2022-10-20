//Write three functions that compute the sum of the numbers in a list
//using a for-loop, a while-loop and recursion.

#include <iostream>

using namespace std;

void sumWithFor(int [], int);
void sumWithWhile(int [], int);

void sumWithFor(int arr[], int cnt){
    int sum(0);

    for (size_t i = 0; i < cnt; i++)
    {
        sum = sum + arr[i];    
    }

    cout << "Addition of array list with FOR LOOP is : " << sum << endl;
}

void sumWithWhile(int arr[], int cnt){
    int sum(0), i(0);

    while(i < cnt){
        sum = sum + arr[i];
        i++;
    }

    cout << "Addition of array list with WHILE LOOP is : " << sum << endl;
}


int main(){
    int count;
    
    cout << "Enter count for Array List : ";
    cin >> count;

    int array[count];

    for(int i = 0; i < count; i++){
        cout << "Enter array element " << i+1 << " : ";
        cin >> array[i];
    }


    sumWithFor(array, count);

    sumWithWhile(array, count);

    return 0;
}

