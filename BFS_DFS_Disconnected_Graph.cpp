#include<bits/stdc++.h>//example n=7 e=5 , 0 2 0 3 2 3 1 4 5 6
using namespace std;
void printDFS(int **edges,int n, int sv,bool *visited){
    cout<<sv<<" ";
    visited[sv]=true;
    for(int i=0;i<n;i++){
        if(i==sv) continue;
        if(edges[sv][i]==1){
            if(visited[i]==1) continue;
            printDFS(edges,n,i,visited);
        }


    }


}
void printBFS(int **edges,int n,int sv,bool *visited){

    queue<int>pendingvertex;
    //cout<<sv<<" ";
    pendingvertex.push(sv);
    visited[sv]=true;
    while(!pendingvertex.empty()){
        int currentvertex=pendingvertex.front();
        pendingvertex.pop();
        cout<<currentvertex<<" ";

        for(int i=0;i<n;i++){
            if(i==currentvertex) continue;//self node should not be checked
            if(edges[currentvertex][i]==1&&!visited[i]){
                visited[i]=true;
                pendingvertex.push(i);
            }
        }
    }
   // delete []visited;
}
void DFS(int **edges,int n){
    bool* visited=new bool[n];
    for(int i=0;i<n;i++){
        visited[i]=false;
    }
    for(int i=0;i<n;i++){
        if(!visited[i]){
            printDFS(edges,n,i,visited);
            cout<<endl;
        }

    }
    delete []visited;

}
void BFS(int **edges,int n){
    bool* visited=new bool[n];
    for(int i=0;i<n;i++){
        visited[i]=false;
    }
    for(int i=0;i<n;i++){
        if(!visited[i]){
            printBFS(edges,n,i,visited);
            cout<<endl;
        }

    }
delete []visited;
}
int main()
 {
    int n,e;//number of vertex, number of edges
    cin>>n>>e;
    int **edges=new int*[n];
    for(int i=0;i<n;i++){
        edges[i]=new int[n];
        for(int j=0;j<n;j++){
            edges[i][j]=0;
        }

    }
    for(int i=0;i<e;i++){
        int f,s;
        cin>>f>>s;
        edges[f][s]=1;
        edges[s][f]=1;
    }
    cout<<"DFS: "<<endl;
    DFS(edges,n);
    cout<<"BFS: "<<endl;
    BFS(edges,n);
	return 0;
}

