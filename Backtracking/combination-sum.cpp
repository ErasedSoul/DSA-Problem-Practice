//https://practice.geeksforgeeks.org/problems/combination-sum/0

#include <bits/stdc++.h>
using namespace std;
void util(int pos , vector<int>& arr , vector<int>& curr, vector<vector<int> >& ans, int b);
int main(void)
{

	   int t;cin>>t;while(t--){

	   	     int n,b;
	         cin>>n;
	         vector<int>arr(n);
	         vector<int>curr;
	         for(int i = 0;i<n;i++)
	         cin>>arr[i];
	         sort(arr.begin(),arr.end());
             cin>>b;

             vector< vector<int> >ans;util(0,arr,curr,ans,b);

             for(auto x : ans )
             {
             	  cout<<'(';
             	  for(int i = 0; i < x.size();i++)
             	  {
             	  	   cout<<x[i]<<((i == x.size()-1)?')':' ');
             	  }
             }
             cout<<endl; 

	   }
}

void util(int pos ,vector<int>& arr,vector<int>& curr, vector<vector<int> >& ans,int b){

             if(b == 0)
             {
             	  ans.push_back(curr);return;
             }
             
             for(int i = pos ; i < arr.size();i++)
             {
             	  if(i > pos && arr[i] == arr[i-1])
             	  	continue;
             	  if(arr[i] <= b)
             	  {

                         curr.push_back(arr[i]);

                         util(i,arr,curr,ans,b-arr[i]);

                         curr.pop_back();
             	  }
             } 
}
















