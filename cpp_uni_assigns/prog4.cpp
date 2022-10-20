//Pancake Glutton

/*
Write a program that asks the user to enter the number of pancakes eaten for breakfast by 10 different people (Person 1, Person 2, ..., Person 10)
Once the data has been entered the program must analyze the data and output which person ate the most pancakes for breakfast.

★ Modify the program so that it also outputs which person ate the least number of pancakes for breakfast.

★★★★ Modify the program so that it outputs a list in order of number of pancakes eaten of all 10 people.
i.e.
Person 4: ate 10 pancakes
Person 3: ate 7 pancakes
Person 8: ate 4 pancakes
...
Person 5: ate 0 pancakes
*/

#include <iostream>
#include <vector>

using namespace std;

/*struct {
    int id_person;
    int pan_cnt;
} PAN_NUM ;*/

void disp(vector<int>& v){
    for (size_t i = 0; i < v.size(); i++)
    {
        std::cout << v.at(i) << " ";
    }
    std::cout << std::endl;
}

void mostPans(vector<int> &v){
    int max{0}, i;
    for (i = 0; i < v.size() - 1; i++)
    {
        if (max < v.at(i))
        {
            max = v.at(i);
        }
        
    }
    std::cout << "Most pancakes : " << max << " by Person " << i+1 << " " << std::endl;
}

int main(){
    int pNum;
    vector<int> pVec;

    for(int i = 0; i < 10; i++){
        std::cout << "Enter Pancake for Person " << i+1 << " : ";
        std::cin >> pNum;
        pVec.push_back(pNum);
    }

    disp(pVec);

    mostPans(pVec);


    return 0;
}