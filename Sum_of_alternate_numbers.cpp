#include <bits/stdc++.h>
using namespace std;

void sum_of_alternate_no(int n){
    int even=0,odd=0,f=0;
    while(n>0){
        if(f==0){
            even+=n%10;
            f=1;
        }
        else{
            odd+=n%10;
            f=0;
        }
        n/=10;
    }
    cout<<"Even: "<<even<<", odd: "<<odd;
}
int main() {
    sum_of_alternate_no(12345);
  return 0;
}
