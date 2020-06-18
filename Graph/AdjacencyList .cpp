#include<bits/stdc++.h>
#define int long long 
#define mod 1000000007 
using namespace std ;

class Graph
{
	int v;
	list<int>*l;
	public:
	Graph(int v)
	{
		this->v=v;
		l=new list<int>[v];
	}
	
	void addEdge(int x,int y)
	{
		l[x].push_back(y);
		l[y].push_back(x);
	}
  
	void printAdjList()
	{
		for(int i=0;i<v;i++)
		{
			cout<<"the neighbours of city "<<i<<" are ";
			for(int x:l[i])
			cout<<x<<",";
			cout<<endl;
		}
	}
};

int32_t main(){

	 ios::sync_with_stdio(false) ; cin.tie(NULL) ; 
	 
	 Graph g(4);
	 g.addEdge(0,1);
	 g.addEdge(0,2);
	 g.addEdge(1,2);
	 g.addEdge(2,3);
	 g.printAdjList();
	 
   }
