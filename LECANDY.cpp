

int t = 0;
vector<int>visited,lT,id;

void dfs(int node , int parent , vector< vector<int> >& graph , vector<pair<int,int> >&res)
{
    if(visited[node] > 0)
      return;

    visited[node] = t;
    lT[node] = t++;

    for(auto e : graph[node])
    {
      if(e == parent)
        continue;

      dfs(e,node , graph,res);

      lT[node] = min(lT[node] , lT[e]);

      if(visited[node] < lT[e])
        res.push_back({node,e});
    }

}

vector<pair<int, int> > criticalConnections(int n,
                                            int numOfRoads,
                                            vector<pair<int, int> > roads)
{
        
        vector< vector<int> >graph(n+1,vector<int>());
        
        vector<pair<int,int> >res;
        
        visited.resize(n+1,0);

        lT.resize(n+1,0);       

        for(auto x : roads)
        {
           graph[x.first].push_back(x.second);
           graph[x.second].push_back(x.first);
        }
    
          dfs(1,-1,graph,res);
        
        
        //if(res.size() == 0) 
        //res.push_back({});
        return res;
      
}
23280727511325