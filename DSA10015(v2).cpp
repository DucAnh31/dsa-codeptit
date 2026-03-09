#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);

int n, m;
vector<pair<int,int>> ke[105];
int used[105];
void nhap()
{
    for(int i = 0; i < 105; i++)
    {
        used[i] = 0;
        ke[i].clear();
    }
    cin >> n >> m;
    for(int i = 1; i <= m; i++)
    {
        int x, y, w; cin >> x >> y >> w;
        ke[x].push_back({y, w});
        ke[y].push_back({x, w});
    }
}

void Prim()
{
    priority_queue<pair<int,int>, vector<pair<int, int>>, greater<pair<int,int>>> pq;
    int d = 0, cnt = 0;
    used[1] = 1;
    for(pair<int,int> v : ke[1])
        pq.push({v.second, v.first});
    while(!pq.empty())
    {
        pair<int,int> tmp = pq.top(); pq.pop();
        int w = tmp.first;
        int v = tmp.second;
        if(used[v] == 0)
        {
            cnt++;
            d += w;
            used[v] = 1;
            for(pair<int,int> c : ke[v])
            {
                if(used[c.first] == 0)
                    pq.push({c.second, c.first});
            }
        }

    }
    if(cnt < n - 1)
        cout << -1 << "\n";
    else
        cout << d << "\n";
}

int main()
{
    Duc_Anh

    int t; cin >> t;
    while(t--)
    {
        nhap();
        Prim();
    }

    return 0;
}