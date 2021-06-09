#include<iostream>
#include<string>
#include <bits/stdc++.h>
using namespace std;

bool anagram(string str1,string str2)
{
    int len = str1.length();
    int len1 = str2.length();
    if(len != len1)
    {
        return false;
    }
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());

    for(int i =0 ;i<len;i++)
    {
        if(str1[i] == str2[i])
        {
            return true;
        }
    } 
    return true;
}


int main(){
    string s,v;
    cout<<"Enter the First String"<<endl;
    cin>>s;
    cout<<"Enter the Second String"<<endl;
    cin>>v;
    if(anagram(s,v)){
        cout<<"Yes these are anagrams"<<endl;
    }
    else{
        cout<<"No thesea are't anagrams"<<endl;
    }
}   
    