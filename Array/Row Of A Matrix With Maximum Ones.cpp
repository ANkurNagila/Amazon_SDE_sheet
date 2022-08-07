int maximumOnesRow(vector<vector<int>> &matrix)
{
    int maxi=0;
    int ans=0;
    
    for(int i=0;i<matrix.size();i++){
        int temp=0;
        for(auto it:matrix[i]){
            temp= (it==1) ? temp+1 : temp;
        }
        if(maxi<temp){
            maxi=temp;
            ans=i;
        }
    }
    
    return ans;
}
