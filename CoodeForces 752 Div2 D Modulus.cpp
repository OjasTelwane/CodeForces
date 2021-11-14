// CoodeForces 752 Div2 D Modulus 
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int x=0, y=0, n, g=0;
        cin>>x>>y;
        if(x>y){
            n=x;
        }
        else{
            n=y;
        }
        for(int j=2;j<n*2;j=j+2){
            if(j%x==y%j){
                cout<<j<<endl;
                break;
            }
        }
    }
}