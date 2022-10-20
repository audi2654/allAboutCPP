//Write a function that checks whether an element occurs in a list.

#include <iostream>
#include <vector>
#include <string.h>
#include <string>

using namespace std;


void display(vector<string> &vStr){
    for (size_t i = 0; i < vStr.size(); i++)
    {       
        std::cout << vStr[i] << " ";
    }
    cout << endl;
}

// void checkString(const vector<string> vStr, const string str){
//     for(int i = 0; i < vStr.size(); i++)
//     {
//         if(strcmp(vStr[i+1], vStr[i]) != 0)
//             cout << "String in Vectot : " << str << " : " << vStr[i];
//         else
//             cout << "String not in Vector" << str << " : " << vStr[i];
//     }
// }

// void checkString(vector<string> &vStr, string &str){
//     for(vector<string>::iterator it = vStr.begin(); it != vStr.end(), it++)
//     {
//         if(strcmp(str, *it != 0))
//             cout << "String in Vectot : " << str << " : " << *it;
//         else
//             cout << "String not in Vector" << str << " : " << *it;
//     }
// }


int main(){
    int size(0);
    string str, str2;

    vector<string> vecStr;

    cout << "Enter size of String Vector : ";
    cin >> size;

    for (size_t i = 0; i < size; i++)
    {       
        cout << "Enter your string " << i << " : ";
        cin >> str;
        vecStr.push_back(str);
    }
    
    display(vecStr);

    //Compare Funtion
    cout << "Enter a String you want to check : ";
    cin >> str2;

    // checkString(vecStr, str);
    int i = 0, flag(0);
    for(i; i < vecStr.size(); i++)
    {
        if(str2.compare(vecStr[i]) != 0){
            flag = 1;
        } else flag = 0;

    }

    
    if(flag == 1){
        cout << "String in Vector : " << str2 << " : " << vecStr[i-1]  << endl;
    } else {
        cout << "String not in Vector : " << str2 << " : " << vecStr[i-1]  << endl;
    }
    return 0;
}