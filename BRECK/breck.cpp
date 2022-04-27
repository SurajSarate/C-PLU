#include <iostream>
using namespace std;

int main()
{
    // int pocketmoney=3000;

    // for (int date = 1; date <= 31; date++)
    // {
    //     if (date % 2 == 0)
    //     {
    //         continue;
    //     }

    //     cout << date << endl;
    //     pocketmoney-=300;
    //     if(pocketmoney==0){
    //         break;
    //     }

    // }

    int number1,number2;
    cout<<"enter number1"<<endl;
    cin>>number1;
    cout<<"enter number2"<<endl;
    cin>>number2;
    int a;
    for (int i = number1; i <= number2; i++)
    {
        for (a=2; a < i; a++)
        {
            if(i%a==0){
                break;
            }
        }
        if(a==i){
            cout<<i<<endl;
        }
        
    }
    

    return 0;
}