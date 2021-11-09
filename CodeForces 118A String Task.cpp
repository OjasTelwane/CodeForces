// CodeForces 118A String Task
#include <cctype>
#include <iostream>
#include <cstring>
using namespace std;

int main() 
{
    string str1="";
    cin>>str1;
    int check=0;
    if(str1 == "")
    {
        cout<<"-1";
    }
    else 
    {
        string str2="";
        int i=0, j=0;
        while(i<str1.length())
        {
            str1[i]=tolower(str1[i]);
            if(str1[i]=='a' || str1[i]=='o' || str1[i]=='y' || str1[i]=='e' || str1[i]=='u' || str1[i]=='i')
            {
                i++;
            }
            else
            {
                str2+='.';
                str2+=str1[i];
                i++;
            }
        }
        cout<<str2;
    }
}