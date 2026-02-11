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
    for(int &x : visited)
        x = 0;
    for(auto &v : ke)
        v.clear();
    cin >> n >> m;
    for(int i = 1; i <= m; i++)
    {
        int x, y; cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
}

bool dfs_ktra_chu_trinh(int u, int par)
{
    visited[u] = 1;
    for(int v : ke[u])
    {
        if(visited[v] == 0)
        {
            if(dfs_ktra_chu_trinh(v, u))
                return true;
        }
        else if(v != par)
            return true;
    }
    return false;
}

int main()
{
    Duc_Anh
    int t; cin >> t;
    while(t--)
    {
        nhap();
        int dung = 0;
        for(int i = 1; i <= n; i++)
        {
            if(visited[i] == 0)
                if(dfs_ktra_chu_trinh(i, 0))
                    dung = 1;
        }
        if(dung)
            cout << "YES\n";
        else
            cout << "NO\n";
        
    }


    return 0;
}