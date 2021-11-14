// CodeForces A round
#include <bits/stdc++.h>
using namespace std;
int main() {
int num=0;
cin>>num;
for(int i=0;i<num;i++){
    string str, temp, a, b;
    cin>>str;
    temp=str;
    int min=0;
    sort(temp.begin(), temp.end());
    a=temp[0];
    min=str.find_first_of(temp[0]);  
    int start=0, end=min;
    b = str.substr(start, end-start) + str.substr(end+1, str.length() - end+1);
    cout<<a<<" "<<b<<endl;
}
}