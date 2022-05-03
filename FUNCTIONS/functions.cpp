#include <iostream>
using namespace std;

int sum(int num1, int num2)
{
    int add = num1 + num2;
    return add;
}

int reverse(int number)
{
    int reversenum = 0;
    while (number > 0)
    {
        int last = number % 10;
        reversenum = reversenum * 10 + last;
        number = number / 10;
    }
    return reversenum;
}

bool check_prime(int n) {
  bool is_prime = true;

  if (n == 0 || n == 1) {
    is_prime = false;
  }

  for (int i = 2; i <= n / 2; ++i) {
    if (n % i == 0) {
      is_prime = false;
      break;
    }
  }

  return is_prime;
}

int cube(int number)
{
    return number * number * number;
}

int armstrong(int number)
{
    int sum = 0, acnumber = number;
    bool flag = true;
    while (number > 0)
    {
        int last = number % 10;
        sum = sum + cube(last);
        number = number / 10;
    }
    if (sum != acnumber)
    {
        flag = false;
    }
    else
    {
        flag = true;
    }
    return flag;
}

void print_prime(int number){
    for (int i = 2; i <= number; i++)
    {
        if (check_prime(i))
        {
            cout<<i<<endl;
        }
    }
}

void fibenacci(int number){
    int t1=0,t2=1,nextterm;
    for (int i = 1; i <= number; i++)
    {
        cout<<t1<<endl;
        nextterm=t1+t2;
        t1=t2;
        t2=nextterm;
    }
    return;
}

int factorial(int number){
    int facto=1;
    for (int i = 1; i <=number; i++)
    {
        facto*=i;
    }
    return facto;
}



int main()
{
    
    return 0;
}