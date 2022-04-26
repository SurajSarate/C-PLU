#include<iostream>
using namespace std;

int main (){
    int sum=0,number;

    cout<<"Enter a number"<<endl;
    cin>>number;

    //while loops
    // while(number>0){
    //     sum+=number;
    //     number--;
    // }
    
    //do while loops
    // do{
    //     sum+=number;
    //     number--;
    // }while(number>0);

    //for loop
    for (int i = 0; i < number; number--)
    {
        sum+=number;
    }
    

    cout<<"total sum of number is "<<sum<<endl;

    return 0;
}