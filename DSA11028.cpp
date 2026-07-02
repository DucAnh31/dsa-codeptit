#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);

vector<int> ke[100005];
int visited[100005];
int n;

void nhap()
{
    for(int i = 0; i < 100005; i++)
    {
        ke[i].clear();
        visited[i] = 0;
    }
    cin >> n;
    for(int i = 1; i <= n - 1; i++)
    {
        int x, y; cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
}

int getheight(int u)
{
    visited[u] = 1;
    int h = 0;
    for(int v : ke[u])
    {
        if(visited[v] == 0)
        { 
            h = max(h, getheight(v) + 1);
        }
    }
    if(h == 0)
        return 1;
    else
        return h;
}

int main()
{
    Duc_Anh

    int t; cin >> t;
    while(t--)
    {
        nhap();
        cout << getheight(1) - 1 << "\n";
    }



    return 0;
}