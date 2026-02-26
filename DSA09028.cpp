#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);

int n, m, k, ok = 0;
vector<int> ke[1005];
int color[1005];

void nhap()
{
    ok = 0;
    cin >> n >> m >> k;
    for(int i = 0; i < 1005; i++)
    {
        ke[i].clear();
        color[i] = 0;
    }
    for(int i = 1; i <= m; i++)
    {
        int x, y; cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
}
bool check(int u, int c)
{
    for(int v : ke[u])
    {
        if(color[v] == c)
            return false;
    }
    return true;
}

void Try(int i)
{
    for(int j = 1; j <= k; j++)
    {
        if(check(i, j))
        {
            color[i] = j;
            if(i == n)
                ok = 1;
            else 
                Try(i + 1);
            color[i] = 0;
            
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
        Try(1);
        if(ok)
            cout << "YES\n";
        else
            cout << "NO\n";
        
    }


    return 0;
}