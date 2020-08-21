vector<string> printPath(int m[MAX][MAX], int n) {
    
    string curr;
    
    vector<string>ans;
    
    vector<vector<int>>arr(n,vector<int>(n));
    
    vector<vector<int>>vis(n,vector<int>(n,0));
    
    for(int i = 0;i<n;i++)
    {
         for(int j = 0;j<n;j++)
           arr[i][j] = m[i][j];
    }
    if(arr[0][0] == 0)
     return ans;
    util(0,0,n,curr,arr,ans,vis);
    
    return ans;
}

void util(int i ,int j ,int n,string& curr,vector<vector<int>>& arr,vector<string>& ans,vector<vector<int>>& vis)
{
      if(i == n-1 && j == n-1)
      {
          ans.push_back(curr);
          return;
      }
      vis[i][j] = 1;
      if(i+1 < n && arr[i+1][j]!=0 && vis[i+1][j]==0)
      {
          curr.push_back('D');
          util(i+1,j,n,curr,arr,ans,vis);
          curr.pop_back();
      }
      
      if(j-1 >= 0 && arr[i][j-1]!=0 && vis[i][j-1]==0)
      {
          curr.push_back('L');
          util(i,j-1,n,curr,arr,ans,vis);
          curr.pop_back();
      }
      
      if(j+1 < n && arr[i][j+1]!=0 && vis[i][j+1]==0)
      {
          curr.push_back('R');
          util(i,j+1,n,curr,arr,ans,vis);
          curr.pop_back();
      }
      if(i-1 >= 0 && arr[i-1][j]!=0 && vis[i-1][j]==0)
      {
          curr.push_back('U');
          util(i-1,j,n,curr,arr,ans,vis);
          curr.pop_back();
      }
      vis[i][j] = 0;
      
      
}