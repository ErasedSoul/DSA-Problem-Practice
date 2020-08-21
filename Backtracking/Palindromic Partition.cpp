class Solution {
public:
    bool check(string const &s , int i , int j)
    {
        while(i < j)
        {
             if(s[i]!=s[j])
                 return false;
            i++;j--;
        }
        return true;
    }
    vector<vector<string>> partition(string s) {
        
           vector<vector<string>>ans;vector<string>curr;
        
        util(0,s,ans,curr);
        return ans;
    }
    
    void util(int pos ,string &s,vector<vector<string>>& ans , vector<string>curr)
    {
        if(pos == s.length())
        {
            ans.push_back(curr);
            return;
        }
        
        for(int i = pos;i<s.length();i++)
        {
            if(check(s,pos,i))
            {
                curr.push_back(s.substr(pos,i-pos+1));
                util(i+1 , s , ans,curr);
                curr.pop_back();
            }
        }
    }
    
};