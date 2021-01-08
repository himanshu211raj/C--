#include <iostream>
using namespace std;

int main()
{
    // What is a pointer? ----> Data type which holds the address of other data types
    int a = 3;
    int *b; //(b is a pointer variable here which points at address of variableS a)
    b = &a;

    // & ---> (Address of) Operator   => tells the adrress of variable.
    cout << "The address of a is " << &a << endl;
    cout << "The address of a is " << b << endl;

    // * ---> (value at) Dereference operator  => means this shows the value at the variable which is derefrenced.
    cout << "The value at address b is " << *b << endl;

    // Pointer to pointer  => means a pointer which stores the address of a pointer
    int **c = &b;
    cout << "The address of b is " << &b << endl;
    cout << "The address of b is " << c << endl;
    cout << "The value at address c is " << *c << endl;
    cout << "The value at address value_at(value_at(c)) is " << **c << endl;

    return 0;
}
