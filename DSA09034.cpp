#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);

int n, m; 
vector<string> v;

int dx[8] = {-1,-1,-1, 0, 0,+1,+1,+1};
int dy[8] = {-1, 0,+1,-1,+1,-1, 0,+1};
int mp[105][105];
void dfs(int x, int y)
{
    mp[x][y] = 1;
    for(int i = 0; i < 8; i++)
    {
        int xnew = x + dx[i];
        int ynew = y + dy[i];
        if(xnew >= 0 && xnew < n && ynew >= 0 && ynew < m && mp[xnew][ynew] == 0 && v[xnew][ynew] == 'W')
        {
            dfs(xnew, ynew);
        }
    }

}

int main()
{
    Duc_Anh
    cin >> n >> m; 
    for(int i = 0; i < n; i++)
    {
        string s; cin >> s;
        v.push_back(s);
    }
    int cnt = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(v[i][j] == 'W' && mp[i][j] == 0)
            {
                cnt++;
                dfs(i, j);
            }
        }
    }
    cout << cnt << "\n";

    return 0;
}