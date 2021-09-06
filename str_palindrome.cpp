#include <iostream>
using namespace std;

bool palindrome(string s, int b,int e)
{
    if(e-b==1 || b==e)
    {
        return 1;
    }
    else
    {
        if(s[b]==s[e])
        {
            return palindrome(s,b+1,e-1);
        }
        else
        {
            return 0;
        }
    }
}

int main()
{
    string str;
    cin>>str;
    int n=str.length();
    if(palindrome(str,0,n-1))
    {
        cout<<"Palindrome string!!"<<endl;
    }
    else
    {
        cout<<"Not plaindrome string!!"<<endl;
    }

    return 0;
}
