#include<bits/stdc++.h>
using namespace std;
void prims()
{
    int n;
    cout<<"Enter the number of vertices ";
    cin>>n;
    int am[n][n];
    cout<<"Enter the adjacency matrix"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>am[i][j];
        }
    }



  int spanning[n][n];
  int cost[n][n];

  // initialization of cost and  spanning matrix;

   for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(am[i][j] == 0)
            cost[i][j] = 1e5;
            else
            cost[i][j] = am[i][j];

            spanning[i][j] = 0;
        }
    }

int visit[n],distance[n],from[n];
visit[0] = 1;
distance[0] = 0;
from[0] = 0;
for(int i=0;i<n;i++)
{
  distance[i] = cost[0][i];
  visit[i] = 0;
  from[i] = 0;
}

int min_cost = 0;
int no_edges = n-1;
while(no_edges--)
{
    int min_dis = 1e5,v,u;
    for(int i=1;i<n;i++)
    {
        if(visit[i] == 0 && distance[i] < min_dis)
        {
            v = i;
            min_dis = distance[i];
        }
    }
    u = from[v];
    spanning[u][v] = distance[v];
    spanning[v][u] = distance[v];

    visit[v]=1;

    for(int i=1;i<n;i++)
    {
        if(visit[i] == 0 && cost[v][i]<distance[i])
        {
            distance[i] = cost[v][i];
            from[i] = v;
        }
    }

    min_cost += min_dis;
}

cout<<"Spamnning matrix is "<<endl;
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        cout<<spanning[i][j]<<" ";
    }
    cout<<endl;
}
cout<<endl;
cout<<"TOTAL COST OF MINIMUM SPANNING TREE IS : "<<min_cost<<endl;

}



int main()
{
    prims();
    return 0;
}





