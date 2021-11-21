#include <bits/stdc++.h>
using namespace std;

void Armstrong_number(int n){
   int sum=0;
   int last_digit;
   
   while(n!=0){
      last_digit=(n%10);
      sum+=last_digit*last_digit*last_digit;
      n/=10;
   }
   if(sum==n){
       cout<<sum<<" is Armstrong number!";
   }
   else
   {
        cout<<sum<<" is not an Armstrong number!";
   }
}
int main(){

   Armstrong_number(371);
   return 0;
}