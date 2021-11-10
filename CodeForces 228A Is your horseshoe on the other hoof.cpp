// CodeForces 228A Is your horseshoe on the other hoof
#include <iostream>
using namespace std;

int countDistinct(int a[], int size){
   int i, j, count = 1;
   for (i = 1; i < size; i++){
      for (j = 0; j < i; j++){
         if (a[i] == a[j]){
            break;
         }
      }
      if (i == j){
         count++;
      }
   }
   return count;
}

int main() {
    int arr[4]={-1};
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];
    cout<<4-countDistinct(arr, 4);
}