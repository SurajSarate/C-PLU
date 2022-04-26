#include <iostream>
using namespace std;

int main()
{
    // int budget;
    // cout << "Enter Your budget" << endl;
    // cin >> budget;
    // if (budget > 5000)
    // {
    //     if (budget > 10000)
    //     {
    //         cout << "Go To Party";
    //     }
    //     else
    //     {
    //         cout << "make party at home";
    //     }
    // }
    // else if (budget < 2000)
    // {
    //     cout << "Please Save Some Money";
    // }
    // else
    // {
    //     cout << "Stay At Home";
    // }

    //cheking bigger number
    // int num1,num2,num3;
    // cout<<"Enter Numbers"<<endl;
    // cin>>num1>>num2>>num3;

    // if(num1>num2){
    //     if(num1>num3){
    //         cout<<num1<<" is bigger number";
    //     }else{
    //         cout<<num3<<" is bigger number";
    //     }
    // }else{
    //     if(num2>num3){
    //         cout<<num2<<" is bigger number";
    //     }else{
    //         cout<<num3<<" is bigger number";
    //     }
    // }

    //cheking number is even or odd
    int number;
    cout<<"enter number"<<endl;
    cin>>number;
    if(number%2==0){
        cout<<"Entered Number is even";
    }else{
        cout<<"Entered Number is odd";
    }

    return 0;
}