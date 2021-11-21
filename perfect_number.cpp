#include <bits/stdc++.h>
using namespace std;

int main() {
    int n=7,d=1,sum=0;
    while(d<n){
       if(n%d==0)
       sum+=d;
       d++; 
    }
    if(sum==n){
        cout<<n<<" is perfect number"<<"\n";
    }
    else{
        cout<<n<<" is not a perfect number"<<endl;
    }
  return 0;
}
