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
void dfs(int u)
{
    cout << u << " ";
    visited[u] = 1;
    for(int v : ke[u])
    {
        if(visited[v] == 0)
            dfs(v);
    }
}

int main()
{
    Duc_Anh

    int t; cin >> t;
    while(t--)
    {
        nhap();
        dfs(k);
        cout << "\n";
    }


    return 0;
}