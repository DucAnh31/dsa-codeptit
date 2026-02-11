#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);

int n, m;
int visited[1005];
vector<int> ke[1005];

void nhap()
{
    for(int i = 1; i < 1005; i++)
    {
        ke[i].clear();
        visited[i] = 0;
    }
    cin >> n >> m;
    for(int i = 1; i <= m; i++)
    {
        int x, y; cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
}

bool chutrinh(int u, int par)
{
    visited[u] = 1;
    for(int v : ke[u])
    {
        if(visited[v] == 0)
        {
            if(chutrinh(v, u))
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
        bool flag = false;
        nhap();
        for(int i = 1; i <= n; i++)
        {
            if(visited[i] == 0)
            {
                if(chutrinh(i, -1))
                    flag = true;
            }
        }
        if(flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }


    return 0;
}