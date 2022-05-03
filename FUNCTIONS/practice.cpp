#include <iostream>
using namespace std;

int sum_all_numbers(int number)
{
    int ans = 0;
    for (int i = 1; i <= number; i++)
    {
        ans += i;
    }
    return ans;
}

int square(int number)
{
    return number * number;
}

int sum(int num1, int num2)
{
    return num1 + num2;
}

void check(int num1, int num2, int num3)
{
    int max = 0;
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            max = num1;
            int sumoftwo = sum(square(num2), square(num3));
            if (sumoftwo == square(max))
            {
                cout << "Pythagorean Triples";
            }
            else
            {
                cout << "Is Not Pythagorean Triples";
            }
        }
        else
        {
            max = num3;
            int sumoftwo = sum(square(num2), square(num1));
            if (sumoftwo == square(max))
            {
                cout << "Pythagorean Triples";
            }
            else
            {
                cout << "Is Not Pythagorean Triples";
            }
        }
    }
    else
    {
        if (num2 > num3)
        {
            max = num2;
            int sumoftwo = sum(square(num1), square(num3));
            if (sumoftwo == square(max))
            {
                cout << "Pythagorean Triples";
            }
            else
            {
                cout << "Is Not Pythagorean Triples";
            }
        }
        else
        {
            max = num3;
            int sumoftwo = sum(square(num2), square(num1));
            if (sumoftwo == square(max))
            {
                cout << "Pythagorean Triples";
            }
            else
            {
                cout << "Is Not Pythagorean Triples";
            }
        }
    }
    return;
}


int binerytodecimal(int number){
    int ans=0;
    int x=1;
    while(number>0){
        int y=number%10;
        ans+=x*y;
        x*=2;
        number=number/10;
    }
    return ans;
}

int main()
{
    int num1, num2, num3;

    cout << "Enter Number" << endl;
    cin >> num1;

    // cout<<sum(number)<<endl;
    // if (check(num1, num2, num3))
    // {
    //     cout << "Is Pythagorean Triples" << endl;
    // }
    // else
    // {
    //     cout << "Is Not Pythagorean Triples";
    // }
    // check(num1, num2, num3);

    cout<<binerytodecimal(num1);
    return 0;
}