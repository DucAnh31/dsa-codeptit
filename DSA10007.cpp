#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);


int n, m, u, visited[1005];
vector<int> ke[1005];
vector<pair<int,int>> edges;


void nhap()
{
    cin >> n >> m >> u;
    for(int i = 0; i < 1005; i++)
    {
        ke[i].clear();
        visited[i] = 0;
    }
    edges.clear();
    for(int i = 1; i <= m; i++)
    {
        int x, y; cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
    
}

void bfs(int u)
{
    queue<int> q;
    visited[u] = 1;
    q.push(u);
    while(!q.empty())
    {
        int tmp = q.front(); q.pop();
        for(int v : ke[tmp])
        {
            if(visited[v] == 0)
            {
                visited[v] = 1;
                q.push(v);
                edges.push_back({tmp, v});
            }
        }
    }
}

int main()
{
    Duc_Anh

    int t; cin >> t;
    while(t--)
    {
        nhap();
        bfs(u);
        if(edges.size() < n - 1)
            cout << -1 << "\n";
        else
        {
            for(pair<int,int> p : edges)
                cout << p.first << " " << p.second << "\n";
        }
    }
    


    return 0;
}