#include<bits/stdc++.h>
#define int long long 
#define mod 1000000007 
using namespace std ;

class Graph
{
	map<int,list<int>>l;
	
	public:
	//game me directed edge hi hone wali he !!!
	
	void addEdge(int x,int y)
	{
		l[x].push_back(y);
	}
	
	void bfs(int src,int dest)
	{
		map<int,int>dist;
		queue<int>q;
		
		map<int,int >parent;
		//first of all consider that all nodes are at infinite distance from source!!
		
		for(auto node_pair:l)
		{
			int node=node_pair.first;
			dist[node]=INT_MAX;
		}
		//make source distance to source equal to zero!!
		dist[src]=0;
		q.push(src);
		parent[src]=src;
		// this will initialiaze the minimum distance of every node from source in 
		//map	
		while(!q.empty())
		{
			int node=q.front();
			q.pop();
			for(auto nbr:l[node])
			{
				if(dist[nbr]==INT_MAX)
				{
					q.push(nbr);
					dist[nbr]=dist[node]+1;
					parent[nbr]=node;
				}
			}
		}
		
		//36 wale node ki end tak pahuchne ke lie minimum distance kya h source se
		//[0 se]!!
		
		int temp=dest;
		while(temp!=src)
		{
			cout<<temp<<"->>";
			temp=parent[temp];
		}
		
		cout<<src<<endl;
		
		cout<<dist[dest];
		
		
	}
	
	
};

int32_t main(){

	 ios::sync_with_stdio(false) ; cin.tie(NULL) ; 
	 
	  Graph g;
	  
	  int board[50]={0};
	  
	  board[2]=13;//matlab jese hi tum 2 par aaoge to turant 13 ka jump milega aur 15 pe jaoge
	  board[5]=2;
	  board[9]=18;
	  board[18]=11;
	  board[17]=-13;
	  board[20]=-14;
	  board[24]=-8;
	  board[25]=10;
	  board[32]=-2;
	  board[34]=-22;
	  
	   
	  //tum initially 0 position par khade ho !!!
	  
	  //loop hoga waha se start jaha tum khade ho or jo tumhari destination he waha tak !!!
	  
	 for(int i=0;i<=36;i++)
	 {
	 	for(int dice=1;dice<=6;dice++)
	 	{
	 		int j=i+dice;
	 		j=j+board[j];
	 		if(j<=36)
	 		g.addEdge(i,j);
	 	}
	 }
	 
	 	 //edge 0---1,0---15,0---3,0----4,0---7,0----6
	  	 
	  	 
	  	 //just for inserting the 36th node into the graph!!
	 
	 g.addEdge(36,36);
	 g.bfs(0,36);
	 



}
