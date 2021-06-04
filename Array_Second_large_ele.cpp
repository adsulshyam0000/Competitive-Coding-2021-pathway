

#include<iostream>
using namespace std;

int main(){
    int n,A[100],j = 0;
    cout<<"Enter the size of array: ";
    cin>>n;
    for(int i = 0; i<n;i++){
        cout<<"Enter the element at "<<i<<" index: ";
        cin>>A[i];
    }

    int large = 0;
    for(int i = 0;i < n;i++){
        if (large < A[i]){
            large = A[i];
            j = i;
        }
    }

    int lar2 = 0;
    for(int i = 0;i < n;i++){
        if (i == j){
            i++;
            i--;
        }
        else{
            if(lar2 < A[i]){
                lar2 = A[i];

            }
        }
    }

    cout<<"The Second largest element in the array is : \n\n"<<lar2;
}