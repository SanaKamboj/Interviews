stack<int> mystack;
list<int> *adj;

void ts(int v, bool visited[]){
    visited[v] = true;
    list<int>::iterator i;
    for(i = adj[v].begin(); i != adj[v].end(); i++){
        if(visited[*i] == false){
            ts(*i, visited);
        }
    }
    mystack.push(v);
}
int * topoSort(vector<int> graph[], int N)
{
    int T, E, V, u, v;
    cin>>T;
    for(int t = 0; t < T; t++){
        cin>>E>>V;
        int *tsarray = new int[V];
        adj = new list<int>[V];
        for(int e = 0; e < E; e++){
            cin>>u>>v;
            adj[u].push_back(v);
        }
        bool *visited = new bool[V];
        for (int i = 0; i < V; i++)
            visited[i] = false;
            
        for (int i = 0; i < V; i++){
            if (visited[i] == false)
                ts(i, visited);
        }
        for(int i = 0; i < V; i++){
            tsarray[i] = mystack.top();
            mystack.pop();
        }
        return tsarray;
    }
}
