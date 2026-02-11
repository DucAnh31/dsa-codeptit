#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);

vector<int> ke[1005];
int n, m, timer;
int dis[1005], low[1005], visited[1005];
int dinh[1005];

void nhap()
{
    for(auto & v : ke)
        v.clear();
    timer = 0;
    for(int i = 0; i < 1005; i++)
    {
        dis[i] = 0;
        low[i] = 0;
        visited[i] = 0;
        dinh[i] = 0;
    }
    cin >> n >> m;
    for(int i = 1; i <= m; i++)
    {
        int x, y; cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
}

void tarjan(int u, int par)
{
    int child = 0;
    visited[u] = 1;
    timer++;
    dis[u] = low[u] = timer;
    for(int v : ke[u])
    {
        if(v == par)
            continue;
        if(visited[v] == 0)
        {
            child++;
            if(par == 0 && child > 1)
                dinh[u] = 1;      
            tarjan(v, u);
            low[u] = min(low[v], low[u]);
            if(par != 0 && low[v] >= dis[u])
                dinh[u] = 1;
        }
        else
            low[u] = min(low[u], dis[v]);
    }
    
}

int main()
{
    Duc_Anh
    int t; cin >> t;
    while(t--)
    {
        nhap();
        for(int i = 1; i <= n; i++)
        {
            if(visited[i] == 0)
                tarjan(i, 0);
        }
        for(int i = 1; i <= n; i++)
            if(dinh[i] == 1)
                cout << i << " ";
        cout << "\n";
    }


    return 0;
}