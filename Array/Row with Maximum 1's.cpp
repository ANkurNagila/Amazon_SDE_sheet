#include<bits/stdc++.h>
int rowMaxOnes(vector<vector<int>>& mat, int n, int m) {
    int maxi=INT_MIN;
    int ans=0;
    
    for(int i=0;i<n;i++){
        int ele=0;
        for(auto it: mat[i])
            ele = it==1 ? ele+1 : ele;
        if(ele>maxi){
            maxi=ele;
            ans=i;
        }
    }
    
    return ans;
}

