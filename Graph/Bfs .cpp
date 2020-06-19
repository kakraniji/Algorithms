#include<bits/stdc++.h>
#define int long long 
#define mod 1000000007 
using namespace std ;

class Graph
{
	map<int,list<int>> l;
	
	public:
	
	void addEdge(int x,int y)
	{
		l[x].push_back(y);
		l[y].push_back(x);
	}
	
	void bfs(int src)
	{
		queue<int>q;
		map<int,bool>visited;
		q.push(src);
		visited[src]=true;
		while(!q.empty())
		{
			 int node=q.front();
			 cout<<node<<" ";
			  q.pop();
			  for(int nbr:l[node])
			  {
			  	if(!visited[nbr])
			  	{
			  		q.push(nbr);
			  		//mark that neighbour as visited!!
			  		visited[nbr]=true;
			  	}
			  	
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
	 g.addEdge(3,4);
	 g.addEdge(4,5);
	 g.bfs(0);
	}
