#include<bits/stdc++.h>
#define int long long 
#define mod 1000000007 
using namespace std ;


class Graph
{
	map<int,list<int>>l;
	public:
	void addEdge(int x,int y)
	{
		l[x].push_back(y);
		l[y].push_back(x);
	}
	
	void dfs_helper(int src,map<int,bool>&visited)
	{
		cout<<src<<" ";
		visited[src]=true;
		for(auto nbr:l[src])
		{
			if(!visited[nbr])
			dfs_helper(nbr,visited);
		}
	}
	void dfs(int src)
	{
		map<int,bool>visited;
		dfs_helper(src,visited);
	}
};

int32_t main(){

	 ios::sync_with_stdio(false) ; cin.tie(NULL) ; 
	 
	 Graph g;
	 g.addEdge(0,1);
	 g.addEdge(0,2);
	 g.addEdge(1,3);
	 g.dfs(0);
	 
	 



}
