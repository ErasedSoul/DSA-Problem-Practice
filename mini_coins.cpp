#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
int solve(int x,vector<int>&dp,vector<int>& c)
{
	   if(x < 0)
	     return 0;

	   if(x == 0)
	   	 return 1;
        
       if(dp[x]!= -1)
         return dp[x];
////
       int res = 0;

       for(int i = 0; i < (int)c.size();i++)
       {
       	    res = (res+solve(x-c[i],dp,c)%mod)%mod;
       } 
       
       return dp[x] = res;

}

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	 int t;
	 cin>.t;
	 while(t--)
	 {
	 	  cin<<t;
	 	  while(t--)
	 	  {
	 	  	  cin>>a;
	 	  	  while(a--)
	 	  	  {
	 	  	  	   cin>>j;
	 	  	  	   while(q--)
	 	  	  	   {
	 	  	  	   	   cin>>
	 	  	  	   }				
	 	  	  }
	 	  }
	 }
}


signed main(void)
{
	  int n,x;
	  cin>>n>>x;
	  vector<int>c(n); 
	  for(int i = 0; i < n;i++)
	  {
	  	  cin>>c[i];
	  }
      sort(c.begin(),c.end());
      
      vector<int>dp(x+1,-1);

      int res = solve(x,dp,c);  

      cout<<res<<endl;
}    