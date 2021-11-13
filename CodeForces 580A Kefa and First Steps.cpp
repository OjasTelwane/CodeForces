// CodeForces 580A Kefa and First Steps
#include <iostream>
using namespace std;

int main()
{
    int n, prev=0, max=1, temp=1;
    cin>>n;
    cin>>prev;
    for(int i=1;i<n;i++){
        int element;
        cin>>element;
        if(element>=prev){
            temp++;
            if(max<temp){
                max=temp;
            }
        }
        else if(element<prev){
            temp=1;
        }
        prev=element;
    }
    cout<<max;
}