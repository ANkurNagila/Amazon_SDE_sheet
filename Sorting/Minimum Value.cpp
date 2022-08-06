#include<bits/stdc++.h>
int minValue(vector<int>&arr, int n, int k)
{
    sort(arr.begin(),arr.end());
    int i=0,j=k-1;
    int ans=INT_MAX;
    for(;j<n;j++,i++){
        ans=min(arr[j]-arr[i],ans);
    }
    
    return ans;
}
