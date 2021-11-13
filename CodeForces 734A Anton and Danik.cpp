// CodeForces 734A Anton and Danik
#include <bits/stdc++.h>
using namespace std;
string a, b = "hello";
int j = 0, pas = 0;
int main() {
    int num, A=0, D=0;
    string str;
    cin>>num>>str;
    for(int i=0;i<num;i++){
        if(str[i]=='A'){
            A++;
        }    
        else{
            D++;
        }
    }
    if(A>D){
        cout<<"Anton";
    } 
    else if(D>A){
        cout<<"Danik";
    }
    else{
        cout<<"Friendship";
    }
}