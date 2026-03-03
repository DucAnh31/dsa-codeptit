#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);

int n, k, m, matrix[105][105], area[105][105], cnt;
int dx[4] = {-1, 0, 0,+1};
int dy[4] = { 0,-1,+1, 0};

set<pair<int,int>> chan[105][105];


void dfs(int x, int y, int id)
{
    if(matrix[x][y] != 0)
    {
        area[x][y] = id;
        cnt++;
    }
    else
        area[x][y] = -1;
    
    for(int i = 0; i < 4; i++)
    {
        int xnew = x + dx[i];
        int ynew = y + dy[i];
        if(xnew >= 1 && xnew <= n 
        && ynew >= 1 && ynew <= n 
        && area[xnew][ynew] == 0 
        && chan[x][y].count({xnew, ynew}) == 0)
        {
            dfs(xnew, ynew, id);
        }
    }
}

int main()
{
    Duc_Anh

    cin >> n >> k >> m;
    
    for(int i = 1; i <= m; i++)
    {
        int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
        chan[x1][y1].insert({x2, y2});
        chan[x2][y2].insert({x1, y1});
    }

    for(int i = 1; i <= k; i++)
    {
        int x, y; cin >> x >> y;
        matrix[x][y] = i;
    }


    int dem = 0;
    vector<int> ans;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(matrix[i][j] != 0 && area[i][j] == 0)
            {
                dem++;
                dfs(i, j, matrix[i][j]);
                ans.push_back(cnt);
                cnt = 0;
            }
        }
    }
    
    if(dem == 1)
        cout << 0;
    else
    {
        long long kq = 0;
        for(int i = 0; i < ans.size(); i++)
        {
            for(int j = i + 1; j < ans.size(); j++)
            {
                kq += ans[i] * ans[j];
            }
        }
        cout << kq;
    }

    return 0;
}