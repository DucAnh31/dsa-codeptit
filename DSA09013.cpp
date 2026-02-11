#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);


int n, m;
vector<int> ke[1005];
vector<pair<int,int>> ds, ans;
int visited[1005];

void nhap()
{
    for(int i = 0; i < 1005; i++)
    {
        ke[i].clear();
        visited[i] = 0;
    }
    ds.clear();
    ans.clear();
    cin >> n >> m;
    for(int i = 1; i <= m; i++)
    {
        int x, y; cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
        ds.push_back({x, y});
    }
}

void dfs(int u, int a, int b)
{
    visited[u] = 1;
    for(int v : ke[u])
    {
        if((u == a && v == b) || (u == b && v == a))
            continue;
        if(visited[v] == 0)
            dfs(v, a, b);
    }
}

int count_tplt(int a, int b)
{
    for(int &x : visited)
        x = 0;
    int cnt = 0;
    for(int i = 1; i <= n; i++)
    {
        if(visited[i] == 0)
        {
            cnt++;
            dfs(i, a, b);
        }
    }
    return cnt;
}

void canh_cau()
{
    int scc = count_tplt(-1, -1);
    for(pair<int,int> canh : ds)
    {
        
        if(count_tplt(canh.first, canh.second) > scc)
            ans.push_back({canh.first, canh.second});
    }
    sort(ans.begin(), ans.end());
    for(pair<int,int> tmp : ans)
        cout << tmp.first << " " << tmp.second << " ";
    cout << "\n";
}

int main()
{
    Duc_Anh

    int t; cin >> t;
    while(t--)
    {
        nhap();
        canh_cau();
        cout << "\n";
    }


    return 0;
}   