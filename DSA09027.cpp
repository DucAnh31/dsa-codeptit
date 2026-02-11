#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);

int par[1005];

vector<int> ke[1005];
int n, m;

void nhap()
{
    for(int i = 0; i < 1005; i++)
    {
        ke[i].clear();
        par[i] = 0;
    }
    cin >> n >> m;
    for(int i = 1; i <= m; i++)
    {
        int x, y; cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
}

void dfs(int u, int p)
{
    par[u] = p;
    for(int v : ke[u])
    {
        if(par[v] == 0)
            dfs(v, p);
    }
    
}

int main()
{
    Duc_Anh

    int t; cin >> t;
    while(t--)
    {
        nhap();
        int p = 0;
        for(int i = 1; i <= n; i++)
        {
            if(par[i] == 0)
            {
                p++;
                dfs(i, p);
            }

        }
        int q; cin >> q;
        while(q--)
        {
            int x, y; cin >> x >> y;
            
            if(par[x] == par[y])
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}