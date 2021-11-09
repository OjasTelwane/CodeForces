// CodeForces 112A Petya and strings
#include <cctype>
#include <iostream>
#include <cstring>
using namespace std;

int main() 
{
    string str1="", str2="";
    cin>>str1>>str2;
    int check=0;
    if(str1 == "" && str2 == "")
    {
        cout<<"0";
    }
    else if(str1 == "")
    {
        cout<<"-1";
    }
    else if(str2 == "")
    {
        cout<<"1";
    }
    else 
    {
        int length=str1.length();
        for(int i=0;i<length;i++)
        {
            str1[i]=tolower(str1[i]);
            str2[i]=tolower(str2[i]);
            if(str1[i]>str2[i])
            {
                cout<<"1";
                check=1;
                break;
            }
            if(str1[i]<str2[i])
            {
                cout<<"-1";
                check=1;
                break;
            }
        }
        if(check==0){
            cout<<"0";
        }
    }
}