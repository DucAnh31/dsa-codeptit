#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);

int a[505][505];
int n, m;
int visited[505][505];

int dx[8] = {-1,-1,-1, 0, 0,+1,+1,+1};
int dy[8] = {-1, 0,+1,-1,+1,-1, 0,+1};



void bfs(int x, int y)
{
    visited[x][y] = 1;
    queue<pair<int,int>> q;
    q.push({x, y});
    while(!q.empty())
    {
        pair<int,int> tmp = q.front(); q.pop();
        for(int i = 0; i < 8; i++)
        {
            int xnew = tmp.first + dx[i];
            int ynew = tmp.second + dy[i];
            if(xnew >= 1 && xnew <= n && ynew >= 1 && ynew <= m && visited[xnew][ynew] == 0 && a[xnew][ynew] == 1)
            {
                q.push({xnew, ynew});
                visited[xnew][ynew] = 1;
            }
        }
    }
}

int main()
{
    Duc_Anh

    int t; cin >> t;
    while(t--)
    {
        cin >> n >> m;
        for(int i = 1; i <= n; i++)
            for(int j = 1; j <= m; j++)
            {
                cin >> a[i][j];
                visited[i][j] = 0;
            }
        int tplt = 0;
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= m; j++)
            {
                if(visited[i][j] == 0 && a[i][j] == 1)
                {
                    tplt++;
                    bfs(i, j);
                }
            }
        }
        cout << tplt << "\n";
        
        

    }


    return 0;
}