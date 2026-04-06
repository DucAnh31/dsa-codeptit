#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);

int group[1005], n, m;
vector<int> ke[1005];
int ok = 1;

void nhap()
{
    cin >> n >> m;
    ok = 1;
    for(int i = 0; i < 1005; i++)
    {
        group[i] = 0;
        ke[i].clear();
    }
    for(int i = 0; i < m; i++)
    {
        int x, y; cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
}

void dfs(int u)
{
    for(int v : ke[u])
    {
        if(group[v] == 0)
        {
            group[v] = 3 - group[u];
            dfs(v);
        }
        else
        {
            if(group[v] == group[u])
                ok = 0;
        }
    }
}

int main()
{
    Duc_Anh

    int t; cin >> t;
    while(t--)
    {
        int ans = 1;
        nhap();
        for(int i = 1; i <= n; i++)
        {
            if(group[i] == 0)
            {
                group[i] = 1;
                dfs(i);
                if(ok == 0)
                {
                    ans = 0;
                    break;
                }
            }
        }
        if(ans)
            cout << "YES\n";
        else
            cout << "NO\n";
    }


    return 0;
}