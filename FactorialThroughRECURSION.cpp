//Calculating the Factorial of a given number
#include<iostream>
using namespace std;
int factorial(long long int n)
{
    if (n==0)
        return 1;
    return factorial(n-1)*n;
}
int main ()
{
    long long int num  = 8;
    cout<<factorial(num);
}
