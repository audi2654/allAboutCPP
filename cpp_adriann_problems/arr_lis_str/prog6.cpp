//Write a function that tests whether a string is a palindrome.
//using string & vector

#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;

    cout << "Enter String : ";
    cin >> str;

    int flag = 1;
    int i = 0;
    int j = str.length() - 1;

    for (size_t i = 0; i < j; i++)
    {
        if(str.at(i) != str.at(j))
        {
            flag = 0;
        }
        else
        {
            j--;   
        }
    }   

    if(flag == 0){
        cout << "String not palindrome\n";
    } else{
        cout << "String is palindrome\n";
    }

    return 0;
}