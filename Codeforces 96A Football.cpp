// Codeforces 96A Football
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int count=0, check=0;
    string str1="";
    cin>>str1;
    for(int i=0;i<str1.length();i++){
        if(str1[i]==str1[i+1]){
            count++;
            if(count==6){
                check=1;
                break;
            }
        }
        if(str1[i]!=str1[i+1]){
            count=0;
        }
    }
    if(check==1)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}