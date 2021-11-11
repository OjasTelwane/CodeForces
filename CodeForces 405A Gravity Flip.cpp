// CodeForces 405A Gravity Flip
#include <bits/stdc++.h>
using namespace std;

int main() {
    int num;
    cin>>num;
    vector<int> arr;
    for(int i=0; i<num; i++){
        int element;
        cin>>element;
        arr.push_back(element);
    }
    sort(arr.begin(), arr.end());
    for(int i=0; i<num; i++){
        cout<<arr[i]<<" ";
    }   
}