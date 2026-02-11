#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);

int n, m, s;
vector<pair<int,int>> ke[1005];

void nhap()
{
    for(auto &v : ke)
        v.clear();
    cin >> n >> m >> s;
    for(int i = 1; i <= m; i++)
    {
        int x, y, z; cin >> x >> y >> z;
        ke[x].push_back({y, z});
        ke[y].push_back({x, z});
    }
}

void dijkstra(int s)
{
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> q;
    int d[1005];
    for(int &x : d)
        x = 1000000005;
    d[s] = 0;
    q.push({0, s});
    while(!q.empty())
    {
        pair<int,int> tmp = q.top(); q.pop();
        int dis = tmp.first, u = tmp.second;
        if(dis > d[u])
            continue;
        else
        {
            for(pair<int,int> v : ke[u])
            {
                if(d[u] + v.second < d[v.first])
                {
                    d[v.first] = d[u] + v.second;
                    q.push({d[v.first], v.first});
                }
            }
        }
    }
    for(int i = 1;i <= n; i++)
        cout << d[i] << " ";
    cout << "\n";

}

int main()
{
    Duc_Anh

    int t; cin >> t;
    while(t--)
    {
        nhap();
        dijkstra(s);
    }


    return 0;
}