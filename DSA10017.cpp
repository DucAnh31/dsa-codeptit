#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);

int n, m;
vector<pair<pair<int,int>, int>> v;
int d[1005];

void nhap()
{
    v.clear();
    for(int i = 0; i < 1005; i++)
    {
        d[i] = 2e9;
    }
    cin >> n >> m;
    for(int i = 1; i <= m; i++)
    {
        int x, y, w; cin >> x >> y >> w;
        v.push_back({{x, y}, w});
    }
}

bool check(int i)
{
    d[i] = 0;
    for(int i = 1; i <= n - 1; i++)
    {
        for(pair<pair<int,int>, int> canh : v)
        {
            int u = canh.first.first;
            int v = canh.first.second;
            int w = canh.second;
            if(d[u] < 2e9)
                d[v] = min(d[v], d[u] + w);
        }
    }
    int ok = 0;
    for(pair<pair<int,int>, int> canh : v)
    {
        int u = canh.first.first;
        int v = canh.first.second;
        int w = canh.second;
        if(d[u] < 2e9 && d[v] > d[u] + w)
        {
            ok = 1;
            break;
        }
    }
    return ok;
}

bool chutrinham()
{
    int ok = 0;
    for(int i = 1; i <= n; i++)
    {
        if(d[i] == 2e9)
        {
            if(check(i))
                return true;
        }
    }
    return false;
}


int main()
{
    Duc_Anh

    int t; cin >> t;
    while(t--)
    {
        nhap();
        if(chutrinham())
            cout << "1\n";
        else
            cout << "0\n";
    }


    return 0;
}