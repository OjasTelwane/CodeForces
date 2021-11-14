// CodeForces A Linear Keyboard
#include <bits/stdc++.h>
using namespace std;

int main() {
    int numTC;
    cin>>numTC;
    for(int i=0;i<numTC;i++){
        string str1, str2;
        cin>>str1>>str2;
        int j=1, prev=str1.find(str2[0]) ,cur=1, sum=0;
        while(j<str2.length()){
            cur=str1.find(str2[j]);
            sum = sum + abs(cur-prev);
            prev=cur;
            j++;
        }
        cout<<sum<<endl;
    }
}