#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);

int n, m, bdi, bdj, kti, ktj;
bool ok = false;
int dx[4] = {-1, 0, 0, +1};
int dy[4] = {0, -1, +1, 0};
int visited[505][505];
vector<string> a;
void Try(int x, int y, int hang, int cot, int dem)
{
    if (x == kti && y == ktj && dem <= 2)
    {
        ok = true;
        return;
    }
    for (int i = 0; i < 4; i++)
    {
        int xnew = x + dx[i];
        int ynew = y + dy[i];
        if (xnew >= 0 && xnew < n && ynew >= 0 && ynew < m && visited[xnew][ynew] == 0 && (a[xnew][ynew] == '.' || a[xnew][ynew] == 'T'))
        {
            if (xnew != hang && ynew != cot && hang != -1)
                dem++;
            if (dem <= 2)
            {
                visited[xnew][ynew] = 1;
                Try(xnew, ynew, x, y, dem);
                visited[xnew][ynew] = 0;
            }
            if (xnew != hang && ynew != cot && hang != -1)
                dem--;
        }
    }
}

int main()
{
    Duc_Anh int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        ok = false;
        a.clear();
        for (int i = 0; i < n; i++)
        {
            string tmp;
            cin >> tmp;
            a.push_back(tmp);
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                visited[i][j] = 0;
                if (a[i][j] == 'S')
                {
                    bdi = i;
                    bdj = j;
                }
                if (a[i][j] == 'T')
                {
                    kti = i;
                    ktj = j;
                }
            }
        }

        Try(bdi, bdj, -1, -1, 0);

        if (ok)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}