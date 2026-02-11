#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);

int n, m;
int color[1005];
vector<int> ke[1005];

void nhap()
{
    for(int i = 1; i < 1005; i++)
    {
        ke[i].clear();
        color[i] = 0;
    }
    cin >> n >> m;
    for(int i = 1; i <= m; i++)
    {
        int x, y; cin >> x >> y;
        ke[x].push_back(y);
    }
}

bool chutrinh(int u)
{
    color[u] = 1;
    for(int v : ke[u])
    {
        if(color[v] == 0)
        {
            if(chutrinh(v))
                return true;
        }
        else if(color[v] == 1)
            return true;
    }
    color[u] = 2;
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
            if(color[i] == 0)
            {
                if(chutrinh(i))
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