#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);

int n, m;
int dx[4] = {-1, 0, 0,+1};
int dy[4] = { 0,-1,+1, 0};
int a[505][505];
void bfs()
{
    int d[505][505];
    for(int i = 0; i < 505; i++)
        for(int j = 0; j < 505; j++)
            d[i][j] = 1e9;
    d[0][0] = a[0][0];
    priority_queue<pair<int, pair<int,int>>, vector<pair<int, pair<int,int>>>, greater<pair<int, pair<int,int>>>> q;
    q.push({d[0][0],{0, 0}});

    while(!q.empty())
    {
        pair<int, pair<int,int>> tmp = q.top(); q.pop();
        int dis = tmp.first;
        int x = tmp.second.first;
        int y = tmp.second.second;
        if(dis > d[x][y])
            continue;
        else
        {
            for(int i = 0; i < 4; i++)
            {
                int xnew = x + dx[i];
                int ynew = y + dy[i];
                if(xnew >= 0 && xnew < n && ynew >= 0 && ynew < m)
                {
                    if(dis + a[xnew][ynew] < d[xnew][ynew])
                    {
                        d[xnew][ynew] = dis + a[xnew][ynew];
                        q.push({d[xnew][ynew], {xnew, ynew}});   
                    }
                }
            }
        }
    }
    cout << d[n - 1][m - 1] << "\n";

}

int main()
{
    Duc_Anh

    int t; cin >> t;
    while(t--)
    {
        cin >> n >> m;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
                cin >> a[i][j];
        }
        bfs();
    }

    return 0;
}