// CodeForces 443A Anton and Letters
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin,str);
    if(str.length()<3){
        cout<<0;
    }
    else{
    vector<int> letters(26, 0);
    for(int i=1;i<str.length();i=i+3){
        letters[str[i]-97]++;
    }
    int numZero = count(letters.begin(), letters.end(), 0);
    cout<<26-numZero;    
    }
}