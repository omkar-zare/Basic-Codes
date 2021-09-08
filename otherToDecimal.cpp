#include<bits/stdc++.h>

int binaryToDecimal(int n)
{
    int ans=0;
    int x=1;
    while(n>0)
    {
        int y=n%10;  //To get End element
        ans+=x*y;
        x*=2;
        n/=10;  //to get last second element as last element in next iteration.
    }
    return ans;
}

int octalToDecimal(int n)
{
    int ans=0;
    int x=1;
    while(n>0)
    {
        int y=n%10;  //To get End element
        ans+=x*y;
        x*=8;
        n/=10;  //to get last second element as last element in next iteration.
    }
    return ans;
}
int hexadecimalToDecimal(std::string s)
{
    int ans=0;
    int x=1;
    int n=s.size();
    for (int i=n-1;i>=0;i--)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            ans+=x*(s[i]-'0');
        }
        else if(s[i]>='A' && s[i]<='F')
        {
            ans+=x*(s[i]-'A'+10);
        }
        x*=16;
    }
    return ans;
}

int main()
{
    int bin,oct;
    std::string h;
    std::cout<<"Enter the binary number:"<<std::endl;
    std::cin>>bin;
    std::cout<<"Enter the octal number:"<<std::endl;
    std::cin>>oct;
    std::cout<<"Enter the Hexadecimal number:"<<std::endl;
    std::cin>>h;
    std::cout<<"Binary to Decimal: "<<binaryToDecimal(bin)<<std::endl;
    std::cout<<"Octal to Decimal: "<<octalToDecimal(oct)<<std::endl;
    std::cout<<"Hexadecimal to Decimal: "<<hexadecimalToDecimal(h);

    return 0;
}
