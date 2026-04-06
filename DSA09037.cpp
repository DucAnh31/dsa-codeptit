#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);

int n, m, k;
vector<int> ke[1005];
int visited[1005];
vector<int> pos;
map<int,int> mp;

void nhap()
{
    cin >> k >> n >> m;
    for(int i = 1; i <= k; i++)
    {
        int x; cin >> x;
        pos.push_back(x);
    }
    for(int i = 1; i <= m; i++)
    {
        int x, y; cin >> x >> y;
        ke[x].push_back(y);
    }
}

void dfs(int u)
{
    visited[u] = 1;
    mp[u]++;
    for(int v : ke[u])
    {
        if(visited[v] == 0)
            dfs(v);
    }
}

int main()
{
    Duc_Anh
    
    nhap();
    for(int i = 0; i < pos.size(); i++)
    {
        if(visited[pos[i]] == 0)
            dfs(pos[i]);
        for(int &x : visited)
            x = 0;
    }
    int cnt = 0;
    for(pair<int,int> p : mp)
    {
        if(p.second == k)
            cnt++;
    }
    cout << cnt;



    return 0;
}