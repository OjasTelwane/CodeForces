// CodeForces 339A Helpful Maths
#include <cctype>
#include <iostream>
#include<bits/stdc++.h>
#include <cstring>
using namespace std;

int main() 
{
    string str1="";
    cin>>str1;
    vector<char> result;
    if(str1 == "")
    {
        cout<<"-1";
    }
    else
    {
        string str2="";
        int i=0, j=0;
        if(str1.length()==1)
        {
            str2=str1;
        }
        else
        {
            while(i<str1.length())
            {
                if(i%2==0){
                    result.push_back(str1[i]);
                }
                i++;
            }
        }
        sort(result.begin(), result.end());
        for(int i=0;i<result.size();i++){
            if(i<result.size()-1){
                str2+=result[i];
                str2+='+';    
            }
            else if(i==result.size()-1){
                str2+=result[result.size()-1];        
            }
            
        }
        cout<<str2;
        
    }
}