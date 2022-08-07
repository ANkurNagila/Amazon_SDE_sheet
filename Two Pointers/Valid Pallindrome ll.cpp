bool validPalindrome(int n, string &s)
{
    int i=0,j=n-1;
    int t=0;
    
    while(i<j){
        if(s[i]!=s[j]){
            t++;
            if(t>1)
                return false;
            
            if(s[i]==s[j-1])
                j--;
            else if(s[i+1]==s[j])
                i++;
            else
                return false;
        }
        i++;
        j--;
    }
    
    return true;
}
