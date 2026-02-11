#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);

int n, m, s, t;
vector<int> ke[1005];
int visited[1005];
vector<int> road;

void nhap()
{
    cin >> n >> m >> s >> t;
    for(int i = 1; i <= 1004; i++)
    {
        ke[i].clear();
        visited[i] = 0;
    }
    road.clear();
    for(int i = 1; i <= m; i++)
    {
        int x, y; cin >> x >> y;
        ke[x].push_back(y);
    }
}
bool dfs(int u)
{
    if(u == t)
        return true;
    visited[u] = 1;
    for(int v : ke[u])
    {
        if(visited[v] == 0)
            if(dfs(v))
            {
                road.push_back(v);
                return true;
            }
    }
    return false;
}

int main()
{
    Duc_Anh

    int T; cin >> T;
    while(T--)
    {
        nhap();
        if(dfs(s))
        {
            road.push_back(s);
            for(int i = road.size() - 1; i >= 0; i--)
                cout << road[i] << " "; 
        }
        else
            cout << -1;
        cout << "\n";
    }


    return 0;
}