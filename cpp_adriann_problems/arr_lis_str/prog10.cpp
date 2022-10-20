//Write a function that combines two lists by alternatingly taking elements.
//e.g. [a,b,c], [1,2,3] → [a,1,b,2,c,3].

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void display(vector<string> &v){
    for (size_t i = 0; i < v.size(); i++)
    {
        cout << v.at(i);
    }
    cout << endl;
}

int main(){
    vector<string> v1 = { "a", "b", "c"};
    vector<string> v2 = { "1", "2", "3"};    
    vector<string> v3;

    for (size_t i = 0; i < 6; i++)
    {
        if(i % 2 == 0){
            v3.insert(v3.begin() + i, v1.begin() + i, v1.end());
        } else{
            v3.insert(v3.begin() + i, v2.begin() + i, v1.end());
        }
    }

    display(v3);
    
    return 0;
}