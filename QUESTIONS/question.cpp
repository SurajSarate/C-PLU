#include<iostream>
#include<math.h>
using namespace std;

int main (){
    int number,reverse=0,sum=0;
    bool flag=0;
    cout<<"Enter Number"<<endl;
    cin>>number;

    // Check Prime Or Not
    // for (int i = 1; i <=number; i++)
    // {
    //     if(number%2==0){
    //         cout<<"Not Prime Number"<<endl;
    //         flag=1;
    //         break;
    //     }
       
    // }
    // if(flag==0){
    //     cout<<"Prime Number";
    // }



       
    //Reverse a Number
    // while(number>0){
    //     int lastdigit=number%10;
    //     reverse=reverse*10+lastdigit;
    //     number=number/10;
    // }
    // cout<<reverse;
    


    //check armstrong number
    int actualnumber=number;
    while(number>0){
        int lastdigit=number%10;
        sum=sum+(lastdigit*lastdigit*lastdigit);
        number=number/10;
    }
    if(sum==actualnumber){
        cout<<"ArmStrong"<<endl;
    }else{
        cout<<"Not armstrong";
    }
    return 0;
}