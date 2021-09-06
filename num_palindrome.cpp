#include <iostream>
using namespace std;

bool palindrome(int n)
{
    int temp,r,sum=0;
    temp=n;
    
    if (n==0)
    {return true;}
    while(n)
    {
        r=n%10;
        sum=(sum*10)+r;
        n=n/10;
    }
    if(temp==sum)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int a;
    cin>>a;
    if(palindrome(a))
    {
        cout<<"it is palindrome number";
    }
    else
    {
        cout<<"it is not palindrome number";
    }
    return 0;
}