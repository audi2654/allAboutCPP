//Write a function that returns the largest element in a list.


#include <iostream>

class large_num{
private:
    int max;
public:
    large_num();

    void lar_num(int (array)[], int size){           //passing an array by value
        max = array[0];
        for (size_t i = 0; i < size; i++)
        {
            if (max < array[i])
            {
                std::cout << "Compared with : " << array[i] << std::endl;
                max = array[i];
            }
        }
        std::cout << max << std::endl;
    }
};

large_num::large_num()
{
    max = 0;
}

int main(){
    int size;
    large_num obj1;

    std::cout << "Enter array size";
    std::cin >> size;

    int array[size];

    for (size_t i = 0; i < size; i++)
    {
        std::cin >> array[i];
    }

    obj1.lar_num(array, size);      //passing an array by value

    return 0;
}