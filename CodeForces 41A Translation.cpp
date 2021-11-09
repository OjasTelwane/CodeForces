// CodeForces 41A Translation
#include <bits/stdc++.h>
using namespace std;
string a, b = "hello";
int j = 0, pas = 0;
int main() {
    string str1, str2;
    cin>>str1>>str2;
    reverse(str2.begin(), str2.end());
    if(str1.compare(str2)==0){
        cout<<"YES";
    } 
    else{
        cout<<"NO";
    }
}