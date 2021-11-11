// CodeForces 344A Magnets
#include <iostream>
using namespace std;

int main() {
int num, count=0;
cin>>num;
if(num==0){
    cout<<0;
}
else if(num==1)
{
        cout<<1;
}
else{
    string prev;
    cin>>prev;
for(int i=0;i<num;i++){
    string str;
    cin>>str;
    if(prev[0]!=str[0]){
        count++;
    }
    prev=str;
}
cout<<count;
}

}