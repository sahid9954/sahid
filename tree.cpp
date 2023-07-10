#include<bits/stdc++.h>
using namespace std;
void addedge(int x,int y,vector<vector<int> >&adj){
    adj[x].push_back(y);
    adj[y].push_back(x);
}
void printparents(int node,vector<vector<int> >& adj, int parent){
    if(parent==0){
        cout<<node<<"->Root"<<endl;
    }
    else{
        cout<<node<<"->"<<parent<<endl;
    }
    for(auto curr : adj[node]){
        if(curr!=parent){
            printparents(curr,adj,node);
        }
    }
}
void printchildren(int root,vector<vector<int> >& adj){
    queue<int>q;
    q.push(root);
    int vis[adj.size()]={0};
    while(!q.empty()){
        int node=q.front();
        q.pop();
        vis[node]=1;
        cout<<node<<"->";
    }
}