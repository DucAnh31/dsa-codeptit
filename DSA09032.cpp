#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);

int n, parent[100005], sz[100005], ans;
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
            ans = max(ans, sz[v]);
        }
        else
        {
            parent[v] = u;
            sz[u] += sz[v];
             ans = max(ans, sz[u]);
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
        int m;
        ans = -1;
        cin >> n >> m;
        ktao_DSU();
        for(int i = 1; i <= m; i++)
        {
            int x, y; cin >> x >> y;
            Union(x, y);    
        }
        cout << ans << "\n";
    }


    return 0;
}