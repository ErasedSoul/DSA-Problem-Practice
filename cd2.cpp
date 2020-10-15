#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(void)
{
   int n,m;

   map<string,int>need;
   map<string,int>cost_outside;

   map<string,int>in;

   map<string,int>cost_inside;
   
   string a;int b;int c; 
    
    cin>>n;
   for(int i = 0; i < n;i++)
   {
       cin>>a>>b>>c;
       need[a] = b;
       cost_outside[a] = c;
   }
    cin>>m;
   for(int i = 0;i < m;i++)
   {
       cin>>a>>b>>c;
       in[a] = b;
       cost_inside[a] = c;
   }

    int ans = 0;
   for(auto x : need)
   {
   	   string item = x.first;
       
       int ne = need[item]-in[item];

       if(ne < 0)
       	ne = 0;

       ans = ans + (ne)*cost_outside[item];
   }

   for(auto x : in)
   {
   	  string item = x.first;

   	  if(need.find(item)== need.end())
   	  	continue;
      int ne; 
   	  if(need[item] <= in[item])
        ne = need[item];
      else
      	ne = in[item];

      ans = ans + ne*cost_inside[item];
   } 

   cout<<ans<<endl;

}