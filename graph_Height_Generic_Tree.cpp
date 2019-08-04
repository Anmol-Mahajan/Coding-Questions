#include<bits/stdc++.h>
using namespace std;
int FillHeight(int p[],int node,int height[],int visited[]){
    if(p[node]==-1){
        visited[node]=1;
        return 0;
    }
    if(visited[node]){
        return height[node];
    }
    visited[node]=1;
    height[node]=1+FillHeight(p,p[node],height,visited);
    return height[node];

}
int findHeight(int parent[],int n){
        int maxheight=0;
        int visited[n];
        int height[n];
        memset(visited,0,sizeof(visited));
        memset(height,0,sizeof(height));
        for(int i=0;i<n;i++){
            if(!visited[i]){

                height[i]=FillHeight(parent,i,height,visited);
            }
            maxheight=max(maxheight,height[i]);
        }

        return maxheight;

}
int main(){
    int parent[] = { -1, 0, 0, 0, 3, 1, 1, 2 };
    int n = sizeof(parent) / sizeof(parent[0]);

    cout << "Height of N-ary Tree = "<< findHeight(parent, n);
    return 0;

}
