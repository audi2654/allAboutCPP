#include <iostream>
#include <vector>

using namespace std;

void display(vector<int> &vec)  //using Reference for passing vec1 of type int vector
{
    for (size_t i = 0; i < vec.size() /*size of vector*/; i++)
    {
        cout << vec[i] << " "; // OR cout << vec.at(i) << " "; accessing element at
    }
    cout << endl;
}

int main(){
    int size(0), element(0);

    vector<int> vec1;

    cout << "Enter size for Vector : "; 
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter element in vector : ";
        cin >> element;
        vec1.push_back(element);
    }
    
    display(vec1);

    cout << vec1.front() << " " << vec1.back() << endl; //Displat 1st & last member
    
    vec1[3] = 999;
    
    display(vec1);

    cout << vec1[size-1] << " " << vec1.back() << endl;

    auto c = vec1.capacity();
    cout << " Max Size is : " << vec1.max_size() << " Capacity is : " << c << endl;

    vector<int>::iterator iter = vec1.begin();

    vec1.insert(iter+1, 3, 951);

    display(vec1);

    return 0;
}