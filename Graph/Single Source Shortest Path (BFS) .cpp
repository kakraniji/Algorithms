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
	
	void bfs(int src)
	{
		queue<int>q;
		map<int,int>dist;
		
		//All other nodes have INT_MAX distance !!
		for(auto node_pair :l)
		{
			int node=node_pair.first;
			dist[node]=INT_MAX;
			
		}
		//make source node distance equal to zero !!
		dist[src]=0;
		
		q.push(src);
		
		while(!q.empty())
		{
			int node=q.front();
			q.pop();
			for(auto nbr :l[node])
			{
				if(dist[nbr]==INT_MAX)
				{
					q.push(nbr);
					//child ki distance==parent ki distance+1!!
					dist[nbr]=dist[node]+1;
				}
			}
			
		}
		
		for(auto node_pair:l)
		{
			int node=node_pair.first;
			int d=dist[node];
			cout<<"Node "<<node<<" Distance from src :"<<d<<endl;
			
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
