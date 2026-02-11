#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);

int n, m, k;
vector<int> ke[1005];
int visited[1005];

void nhap()
{
    cin >> n >> m >> k;
    for(int i = 1; i <= 1004; i++)
    {
        ke[i].clear();
        visited[i] = 0;
    }
    for(int i = 1; i <= m; i++)
    {
        int x, y; cin >> x >> y;
        ke[x].push_back(y);
    }
}
void bfs(int u)
{
    visited[u] = 1;
    queue<int> q;
    q.push(u);
    while(!q.empty())
    {
        int tmp = q.front(); q.pop();
        cout << tmp << " ";
        for(int v : ke[tmp])
        {
            if(visited[v] == 0)
            {
                visited[v] = 1;
                q.push(v);
            }
        }
    }
}

int main()
{
    Duc_Anh

    int t; cin >> t;
    while(t--)
    {
        nhap();
        bfs(k);
        cout << "\n";
    }


    return 0;
}