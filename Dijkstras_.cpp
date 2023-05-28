#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void dijikstra(vector<pair<int,int>> adj[], vector<int> &dist){
    // Create a priority queue
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

    //Push starting vertex in queue
    pq.push({0,0});  // In queue first we push weight and then the vertex

    while(!pq.empty()){
        int d=pq.top().first;
        int vertex=pq.top().second;
        pq.pop();

        //Now we will check for its adjacent nodes by adjacency list
        for(auto it: adj[vertex]){
            int edge_wt=it.second;

        //Now we will see if the distance calculated now is less that the previous distance. If it is then only we will push it in queue
        int now_dist=edge_wt+d;
        if(now_dist < dist[it.first]){
            dist[it.first]=now_dist;
            pq.push({now_dist,it.first});
        }
        }
        
    }
}

int main(){
    // Step1: Form the graph
    int vertices;
    cout<<"Enter the number of vertices : ";
    cin>>vertices;

    //So according to vertices form adjacency list
    vector<pair<int,int>> adj[vertices];  //this will store adjacent vertex and the weigh
    
    //Form a distance vector to store the shortest distance
    vector<int> dist(vertices,INT_MAX);  //inititlize all to infinity

    //Now take input of graph and store in the list
    for(int i=0;i<vertices;i++){
        cout<<"Enter the number of vertices from "<<i<<" : ";
        int n;
        cin>>n;
        while(n--){
            int edge,wt;
            cout<<"Enter the adjacent vertex with weigh : ";
            cin>>edge>>wt;
            adj[i].push_back({edge,wt});
        }
    }

    //Call the dijkstra's algorithm. We will pass the grapg and the dist vector to this function
    dijikstra(adj,dist);

    cout<<"The shortest distance from vertex 0 is :"<<endl;
   
    for(int i=1;i<vertices;i++){
        cout<<"distance of 0-->"<<i<<" : "<<dist[i]<<"  "<<endl;
    }
    cout<<endl;
    return 0;
}