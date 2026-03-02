#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);

int n, m, degree_in[1005], degree_out[1005];
set<int> ke[1005];

void nhap()
{
    for(int i = 1; i < 1005; i++)
    {
        degree_in[i] = 0;
        degree_out[i] = 0;
        ke[i].clear();
    }
    cin >> n >> m;
    for(int i = 1; i <= m; i++)
    {
        int x, y; cin >> x >> y;
        ke[x].insert(y);
        degree_out[x]++; degree_in[y]++;
    }
}

int check()
{
    int ok = 1;
    for(int i = 1; i <= n; i++)
    {
        if(degree_in[i] != degree_out[i])
        {
            ok = 0;
            break;
        }
    }
    if(ok)
        return 1;
    else
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