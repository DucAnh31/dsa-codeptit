#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);

int n, m, s, t;
vector<int> ke[1005];
int visited[1005];
vector<int> road;
vector<int> ans;

void nhap()
{
    ans.clear();
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
        ke[y].push_back(x);
    }
}
void dfs(int u)
{
    road.push_back(u);
    visited[u] = 1;
    if(u == t)
    {
        ans = road;
        return;
    }
    
    for(int v : ke[u])
    {
        if(visited[v] == 0)
            dfs(v);
    }
    road.pop_back();
    
}

int main()
{
    Duc_Anh

    int T; cin >> T;
    while(T--)
    {
        nhap();
        dfs(s);
        if(ans.size() != 0)
        {
            for(int x : ans)
                cout << x << " ";
        }
        else
            cout << -1;
        cout << "\n";
    }


    return 0;
}