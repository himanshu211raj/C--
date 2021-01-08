#include <iostream>
using namespace std;

int main()
{
    // Array Example    //! in arrays the address of a vraiable is simply represented by variable name while in cases other than array the adrress is represented by '&' folowed by variable name.
    int marks[] = {23, 45, 56, 89};

    int mathMarks[4];
    mathMarks[0] = 2278;
    mathMarks[1] = 738;
    mathMarks[2] = 378;
    mathMarks[3] = 578;

    cout << "These are math marks" << endl;
    cout << mathMarks[0] << endl;
    cout << mathMarks[1] << endl;
    cout << mathMarks[2] << endl;
    cout << mathMarks[3] << endl;

    // You can change the value of an array
    marks[2] = 455;
    cout << "These are marks" << endl;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

    for (int i = 0; i < 4; i++)
    {
        cout << "The value of marks " << i << " is " << marks[i] << endl;
    }

    // * while loop
    // int i = 0;
    // while (i < 4)
    // {
    //     cout << "The value of marks " << i << " is " << marks[i] << endl;
    //     i++;
    // }

    // Quick quiz: do the same using while and do-while loops?
    //! pointer arithmetic formula [final(address) = current(address) + i *(size of datatype)]
    //!                            36 = 32 + 1 *(4) (as incrememnted by 1, int size = 4, current address = 32, final address = 36.)
    // Pointers and arrays
    int *p = marks;
    cout << *(p++) << endl;
    cout << *(++p) << endl;
    // cout<<"The value of *p is "<<*p<<endl;
    // cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    // cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    // cout<<"The value of *(p+3) is "<<*(p+3)<<endl;

    return 0;
}
