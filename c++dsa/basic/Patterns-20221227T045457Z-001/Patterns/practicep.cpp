//print 
// ****
// ****
// ****
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number ";
    cin>>n;
    // int i = 1;
    // while(i<=n){
    //     int j = 1;
    //     while(j<=n){
    //         cout<<"*  ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;

    // }

    /*
    2.  
    1 1 1
    2 2 2
    3 3 3

    */

//    int row = 1;
//    while(row<=n){
//     int col = 1;
//     while(col<=n){
//         cout<<row<<" ";
//         col++;
//     }
//     cout<<endl;
//     row++;
//    }

/*
3. 
1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4
*/
// int i = 1 ;
// while (i<=n){
//     int j = 1;
//     while(j<=n){
//         cout<<j<<" ";
//         j++;
//     }
//     cout<<endl;
//     i++;
// }

/*
4.
1 2 3
4 5 6 
7 8 9

*/
// int i = 1;
// int count = 1;
// while(i<=n){
//     int j = 1;
//     while(j<=n){
//         cout<<count<<" ";
//         count++;
//         j++;
//     }
//     cout<<endl;
//     i++;
// }

/*
5. Home work (n-j+1)
3 2 1
3 2 1
3 2 1

*/
// int i = 1;
// while (i<=n){
//     int j = 1;
//     while (j<=n){
//         cout<<n-j+1<<" ";
//         j++;
//     }
//     cout<<endl;
//     i++;
// }

/*
6.
*
* * 
* * * 
* * * *

*/
// int i = 1;
// while(i<=n){
//     int j = 1;
//     while(j<=i){
//         cout<<"* ";
//         j++;
//     }
//     cout<<endl;
//     i++;
// }

/*
7.
1
2 3
4 5 6
7 8 9 10
*/
// int i = 1;
// int count  = 1;
// while(i<=n){
//     int j = 1;
//     while(j<=i){
//         cout<<count<<" ";
//         count++;
//         j++;

//     }
//     cout<<endl;
//     i++;
// }

/*
8. is question me hum ek value name ka variable use karenge .
1
2 3
3 4 5 
4 5 6 7

*/
// int i = 1;
// while(i<=n){
//     int j=1;
//     int value = i;
//     while(j<=i){
//         cout<<value<<" ";
//         value++;
//         j++;
//     }
//     cout<<endl;
//     i++;
// }

/*
9. 
1
2 1
3 2 1
4 3 2 1

*/
// int i= 1;
// while(i<=n){
//     int j = 1;
//     while(j<=i){

//         cout<< i-j+1;
//         j++;
//     }
//     cout<<endl;
//     i++;
// }
 
 /*
 10.
A A A
B B B
C C C
 
 */  
// int i = 1;
// while(i<=n){
//     int j = 1;
//     char ch = 'A' +i -1;
//     while (j<=n){
//         cout<<ch;
//         j++;
//     }
//     cout<<endl;
//     i++;
// }

/*
11.

A B C
A B C
A B C
*/
// int i = 1;
// while(i<=n){
//     int j = 1; 
    
//     while(j<=n){
//     char ch = 'A' + j - 1 ;
//     cout<<ch <<" ";
//     j++;

//     }
//     cout<<endl;
//     i++;
// }

/*
12.

A B C 
D E F
G H I 

*/
// int i = 1;
// char count = 'A';
// while(i<=n){
//     int j = 1;
//     while(j<=n){
//      cout<<count <<" ";
//     count++;
//     j++;
//     }
//  cout<<endl;
//  i++;
// }


/*
ABC
BCD
CDE
EFG

*/
// int i = 1;
// while(i<=n){
//     int j = 1;
 
//     char ch ='A'+i+j-2; // formula***************************************
//     while(j<=n){
//         cout<<ch;
//     ch ++;
//         j++;

//     }
//     cout<<endl;
//     i++;
// }
/*
13.

A
B B
C C C

*/

// int i = 1;
// while(i<=n){
//     int j = 1;
//     char ch = 'A'+i-1;
//     while(j<=i){
//         cout<<ch<<" ";
//      j++;
//     }
//     cout<<endl;
//     i++;
    
//     }
/*
14.

A
BC
CDE
DEFG

*/
// int i = 1;
// while (i<=n){
//     int j = 1;
//      char ch ='A'+i+j-2; 
//     while(j<=i){
//         cout<<ch<<" ";
//         ch++;
//         j++;
//     }
//     cout<<endl;
//     i++;
// }

/*
D
C D     ISME  hume starting charctor nikalna hai .
B C D   fir formula ban jayega .
A B C D



*/
// int i = 1;

// while (i<=n){
//     int j = 1;
//     char ch = 'A'+n-i;
//     while (j<=i){
         
//          cout<<ch <<" ";
//          ch++;
//          j++;
//     }
//     cout<<endl;
//     i++;
// }

/*
A B C
B C D     homework done 
C D E 
*/
// int i = 1 ;
// while ( i<=n){
//     int j = 1;
//     char ch = 'A'+i-1;
//     while(j<=n){
//         cout<<ch<<" ";
//         ch++;
//         j++;
//     }
//     cout<<endl;
//     i++;
// }

 /*
 
      *
    * *
  * * *
* * * *

 */
// int i = 1;
// while(i<=n){
    
//     // pahle hum space print karenge .

//     int space = n-i;
//     while(space){
//         cout<<" ";
//         space--;
//     }

//     // ab hum star print karenge .
//     int j = 1; 
//     while(j<=i){
//          cout<<"*";
//          j++;
//     }
//     cout<<endl;
//     i++;
// }

/*

****
***
**
*

*/
// int i = 1;
// while(i<=n){

    
//     int star = n-i+1;
//     while(star){
//         cout<<"*";
//        star--;
//     }
//     cout<<endl;
//     i++;
// }

/*

****
 ***
  **
   *
   
*/

// int i = 1;
// while(i<=n){
//     int space = i-1;
//     while(space){
//         cout<<" ";
//         space--;
//     }
//     int j =n-i + 1;
//     while(j){
//         cout<<"*";
//         j--;
//     }
//     cout<<endl;
//     i++;
// }
/*

rajan ****************************

1234
 234
  34
   4

*/

// int i = 1;
// while(i<=n){
//     int space = i-1;
//     while(space){
//         cout<<" ";  
//         space--;
//     }
//     int j = n-i+1;
//     int value = i;
//     while(j){
//         cout<<value;
//         value++;
//         j--;
//     }
//     cout<<endl;
//     i++;
// }

/*

*/

}