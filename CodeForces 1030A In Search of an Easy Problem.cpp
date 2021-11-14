// CodeForces 1030A In Search of an Easy Problem
#include <iostream>
using namespace std;

int main() {
    int num, check=0;
    cin >> num;
    for(int i=0;i<num;i++){
        int element;
        cin>>element;
        if(element==1){
            check=1;
            break;
        }
    }
    if(check==1){
        cout<<"HARD";
    }
    else{
        cout<<"EASY";
    }
}