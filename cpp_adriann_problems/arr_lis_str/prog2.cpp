// Write function that reverses a list, preferably in place. In place means original array must be used


//when using array of numbers or pattern always use range from 1 to n to avoid segmentation fault caused by 0

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

//In Place implementation 
void display(vector<int> &vec){

    for (size_t i = 0; i < vec.size(); i++)
    {
        cout << vec.at(i) << " ";
    }
    cout << endl;
}

int main(){
    int element, temp(0), size(0);
    vector<int> vec;

    cout << "Enter vector size : ";
    cin >> size;

    for (size_t i = 0; i < size; i++)
    {
        cout << "Enter element : ";
        cin >> element;
        vec.push_back(element);
    }

    display(vec);

    cout << "Vector size : " << vec.size() << endl;

    //Simple swapping if values
    for (size_t i = 0; i < vec.size() / 2; i++)
    {
        temp = vec[i];
        vec[i] = vec[vec.size() - 1 - i];
        vec[vec.size() - 1 - i] = temp;
    }

    cout << "Using Simple Swapping : ";
    display(vec);

    //Using reverse() function 
    reverse(vec.begin(), vec.end());
    cout << "Using Reverse Algorithm : ";
    display(vec);

    //Using swap() function
    for (size_t i = 0; i < vec.size() / 2; i++)
    {
        swap(vec[i], vec[vec.size() - 1 - i]);
    }

    cout << "Using Swap Function : ";
    display(vec);
    return 0;
}






/*
Not in Place implementation

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void reverse(int arr[], int n){
    reverse(arr, arr + n);
    std::cout << std::endl;
}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Size of arr : " << sizeof(arr) << std::endl;

    std::cout << "Size of n : " << n << "\nSize of arr[0] : " << sizeof(arr[3]) << std::endl;

    std::cout << std::endl;

    print(arr, n);
    reverse(arr, n);
    
    print(arr, n);



    return 0;
} 
*/



/*
class reverse {
    int num;

    public:
        reverse();

        void disp(int (array)[],int size){
            for (size_t i = size; i >= 1; i--)              
            {
                std::cout << array[i] << " ";
            }
            std::cout << std::endl;
        }
};

reverse::reverse(){
    num = 0;
    std::cout << "This is no arg constr" << std::endl;
}

int num, size;          //declaring global variables

int main(){

    std::cout << "Enter array size : ";
    std::cin >> size;

    int array[size];

    for (size_t i = 1; i <= size; i++)
    {
        std::cin >> array[i];
    }

    reverse obj1;

    obj1.disp(array, size);
    
    return 0;
}

*/