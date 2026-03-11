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
        int ans = 0;
        int n, m; cin >> n >> m;
        int dp[n + 1][m + 1];
        for(int i = 0; i <= n; i++)
            for(int j = 0; j <= m; j++)
                dp[i][j] = 0;
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= m; j++)
            {
                int x; cin >> x;
                if(x == 1)
                {
                    dp[i][j] = min({dp[i - 1][j], dp[i - 1][j - 1], dp[i][j - 1]}) + 1;
                    ans = max(ans, dp[i][j]);
                }
            }
        }
        cout << ans << "\n";
    }



    return 0;
}