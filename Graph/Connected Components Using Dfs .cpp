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
	
	void dfs()
	{
		map<int,bool>visited;
		int c=1;
		for(auto node_pair:l)
		{
			int node=node_pair.first;
			
			if(!visited[node])
			{
				cout<<"component : "<<c<<"->>";
				dfs_helper(node,visited);
				c++;
				cout<<endl;
				
			}
			
			
		}
	}
};

int32_t main(){

	 ios::sync_with_stdio(false) ; cin.tie(NULL) ; 
	 
	 Graph g;
	 g.addEdge(0,1);
	 g.addEdge(1,2);
	 g.addEdge(2,3);
	 g.addEdge(3,0);
	 g.addEdge(0,4);
	 g.addEdge(5,6);
	 g.addEdge(6,7);
	 g.addEdge(8,8);
	 g.dfs();
	 



}
