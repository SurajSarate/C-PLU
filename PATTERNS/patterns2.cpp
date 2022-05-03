#include <iostream>
using namespace std;

int main()
{
    int row = 5, col, counter = 1;

    // for (int i = row; i >= 1; i--)
    // {
    //     // 12345
    //     // 1234
    //     // 123
    //     // 12
    //     // 1
    //     counter=1;
    //     for (int j = 1; j <= i; j++,counter++){
    //         cout<<counter;
    //     }
    //     cout<<endl;
    // }

    // for (int i = 1; i <= row; i++)
    // {
    //     // 1
    //     // 0  1
    //     // 1  0  1
    //     // 0  1  0  1
    //     // 1  0  1  0  1

    //     for (int j = 1; j <= i; j++)
    //     {
    //         if((i+j)%2==0){
    //             cout<<" 1 ";
    //         }
    //         else{
    //             cout<<" 0 ";
    //         }
    //     }
    //     cout<<endl;

    // }

    // for (int i = 1; i <= row; i++)
    // {
    //     for (int j = 1; j <=row-i; j++)
    //     {
    //        cout<<' ';
    //     }
    //     for (int j = 1; j <= row;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // for (int i = 1; i <= row; i++)
    // {
    //   1
    // 1 2
    // 1 2 3
    // 1 2 3 4
    // 1 2 3 4 5
    //     for (int j = 1; j <= row - i; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << j <<" ";
    //     }
    //     cout << endl;
    // }

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= row; j++)
        {
            if (j <= row - i)
            {
                cout << " ";
            }
            else
            {
                cout << j;
            }
            
        }
        cout << endl;
    }

    return 0;
}