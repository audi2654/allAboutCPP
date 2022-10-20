//Write a function that concatenates two lists. [a,b,c], [1,2,3] → [a,b,c,1,2,3]

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void display(vector<string> &vec){
    for (size_t i = 0; i < vec.size(); i++)
    {
        cout << vec.at(i) << " ";
    }
    cout << endl;
}

int main(){
    int count;
    string element;
    vector<string> vStr1, vStr2;

    cout << "Enter count : ";
    cin >> count;

    for (size_t i = 0; i < count; i++)
    {
        cout << "Enter element at " << i+1 << " : ";
        cin >> element;
        vStr1.push_back(element);
    }
    
    cout << "Vector 1 is : "; display(vStr1);

    for (size_t i = 0; i < count; i++)
    {
        cout << "Enter element at " << i+1 << " : ";
        cin >> element;
        vStr2.push_back(element);
    }
    
    cout << "Vector 2 is : "; display(vStr2);
    cout << endl;

    vStr1.insert(vStr1.begin(), vStr2.begin(), vStr2.end());

    cout << "FINAL VEC : "; display(vStr1);
    



    return 0;
}