// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int z[10]; /* Array defined as global variable so as to get it initialised to 0 in non bss part*/

int main() {
    // Write C++ code here
    std::cout << "Hello world!" << endl;
    
    int x(1), y(2);
    int *ptr;   /* ptr is a pointer to int */
    
    cout << x <<" " << y << " " << z[0] << endl;
    
    ptr = &x;         /* ptr now points to x */  
    y = *ptr;           /* y is now 1 */
    *ptr = 0;           /* x is now 0 */
    z[0] = 263;
    ptr = &z[0];        /* ip now points to z[O] */
    
    cout << x <<" " << y << " " << z[0] << " " << *ptr << endl;
    return 0;
}