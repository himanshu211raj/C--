#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int c = a + b;
    return c;
}

// This will not swap a and b  //! because the value of x & y gets copied here and when a & b changed there will be no change in x & y value.
void swap(int a, int b)
{                 //temp a b
    int temp = a; //4   4  5
    a = b;        //4   5  5
    b = temp;     //4   5  4
}

// Call by reference using pointers //! because the address of x & y gets copied here and when address of a & b changed there will be change in x & y value also.
void swapPointer(int *a, int *b)
{                  //temp a b
    int temp = *a; //4   4  5
    *a = *b;       //4   5  5
    *b = temp;     //4   5  4
}

// Call by reference using C++ reference Variables  //! as a & b points x & y inside memory so it will make swap of numbers.
// int &
void swapReferenceVar(int &a, int &b)
{                 //temp a b
    int temp = a; //4   4  5
    a = b;        //4   5  5
    b = temp;     //4   5  4
    // return a;
}

int main()
{
    int x = 4, y = 5;
    // cout<<"The sum of 4 and 5 is "<<sum(a, b);
    cout << "The value of x is " << x << " and the value of y is " << y << endl;
    // swap(x, y); // This will not swap a and b
    // swapPointer(&x, &y); //This will swap a and b using pointer reference
    swapReferenceVar(x, y); //This will swap a and b using reference variables
    // swapReferenceVar(x, y) = 766; //This will swap a and b using reference variables
    cout << "The value of x is " << x << " and the value of y is " << y << endl;
    return 0;
}
