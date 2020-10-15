#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
int main(void)
{
     int n;
     cin>>n;
     vector<int>dp(n+1);
     
     dp[0] = 1; 
      
     for(int i = 1; i <= n;i++)
     {
     	  int res = 0;
         for(int j = 1;j<7;j++)
         {
         	  if(i-j>=0)
              res = (res+dp[i-j]%mod)%mod;
         }
         dp[i] = res;
     }

     cout<<dp[n]<<endl;

}