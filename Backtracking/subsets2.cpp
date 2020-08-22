//https://leetcode.com/problems/subsets-ii/

class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
                     
              vector< vector<int> >ans;         
              vector<int>curr; 
              sort(nums.begin(),nums.end());
              util(0,ans , curr,nums); 
               return ans;
    }
    void util(int pos , vector<vector<int>>& ans , vector<int>& curr,vector<int>& nums){

    	      ans.push_back(curr);

    	      for(int i = pos;i < nums.size();i++)
    	      {
                      if(i > pos && nums[i] == nums[i-1])
                          continue;
                      curr.push_back(nums[i]);
                        
                      util(i+1 , ans , curr , nums);
                      
                      curr.pop_back(); 
    	      }
    }
};