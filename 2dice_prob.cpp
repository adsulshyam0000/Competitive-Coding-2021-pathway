//Dice problem 
/* Given 2 unbiased dice containing 6 faces. you will be given 
an output sum which should be obtained ny throwing two dice.you need to return the sum of both the dice equal to the
output sum. If there is no possibilites return 0*/

#include<iostream>
using namespace std;
int main(){
    int i,j,n,temp = 0;
    cin >>n;
    if((n <= 12 ) && (n > 0 )){
        for(i=1;i<=6;i++){
            for(j=1;j<=6;j++){
                if(i+j == n){
                    temp++;
                }
            }
        }
        cout<<temp;
    }
    else{
        cout<<"0";
    }
}