#include<bits/stdc++.h>
int minSubarraySum(int arr[], int n, int k) 
{
    int sum=0;
    int ans=INT_MAX;
    
    for(int i=0;i<n;i++){
        if(i<k-1){
            sum+=arr[i];
        }
        else if(i==k-1){
            sum+=arr[i];
            ans=min(ans,sum);
        }
        else{
            sum=sum+arr[i]-arr[i-k];
            ans=min(ans,sum);
        }
        //cout<<sum<<endl;
    }
    
    return ans;
}
