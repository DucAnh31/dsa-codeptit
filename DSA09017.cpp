#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);

int n;
vector<int> ke[1005];
int parent[1005], visited[1005];

void nhap()
{
    for(int i = 0; i < 1005; i++)
    {
        parent[i] = 0;
        visited[i] = 0;
        ke[i].clear();
    }
    cin >> n;
    for(int i = 1; i <= n - 1;i++)
    {
        int x, y; cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }

}

bool dfs(int u)
{
    visited[u] = 1;
    for(int v : ke[u])
    {
        if(visited[v] == 0)
        {
            parent[v] = u;
            if(dfs(v))
                return true;
        }
        else if(v != parent[u])
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
        if(!dfs(1))
        {
            int ok = 1;
            for(int i = 1; i <= n - 1; i++)
            {
                if(visited[i] == 0)
                {
                    ok = 0;
                    break;
                }
            }
            if(ok)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        else
            cout << "NO\n";
    }


    return 0;
}