#include<bits/stdc++.h>
#define int long long 
#define mod 1000000007 
using namespace std ;

class Graph
{
	map<string,list<pair<string,int>>>m;
	
	public:
	
	void addEdge(string x,string y,bool bidir,int wt)
	{
		m[x].push_back(make_pair(y,wt));
		if(bidir)
		m[y].push_back(make_pair(x,wt));
		
	}
	
	void printAdjList()
	{
		for(auto it:m)
		{
			string city=it.first;
			list<pair<string,int>>nbr=it.second;
			cout<<"neighbours of city "<<city<<" are:"<<endl;
			for(auto nbrs:nbr)
			{
				string destination=nbrs.first;
				int distance=nbrs.second;
				cout<<destination<<"its distance is "<<distance;
				cout<<endl;
			}
			cout<<endl;
			
		}
		
	}
	
};

int32_t main(){

	 ios::sync_with_stdio(false) ; cin.tie(NULL) ; 
	 
	 Graph g;
	 g.addEdge("A","B",true,20);
	 g.addEdge("B","D",true,30);
	 g.addEdge("A","C",true,10);
	 g.addEdge("C","D",true,40);
	 g.addEdge("A","D",false,50);
	 g.printAdjList();




}
