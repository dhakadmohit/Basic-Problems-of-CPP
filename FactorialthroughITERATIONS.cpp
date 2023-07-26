//Calculating the Factorial of a given number using Iteration
#include<iostream>
using namespace std;
int factorial(int n)
{
    int fact = 1;
    for (int  i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main ()
{
    int count;
    cout<<"Enter the number\n";
    cin>>count;
    cout<<factorial(count);
}
