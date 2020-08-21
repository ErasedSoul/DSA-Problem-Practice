#include <bits/stdc++.h>
using namespace std;
	 class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        
         if(nums.size() == 0)
         	return {};
         
         vector< vector<int> > ans;
         vector<int> curr;
         vector<int>vis(nums.size(),0); 
         util(nums,ans,curr,vis);

         return ans;          
        
    }
    void util(vector<int>& nums , vector< vector<int> >&ans,vector<int>&curr,vector<int>& vis)
    {
         if(curr.size() == nums.size())
         {
         	ans.push_back(curr);
         	return;
         }


          for(int i = 0;i < nums.size();i++)
          {
          	  if(!vis[i]){
          	  	   vis[i] = 1;
          	  	   curr.push_back(nums[i]);
          	  	   util(nums,ans,curr , vis);
          	  	   curr.pop_back();
          	  	   vis[i] = 0;
          	  }
          }

    }
};

int main(void)
{
	  //int t;cin>>t;
	  vector<int>nums{1,2,3};
	  Solution* ob = new Solution();
	  vector< vector<int> > ans = ob->permute(nums);

	  for(auto x : ans)
	  {
	  	  for(auto y : x)
	  	  	cout<<y<<" ";
	  	  cout<<endl;
	  }
}