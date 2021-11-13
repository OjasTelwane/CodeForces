// CodeForces 750 (Div 2) B - Luntik and Subsequences
/*  C++ code to generate all possible subsequences.
    Time Complexity O(n * 2^n) */
#include<bits/stdc++.h>
using namespace std;
 
int printSubsequences(vector<int> arr, int n, int SUM)
{
    int count=0;
    /* Number of subsequences is (2**n -1)*/
    unsigned int opsize = pow(2, n);
    /* Run from counter 000..1 to 111..1*/
    for (int counter = 1; counter < opsize; counter++)
    {
        int sum=0;
        for (int j = 0; j < n; j++)
        {
            /* Check if jth bit in the counter is set
                If set then print jth element from arr[] */
            if (counter & (1<<j)){
                sum=sum+arr[j];
            }
        }
        if(sum==SUM-1){
        count++;
        }
    }
    if(SUM-1==0){
        count++;
    }
    return count;
}
int main()
{
    int numTC;
    cin>>numTC;
    for (int i = 0; i < numTC; i++)
    {
        vector<int> temp;
        int arrlen;
        cin>>arrlen;
        for (int j = 0; j < arrlen; j++)
        {
            int element;
            cin>>element;
            temp.push_back(element);
        }
        int sum=accumulate(temp.begin(), temp.end(), 0);
        cout<<printSubsequences(temp, arrlen, sum)<<endl;
    }
    return 0;
}