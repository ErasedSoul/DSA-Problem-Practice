
//  https://practice.geeksforgeeks.org/problems/m-coloring-problem/0


#include <bits/stdc++.h>
using namespace std;
bool issafe(vector<int>& graph, vector<int>& color , int v , int c);
bool util(vector< vector<int> >& graph, vector<int>& color , int v,int m,int n);
int main(void)
{
	 int t;cin>>t;

	 while(t--)
	 {
	 	 int n,m,e;
	 	 cin>>n>>m>>e;
         vector< vector<int> >graph(n+1);
         vector<int>color(n+1,0); 
         for(int i = 0;i<e;i++){

         	int x,y;cin>>x>>y;
         	graph[x].push_back(y);graph[y].push_back(x);
         } 

          if(util(graph,color , 1 , m , n))
          	cout<<1<<endl;
          else
          	cout<<0<<endl;

	 }
}

bool issafe(vector< vector<int>>& graph,vector<int>& color , int v , int c)
{
       for(auto x : graph[v])
       {
       	   if(color[x] == c)
       	   	 return false;
       }
       return true;
} 

bool util(vector<vector<int> >& graph, vector<int>& color , int v,int m,int n)
{

	   if(v == n+1)
	   {
	   	  return true;
	   }

        bool ok = false;
       for(int i = 1;i <= m;i++)
       {

           if(issafe(graph,color,v,i))
           	  {
           	  	  color[v] = i;
           	  	  ok = util(graph,color,v+1,m,n);

           	  	  if(ok)
           	  	  	return true;
           	  	  color[v] = 0;
           	  }
       }
       return ok;
}
