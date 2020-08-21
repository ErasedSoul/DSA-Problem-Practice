#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
	map<string,int>mp;
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        
        vector< vector<string> >ans;
        vector<string>curr;
        for(auto x : wordDict)
        	mp[x] = 1;

        vector<string>ans2;
        util(0 , s ,ans,curr);
        for(auto x : ans )
        {
        	  string temp = "";
        	  for(auto y : x)
        	  {
        	     temp.append(y+" ");	  
        	  }
        	  temp.pop_back();
        	  ans2.push_back(temp);
        	  //cout<< temp<<endl;
        }
       
       return ans2;

    }

    void util(int pos ,string & s,vector< vector<string> >& ans , vector<string> & curr){

    	    if(pos == s.length())
    	    {
    	    	ans.push_back(curr);return;
    	    }

    	    for(int i = pos ;i < s.length();i++)
    	    {
    	    	  if(mp.find(s.substr(pos,i-pos+1))!=mp.end())
    	    	  {
                        curr.push_back(s.substr(pos,i-pos+1));

                        util(i+1 , s , ans ,curr);

                        curr.pop_back();
    	    	  }
    	    }
    }

};

int main(void)
{
	  string s = "catsanddog";
	  vector<string>word{"cat","cats","and","sand","dog"};
      Solution* ob = new Solution();
	  vector<string>ans = ob->wordBreak(s,word);
	  for(auto x : ans)
	  	cout<<x<<endl;
}