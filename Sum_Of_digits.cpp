#include<bits/stdc++.h>
using namespace std;

void sum_of_digits(int n){
   int sum=0;
   int last_digit;
   while(n!=0){
      last_digit=n%10;
      sum+=last_digit;
      n/=10;
   }
   cout<<sum;
}
int main(){

   sum_of_digits(906);
   return 0;
}