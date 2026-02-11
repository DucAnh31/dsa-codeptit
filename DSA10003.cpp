#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);

int n, parent[1005], sz[1005];
void ktao_DSU()
{
    for(int i = 1; i <= n; i++)
    {
        parent[i] = i;
        sz[i] = 1;
    }
}
int find(int u)
{
    if(u == parent[u])
        return u;
    else
    {
        parent[u] = find(parent[u]);
        return parent[u];
    }
}
bool Union(int u, int v)
{
    u = find(u);
    v = find(v);
    if(u == v)
        return false;
    else
    {
        if(sz[u] < sz[v])
        {
            parent[u] = v;
            sz[v] += sz[u];
        }
        else
        {
            parent[v] = u;
            sz[u] += sz[v];
        }
    }
    return true;
}



int main()
{
    Duc_Anh

    int t; cin >> t;
    while(t--)
    {
        int ok = 0;
        int m; cin >> n >> m;
        ktao_DSU();
        int tplt = n;
        for(int i = 1; i <= m; i++)
        {
            int x, y; cin >> x >> y;
            if(!Union(x, y))
                ok = 1;
        }
        if(ok)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}