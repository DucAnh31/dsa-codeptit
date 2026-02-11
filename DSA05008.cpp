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
        int n, s; cin >> n >> s;
        int a[n]; for(int &x : a) cin >> x;
        int dp[s + 1] = {0};
        dp[0] = 1;
        for(int x : a)
        {
            if(x <= s)
            {
                for(int j = s; j >= x; j--)
                {
                    if(dp[j - x] == 1)
                        dp[j] = 1;
                }
            }
        }
        if(dp[s])
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}