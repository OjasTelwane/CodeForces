// CodeForces 1328A Divisibility Problem
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int numTC;
    cin>>numTC;
    for(int i=0;i<numTC;i++){
        int a, b;
        cin>>a>>b;
        if(a<b){
            cout<<b-a<<endl;
        }
        if(a>=b){
            if(a%b==0){
                cout<<0<<endl;
            }
            else{
                cout<<b-(a%b)<<endl;    
            }
        }
    }
}