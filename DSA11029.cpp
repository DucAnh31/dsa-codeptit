#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);

vector<int> ke[1005];
int visited[1005];
int par[1005];
vector<int> leaf;
vector<vector<int>> ans;
int n;

bool cmp(vector<int> x, vector<int> y)
{
    return x.back() < y.back();
}

void nhap()
{
    for(int i = 0; i < 1005; i++)
    {
        ke[i].clear();
        visited[i] = 0;
        par[i] = 0;
    }
    ans.clear();
    leaf.clear();
    cin >> n;
    
    for(int i = 1; i <= n - 1; i++)
    {
        int x, y; cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
}

void dfs(int u)
{
    visited[u] = 1;
    int flag = 0;
    for(int v : ke[u])
    {
        if(visited[v] == 0)
        {
            par[v] = u;
            dfs(v);
            flag = 1;
        }
    }
    if(flag == 0)
        leaf.push_back(u);
}

void save_road(int u)
{
    vector<int> road;
    while(u != 1)
    {
        road.push_back(u);
        u = par[u];
    }
    road.push_back(1);
    reverse(road.begin(), road.end());
    ans.push_back(road);
}



int main()
{
    Duc_Anh

    int t; cin >> t;
    while(t--)
    {
        nhap();
        dfs(1);
        for(int x : leaf)
        {
            save_road(x);
        }
        sort(ans.begin(), ans.end(), cmp);
        for(vector<int> v : ans)
        {
            for(int x : v)
                cout << x << " ";
            cout << "\n";
        }
    }



    return 0;
}