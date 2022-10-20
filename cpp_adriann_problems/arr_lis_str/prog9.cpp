//Write a function on_all that applies a function to every element of a list.
//Use it to print the first twenty perfect squares. The perfect squares can be found by multiplying each 
//natural number with itself. The first few perfect squares are 1*1= 1, 2*2=4, 3*3=9, 4*4=16.
//Twelve for example is not a perfect square because there is no natural number m so that m*m=12.
//(This question is tricky if your programming language makes it difficult to pass functions as arguments.)

#include <iostream>
#include <vector>

using namespace std;

void for_all(vector<int> v){
    for (size_t i = 0; i < v.size(); i++)
    {
        v.at(i) = (i+1)*(i+1);
        cout << v.at(i) << " ";
    }
    cout << endl;
}

void display(vector<int> &v){
    for (int it = 0; it < v.size(); it++)
    {
        cout << v.at(it) << " ";
    }
    cout << endl;
}

int main(){
    int count(20);
    vector<int> vInt;

    for (int it = 0; it < count; it++)
    {
        vInt.push_back(it+1);
    }

    display(vInt);

    for_all(vInt);
    
    return 0;
}