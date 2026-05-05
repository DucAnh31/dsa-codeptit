#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);

int dx[4] = {-1, 0, 0,+1};
int dy[4] = { 0,-1,+1, 0};
int mp[1005][1005], n, m;
vector<string> a;

void dequy(int x, int y)
{
    mp[x][y] = 1;
    for(int i = 0; i < 4; i++)
    {
        int xnew = x + dx[i];
        int ynew = y + dy[i];
        if(xnew >= 0 && xnew < n && ynew >= 0 && ynew < m && mp[xnew][ynew] == 0 && a[xnew][ynew] == '#')
        {
            dequy(xnew, ynew);
        }
    }
}

int main()
{
    Duc_Anh
    int cnt = 0;
    cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        string x; cin >> x;
        a.push_back(x);
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(a[i][j] == '#' && mp[i][j] == 0)
            {
                cnt++;
                dequy(i, j);
            }
        }
    }
    cout << cnt;


    return 0;
}