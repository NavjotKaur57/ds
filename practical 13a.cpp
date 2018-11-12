#include<iostream>
#include<list>
using namespace std;

class graph{
	int v;
	list<int>*adj;
	
	public:
		graph(int v){
			this->v=v;
			adj=new list<int>[v];
		}
		void addEdge(int m,int w){
			adj[m].push_back(w);
		}
		void bfs(int s){
		bool *visited = new bool[v]; 
    for(int i = 0; i < v; i++) 
        visited[i] = false; 
    list<int> queue; 
    visited[s] = true; 
    queue.push_back(s); 
    list<int>::iterator i; 
  
    while(!queue.empty()) 
    { 
        s = queue.front(); 
        cout << s << " "; 
        queue.pop_front(); 
        for (i = adj[s].begin(); i != adj[s].end(); ++i) 
        { 
            if (!visited[*i]) 
            { 
                visited[*i] = true; 
                queue.push_back(*i); 
            } 
        } 
    }
		}
};


int  main(){
	int n,m;
	cout<<"enter vertices\n";
	cin>>n;
	cout<<"enter total edges\n";
	cin>>m;
	graph g(n);
	int x,y;
	for(int i=0;i<m;i++){
		cin>>x>>y;
		g.addEdge(x,y);
	}
	int no;
	cout<<"enter number from where to start traversal";
	cin>>no;
	g.bfs(no);
	return 0;
}
