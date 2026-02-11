#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);

int low[1005], dis[1005], visited[1005], dinh[1005];
int n, m, timer, scc;
vector<int> ke[1005];

void nhap()
{
    cin >> n >> m;
    for(int i = 0; i < 1005; i++)
    {
        low[i] = 0;
        dis[i] = 0;
        visited[i] = 0;
        ke[i].clear();
        dinh[i] = 0;
    }
    timer = 0;
    for(int i = 1; i <= m; i++)
    {
        int x, y; cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
}
void dfs(int u, int par)
{
    timer++;
    low[u] = dis[u] = timer;
    visited[u] = 1;
    int child = 0;
    for(int v : ke[u])
    {
        if(v == par)
            continue; 
        if(visited[v] == 0)
        {
            child++;
            if(par == -1 && child >= 2)
                dinh[u] = 1; 
            dfs(v, u);
            low[u] = min(low[u], low[v]);
            if(par != -1 && low[v] >= dis[u])
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
                dfs(i, -1);
        }
        for(int i = 1; i <= n; i++)
            if(dinh[i])
                cout << i << " ";
        cout << "\n";
    }

    return 0;
}