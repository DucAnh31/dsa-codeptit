#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);

int n, m, s, t;
vector<int> ke[1005];
int visited[1005];
string ans;

void nhap()
{
    cin >> n >> m >> s >> t;
    for(int i = 1; i <= 1004; i++)
    {
        ke[i].clear();
        visited[i] = 0;
    }
    for(int i = 1; i <= m; i++)
    {
        int x, y; cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
}
void bfs(int u)
{
    visited[u] = 1;
    queue<pair<int, string>> q;
    q.push({u, to_string(u)});
    while(!q.empty())
    {
        
        pair<int, string> tmp = q.front(); q.pop();
        if(tmp.first == t)
        {
            ans = tmp.second;
            return;
        }
        for(int v : ke[tmp.first])
        {
            if(visited[v] == 0)
            {
                visited[v] = 1;
                q.push({v, tmp.second + " " +  to_string(v)});
            }
        }
    }
}

int main()
{
    Duc_Anh

    
    int T; cin >> T;
    while(T--)
    {
        nhap();
        bfs(s);
        if(visited[t] == 1)
            cout << ans << "\n";
        else
            cout << -1 << "\n";
    }


    return 0;
}