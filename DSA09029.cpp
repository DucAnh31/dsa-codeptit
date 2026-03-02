#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);

int n, m, x[100], visited[100];
vector<int> ke[100];
bool ok = 0; 

void nhap()
{
    for(int i = 0; i < 100; i++)
    {
        visited[i] = 0;
        ke[i].clear();
    }
    cin >> n >> m;
    for(int i = 1; i <= m; i++)
    {
        int x, y; cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
}
void Try(int k)
{
    for(int v : ke[x[k - 1]])
    {
        if(visited[v] == 0)
        {
            visited[v] = 1;
            x[k] = v;
            if(k == n)
                ok = 1;
            else
                Try(k + 1);
            visited[v] = 0;
        }  
    }
}

int main()
{
    Duc_Anh

    int t; cin >> t;
    while(t--)
    {
        nhap();
        if(n == 1)
        {
            cout << "1\n";
            continue;
        }
        int kq = 0;
        for(int i = 1; i <= n; i++)
        {
            ok = 0;
            x[1] = i;
            visited[i] = 1;
            Try(2);
            if(ok)
                kq = 1;
            visited[i] = 0;
        }
        if(kq)
            cout << "1\n";
        else
            cout << "0\n";
    }


    return 0;
}