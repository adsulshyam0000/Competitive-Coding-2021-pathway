//Problem Statement
/*An anagram is a word phrase or name formed by arranging the letters of another word phrase or name.
Write aa function to check if the given string are anagram or not , return yes if they are anagrams otherwise return No of they are not anagrams 


I/p: First String
I/p: Second String

O/p: Yes if they are , No if not


Example:
i/p1: build
i/p2: dubli
o/p: Yes they are anagrams
*/

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
    
