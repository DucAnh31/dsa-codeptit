#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

int dx[4] = {-1, 0, 0, +1};
int dy[4] = {0, -1, +1, 0};

void bfs(int a, int b, int c, int d, int n, vector<string> v)
{
    a++;
    b++;
    c++;
    d++;
    int D[n + 1][n + 1];

    for (int i = 0; i <= n; i++)
        for (int j = 0; j <= n; j++)
            D[i][j] = 0;

    queue<pair<int, int>> q;
    q.push({a, b});
    D[a][b] = 1;
    while (1)
    {
        pair<int, int> tmp = q.front();
        q.pop();
        int x = tmp.first, y = tmp.second;
        if (x == c && y == d)
            break;

        for (int i = 0; i < 4; i++)
        {
            int xnew = x + dx[i];
            int ynew = y + dy[i];
            while(xnew >= 1 && xnew <= n && ynew >= 1 && ynew <= n && v[xnew][ynew] == '.')
            {
                if (D[xnew][ynew] == 0)
                {
                    q.push({xnew, ynew});
                    D[xnew][ynew] = D[x][y] + 1;
                }
                xnew = xnew + dx[i];
                ynew = ynew + dy[i];
            }
        }
    }
    cout << D[c][d] - 1 << "\n";
}

int main()
{
    Duc_Anh

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> v;
        v.push_back({});
        for (int i = 1; i <= n; i++)
        {
            string tmp;
            cin >> tmp;
            tmp = " " + tmp;
            v.push_back(tmp);
        }
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        bfs(a, b, c, d, n, v);
    }

    return 0;
}