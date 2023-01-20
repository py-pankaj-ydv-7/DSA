#include<iostream>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main(){
     int n;
     cout<<"enter a no. ";
     cin>>n;
// decimal  to  binary **************************************

   //  int ans = 0;
   //  int i = 0;
   //   while(n != 0 ){
   //      // int digit = n%10; is formule se to power nikal jayegi
   //      int bit = n & 1;
   //      ans= (bit * pow(10, i) ) + ans;
   //      n = n >> 1;
   //      i++;

   //   }
   //   cout<<"ans "<<ans<<endl;

   // binary to decimal ************************TR

   int ans = 0;
   int i = 0;

   while(n!=0){
      int digit = n%10;
      if (digit == 1 ){

         ans = ans + pow(2, i);

      }
      n=n/10;
      i++;
   }
   cout<<ans<<endl;
}