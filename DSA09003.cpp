#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);


int main()
{
    Duc_Anh
    int t; cin >> t;
    while(t--)
    {
        vector<int> ke[1004];
        int n, m; cin >> n >> m;
        for(int i = 1; i <= m; i++)
        {
            int x, y; cin >> x >> y;
            ke[x].push_back(y);
        }
        for(int i = 1; i <= n; i++)
        {
            cout << i << ": ";
            for(int x : ke[i])
                cout << x << " ";
            cout << "\n";
        }
    }



    return 0;
}