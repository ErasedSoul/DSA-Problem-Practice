class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        
         int n = nums.size();
         int pre = 0;

         int s = 0;

//         (s - (pre[r]-pre[l]))%p = 0;

         for(int i = 0; i < n; i++)
           s = (s+nums[i])%p;
          
         if(s == 0)
           return 0; 

         map<int,int>mp; 

         int m = n;

         mp[0] =  0;

         for(int r = 0; r < n;r++)
         {
             pre = (pre+nums[i])%p;

             //find best L

             int want = (pre-s+p)%p;

             if(mp.find(want)!= mp.end()){
               int l = mp[want];
                 m = min(m ,r-mp[want]+1);
               }

               mp[pre] = r+1;
         }      

        
        return (m == n)?-1:m;
    }
};