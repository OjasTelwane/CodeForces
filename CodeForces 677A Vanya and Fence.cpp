// CodeForces 677A Vanya and Fence
#include <iostream>
using namespace std;

int main() {
    int n, h, count=0;
    cin>>n>>h;
    for(int i=0;i<n;i++)
    {
        int j;
        cin>>j;
        if(j>h){
            count++;
        }
        count++;
    }
    cout<<count;
}