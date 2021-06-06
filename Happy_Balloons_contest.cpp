/*There  are N balloons numbered from 1 to N. Every ballons has an 
another integer value Arr[i] assigned to it where i varies from 1 to N
, and i represent the number of balloons

A balloons at an odd position (i = 1, 3 ,5) is happy if Arr[i] is odd
A balloons at an even position  (i = 2 ,4 ,6) is happy if Arr[i] is even

Find the number of happy baloons.

Input: 
The first line of the input contains a single integer N.
The second line of input contains N singly spaced integers, Arr[],Arr[2],Arr[3],..,Arr[N].

Output:
Output a single integer, the number of happy ballons.

EXAMPLE:
Happy balloons are balloons numbered 1, 4, 5.
Sample output: 5
*/ 

#include<iostream>
using namespace  std;

int main(){
    int n,i;
    cout<<"NO of balloons"<<endl;
    cin>>n;
    int A[n-1];
    for(i = 0; i< n ; i++){
        cin>>A[i];
    }

    int count = 0;
    for(i = 0; i< n ; i++){
        if((i % 2 ==0)&&(A[i]%2==0)){
            cout<<"Position of balloons\t"<<i<<"  value at this position\t"<<A[i]<<endl;
            count++;
        }
        else{
           if((i % 2 !=0)&&(A[i]%2!=0)){
                cout<<"Position of balloons\t"<<i<<"  value at this position\t"<<A[i]<<endl;
                count++;
            }
        }
    }
    
    cout<<"Happy Baloonns count"<<count;
    return 0;
}