#include <iostream>
using namespace std;

int fibo(int n)
{
    if(n==0 || n==1)
    {
        return n;
    }
    else
    return (fibo(n-1)+fibo(n-2));
}

int main()
{
    int x,i=0;
    cin>>x;
    cout<<"Fibonachi series of first "<<x<<" numbers:";
    while(i<x)
    {
        cout<<fibo(i)<<endl;
        i++;
    }
    return 0;
}