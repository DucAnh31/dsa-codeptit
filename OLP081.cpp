#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);

int n, m, parent[200005], sz[200005];
vector<pair<pair<int,int>,int>> edges;


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

bool cmp(pair<pair<int,int>,int> x, pair<pair<int,int>,int> y)
{
    return x.second < y.second;
}

void nhap()
{
    edges.clear();
    cin >> n >> m;
    ktao_DSU();
    for(int i = 1; i <= m; i++)
    {
        int x, y, w; cin >> x >> y >> w;
        edges.push_back({{x, y}, w});
    }
}

void kruskal()
{
    sort(edges.begin(), edges.end(), cmp);
    
    long long d = 0, cnt = 0;
    for(int i = 0; i < m; i++)
    {
        int x = edges[i].first.first;
        int y = edges[i].first.second;
        int w = edges[i].second;
        if(Union(x, y))
        {
            d += w;
            cnt++;
        }
    }
    
    if(cnt < n - 1)
        cout << -1 << "\n";
    else
        cout << d << "\n";
}

int main()
{
    Duc_Anh

    int t;
    cin >> t;
    while(t--)
    {
        nhap();
        kruskal();
    }

    return 0;
}