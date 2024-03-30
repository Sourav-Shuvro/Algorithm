#include<bits/stdc++.h>
#define white 0
#define gray 1
#define black 2

using namespace std;

int main(void)
{
    int node,u,v;
    ifstream myTextFile;
    myTextFile.open("bfs_data.txt");

    myTextFile>>node;
    int bfs_matrix[node][node];

    memset (bfs_matrix,0,sizeof(bfs_matrix[0][0])*node*node);

while(true){
    myTextFile>>u>>v;
    if(u==-1&&v==-1) break;
    bfs_matrix[u][v]=1;
}
for(int i=0;i<node;i++)
    {
    for(int j=0;j<node;j++)
    {

        cout<<bfs_matrix[i][j];
        cout<<"  ";
    }
    cout<<endl;
}

    int distance[node+1];
    fill_n(distance,(node+1),-1);
    int color[node+1];
    fill_n(color,(node+1),white);
    queue<int>nodeQueue;
    int source;
    cin>>source;
    nodeQueue.push(source);
    distance[source]=0;
    color[source]=gray;

while(!nodeQueue.empty())
{
 //color[p]=black;
 int p=nodeQueue.front();
 nodeQueue.pop();

for(int i=0;i<node;i++){
    if(bfs_matrix[p][i]==1){
        if(color[i]==white){
            nodeQueue.push(i);
            color[i]=gray;
            distance[i]=distance[p]+1;
        }
    }
}
color[p]=black;
}

for(int i=0;i<node;i++){
    cout<<"distance from"<<source<<" To "<<i<<" :";
    cout<<distance[i]<<endl;
}

}
