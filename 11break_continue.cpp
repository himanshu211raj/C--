//! boilerplate code made in this video
#include <iostream>
using namespace std;

int main()
{
    // for (int i = 0; i < 40; i++)
    // {
    //     /* code */
    //     if(i==2){
    //         break;     (break / stop the program here if condition gets true)
    //     }
    //     cout<<i<<endl;
    // }
    for (int i = 0; i < 40; i++)
    {
        /* code */
        if (i == 2)
        {
            continue; // (skip the current execution / iteration and run all iterations as usual, it didn't execute the program when condition gets true)
        }
        cout << i << endl;
    }

    return 0;
}
