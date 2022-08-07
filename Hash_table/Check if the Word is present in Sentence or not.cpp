#include<unordered_set>
bool findWord(string &s, string &w)
{
    unordered_set<string> x;
    string temp="";
    for(int i=0;s[i]!='\0';i++){
        if(s[i]!=' '){
            temp+=s[i];
        }
        else{
            x.insert(temp);
            temp="";
        }
    }
    
    x.insert(temp);
    
    if(x.find(w)!=x.end())
        return true;
    return false;
}
