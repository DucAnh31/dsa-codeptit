#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);

int n, m;
int visited[1005];
vector<int> ke[1005], ans, chutrinh;

void nhap()
{
    ans.clear();
    chutrinh.clear();
    for(int i = 0; i < 1005; i++)
    {
        visited[i] = 0;
        ke[i].clear();
    }    
    cin >> n >> m;
    for(int i = 1; i <= m; i++)
    {
        int x, y; cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
    for(int i = 0; i < 1005; i++)
        sort(ke[i].begin(), ke[i].end());
}

void dfs(int u, int par)
{
    ans.push_back(u);
    visited[u] = 1;
    for(int v : ke[u])
    {
        if(v == par)
            continue;
        if(visited[v] == 0)
        {
            dfs(v, u);
        }
        else
        {
            if((v == 1) && chutrinh.size() == 0)
            {
                chutrinh = ans;
                chutrinh.push_back(v);
            }
        }
    }
    ans.pop_back();
}

int main()
{
    Duc_Anh

    int t; cin >> t;
    while(t--)
    {
        nhap();
        dfs(1, -1);
        if(chutrinh.size())
            for(int x : chutrinh)
                cout << x << " "; 
        else
            cout << "NO";
        cout << "\n";
    }

    return 0;
}