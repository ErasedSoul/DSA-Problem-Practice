

#include <bits/stdc++.h>
using namespace std;

bool util(int pos , vector<int>& arr , int sum);
int main(void)
{
	  int t;cin>>t;

	  while(t--){

	  	  int n;cin>>n;
	  	  vector<int>arr(n);int sum = 0;
	  	  for(int i = 0; i < n;i++)
              cin>>arr[i],sum+=arr[i];

          if(sum%2 != 0)
          {
          	 cout<<"NO"<<endl;continue;
          }

            bool ok = util(0 , arr , sum/2);

            cout<<((ok)?"YES":"NO")<<endl;
	  }
}
bool util(int pos , vector<int>& arr , int sum)
{
	   if(sum == 0)
	   {
	   	    return true;
	   }


       for(int i = pos ; i < arr.size();i++)
       {
       	    if(arr[i] <= sum)
       	    {
               bool ok = util(i+1 , arr , sum-arr[i]);

               if(ok)
               	 return true;
       	    }
       }
       return false;
}