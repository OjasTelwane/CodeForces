// CodeForces 200B Drinks
#include <iostream>
using namespace std;

int main() {
    int num;
    float sum=0;
    cin>>num;
    for(int i=0;i<num;i++){
        int n;
        cin>>n;
        sum=sum+n;
    }
    cout<<sum/num;
}