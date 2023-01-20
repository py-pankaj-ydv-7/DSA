#include<iostream>
using namespace std;

int main(){
//    int a = 4,b =6;

//    cout<<"operators "<<endl;
   
//    cout<<" a & b = "<<(a&b)<<endl;
//    cout<<" a | b = "<<(a|b)<<endl;
//    cout<<" ~a = "<<(~a)<<endl;
//    cout<<" a ^ b = "<<(a^b)<<endl;

//    cout<<"left shift or right shift operator "<<endl;

//    cout<<(17>>1)<<endl;
//    cout<<(17>>2)<<endl;
//    cout<<(19<<1)<<endl;
//    cout<<(21<<2)<<endl;

// cout<<"increement or decrement question "<<endl;
// 1.

// int a=10;
// int b = 1;
// if (++a){
//     cout<<b;
// }
// else{
//     cout<<++b;
// }

// //2.
// int a = 1;
// int b = 2;

// if (a-- > 0 && ++b > 2){
//     cout<<"Stage1 - Inside If ";
// }
// else{
//     cout<<"Stage2 - Inside else ";
// }
// cout<<a<<" "<<b<<endl;

//3.

// int a = 1;
// int b = 2;

// if (a-- > 0 || ++b > 2){
//     cout<<"Stage1 - Inside If ";
// }
// else{
//     cout<<"Stage2 - Inside else ";
// }
// cout<<a<<" "<<b<<endl;

//4.
// int number = 3;
// cout<< (25*(++ number));
//     return 0;

//5.
// int a = 1;
// int b = a++;
// int c = ++a;
// cout<<b;
// cout<<c;

// two more questions for for loop.
/* 
1. print 1 to 10.
2. print sum 1 to 5.

*/
// int n;
// cin>>n;
// for (int i = 1;i<=n;i++){
//     cout<<i<<endl;
// }

// int n;
// cin>>n;
// int sum = 0;
// for (int i = 1;i<=n;i++){
//     sum = sum+i;
    
// }
// cout<<sum<<endl;

// fibonacci no . 
// bahut hi simpale hai .

// int n = 10;

// int a= 0, b = 1;
// cout<<a<<" "<<b<<" ";
// for(int i = 1;i<=n;i++){
//     int fibonacino = a+b;
//     cout<<fibonacino<<" ";
    
//     a = b;
//     b = fibonacino;
// }

//hw questons 
//1.

// for (int i = 0; i<=5; i++){
//     cout<<i<<" ";
//     i++;
// }
//2.
// for (int i = 0;i<=5;i--){
//     cout<<i<<" ";
//     i++;
// }
//3.
// for (int i=0; i<=15;i +=2){
//     cout<<i<<" ";

//     if (i&1){
//         continue;
//     }
//     i++;
// }
//4.
// for (int i = 0;i<5;i++){
//     for(int j=1;j<=5;j++){
//         cout<<i<<" "<<j;
//     }
//     cout<<endl;
// }
//5.
//   for(int i=0;i<5;i++){
//     for(int j=i;j<=5;j++){
//         if(i+j == 10){
//             break;
//         }
//         cout<<i<<" "<<j<<endl;
//     }
//   }

////prime no.
// int n;
// cin>>n;


// bool isprime = 1;
// for(int i = 2;i<n;i++){

//     if (n%i==0){
//         isprime = 0;
//         break;

//     }
   
// }
//  if(isprime==0){
//         cout<<"not prime ";
//     }
//     else{
//         cout<<"prime ";
//     }




// leetcode questions solve 
// int n = 234;
// int product = 1;
// int sum = 0;
// while (n!=0){
//     int digit = n%10;
//     product = product*digit;
//     sum= sum+digit;
//     n=n/10;
// }
// int subtract = product-sum;
// cout<<"product "<<product<<endl;
// cout<<"sum "<<sum<<endl;
// cout<<"subtract is "<<subtract<<endl;

// no me kitne one hai find karna 
// int n;
// cin>>n;
// int count = 0;
// while(n!=0){
//     if (n&1){
//         count++;
//     }
//     n=n>>1;
// }
// cout<<count;
return 0;
}