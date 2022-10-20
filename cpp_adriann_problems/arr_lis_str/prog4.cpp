//Write a function that returns the elements on odd positions in a list.
//Using Array, Vector & List

#include <iostream>
#include <vector>

using namespace std;

class oddPos{
    int size;
    int arr[];

    public:
    oddPos();
    void array(int&);
    void vector(int&);
    void arrDisplay();
};

oddPos::oddPos(){
    cout << "This is a no arg constr\n";
    size = 0;
    arr[size];
}

void oddPos::array(int& size){
    this->size = size;

    for (size_t i = 0; i < size; i++)
    {
        cout << "Enter Array element " << i+1 << " : ";
        cin >> this->arr[i];
    }
    cout << endl;

    arrDisplay();
}

void oddPos::arrDisplay(){

    cout << "Entered array is : ";
    for (size_t i = 0; i < size; i++)
    {
        cout << this->arr[i] << " ";
    }
    cout << endl; 
}



int main(){
    int size(0);

    cout << "Enter size of Array of Number : ";
    cin >> size;


    oddPos obj1;

    obj1.array(size);




/*
    //Working Solution
    int arr[size];

    for (size_t i = 0; i < size; i++)
    {
        cout << "Enter Array element " << i+1 << " : ";
        cin >> arr[i];
    }
    cout << endl;

    cout << "Entered array is : ";
    for (size_t i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Odd Elements in array are : ";
    for (size_t i = 0; i < size; i++)
    {
        if (arr[i] % 2 != 0)
        {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
    cout << endl;


    vector<int> vec;
    int element;
    for (size_t i = 0; i < size; i++)
    {
        cout << "Enter Vector element " << i+1 << " : ";
        cin >> element;
        vec.push_back(element);
    }
    cout << endl;

    cout << "Odd Elements in Vector are : ";
    for (int i = 0; i < size; i++)
    {
        if (vec[i] % 2 != 0)
        {
            cout << vec[i] << " ";
        }
    }
    cout << endl;


*/
    return 0;
}