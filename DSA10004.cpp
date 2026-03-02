#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);

int n, m, degree[1005];
set<int> ke[1005];

void nhap()
{
    for(int i = 1; i < 1005; i++)
    {
        degree[i] = 0;
        ke[i].clear();
    }
    cin >> n >> m;
    for(int i = 1; i <= m; i++)
    {
        int x, y; cin >> x >> y;
        ke[x].insert(y);
        ke[y].insert(x);
        degree[x]++; degree[y]++;
    }
}

int check()
{
    int odd = 0;
    for(int i = 1; i <= n; i++)
    {
        if(degree[i] % 2 != 0)
            odd++;
    }
    if(odd == 2)
        return 1;
    else if(odd == 0)
        return 2;
    return 0;

}

int main()
{
    Duc_Anh

    int t; cin >> t;
    while(t--)
    {
        nhap();
        cout << check() << "\n";
    }


    return 0;
}