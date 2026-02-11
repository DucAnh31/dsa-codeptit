#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);

vector<int> ke[1005];
int n, m;
int visited[1005];
void nhap()
{
    for(int i = 1; i <= 1004; i++)
    {
        ke[i].clear();
        visited[i] = 0;
    }
    cin >> n >> m;
    for(int i = 1; i <= m; i++)
    {
        int x, y; cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
}

void dfs(int u)
{
    visited[u] = 1;
    for(int v : ke[u])
    {
        if(visited[v] == 0)
            dfs(v);
    }
}

int main()
{
    Duc_Anh
    int t; cin >> t;
    while(t--)
    {
        nhap();
        int tplt = 0;
        for(int i = 1; i <= n; i++)
        {
            if(visited[i] == 0)
            {
                tplt++;
                dfs(i);
            }
        }
        cout << tplt << "\n";
    }


    return 0;
}