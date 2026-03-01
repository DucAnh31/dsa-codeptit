#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);

int n, m, visited[100005], degree[100005];
vector<int> ke[100005];

void nhap()
{
    for(int i = 0; i < 100005; i++)
    {
        visited[i] = 0;
        ke[i].clear();
        degree[i] = 0;
    }
    cin >> n >> m;
    for(int i = 1; i <= m; i++)
    {
        int x, y; cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
        degree[x]++;
        degree[y]++;
    }
}

pair<long long,int> count(int i)
{
    long long cnt_degree = 0;
    int cnt_vertice = 1;
    queue<int> q;
    visited[i] = 1;
    q.push(i);
    cnt_degree += degree[i];
    while(!q.empty())
    {
        int tmp = q.front(); q.pop();
        for(int v : ke[tmp])
        {
            if(visited[v] == 0)
            {
                cnt_vertice++;
                cnt_degree += degree[v];
                q.push(v);
                visited[v] = 1;
            }
        }
    }
    return {cnt_degree / 2, cnt_vertice};
}

int main()
{
    Duc_Anh

    int t; cin >> t;
    while(t--)
    {
        nhap();
        int ok = 1;
        for(int i = 1; i <= n; i++)
        {
            if(visited[i] == 0)
            {
                pair<long long, int> cnt = count(i);
                
                if(cnt.first != (long long)cnt.second * (cnt.second - 1)/2)
                {
                    ok = 0;
                    break;
                }
            }
        }
        if(ok)
            cout << "YES\n";
        else
            cout << "NO\n";
    }


    return 0;
}