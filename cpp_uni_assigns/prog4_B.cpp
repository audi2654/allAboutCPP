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

using namespace std;

struct PAN_NUM{
    int id_person;
    int pan_cnt;
};

/*void disp(PAN_NUM s[]){
    std::cout << "Person: " << s->id_person << std::endl;
    std::cout << "Pancakes: " << s->pan_cnt << std::endl;
    std::cout << std::endl;
}*/

void mostPans();

int main(){
    int pNum;
    PAN_NUM person[10];

    for(int i = 1; i <= 10; i++){
        std::cout << "Enter Pancake for Person " << i << " : ";
        std::cin >> person[i].pan_cnt;
        person[i].id_person = i;
    }

    for(int i = 1; i <= 10; i++){
        std::cout << "Person: " << person[i].id_person << std::endl;
        std::cout << "Pancakes: " << person[i].pancakes << std::endl;
        std::cout << std::endl;
    }

    

    return 0;
}