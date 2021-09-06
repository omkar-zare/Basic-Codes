#include <iostream>
using namespace std;

long int factorial(long int a)
{  
    if(a==0)
    {
        return 1;
    }
    return a*factorial(a-1);
}
int main()
{
    long int n;
    cin>>n;
    cout<<"Factorial of given number is:"<<factorial(n)<<endl;

    return 0;
}