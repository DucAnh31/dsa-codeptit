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
        int n, k; cin >> n >> k;
        int a[n + 1];
        for(int i = 1; i <= n; i++)
            cin >> a[i];
        long long dp[n + 1][k];
        for(int i = 0; i <= n; i++)
        {
            for(int j = 0; j < k; j++)
                dp[i][j] = -1e9;
        }
        dp[0][0] = 0;
        for(int i = 1; i <= n; i++)
        {
            for(int j = 0; j < k; j++)
            {
                dp[i][j] = dp[i - 1][j];
                int r = a[i] % k;
                int d = (j - r + k) % k;
                if(dp[i - 1][d] != -1e9)
                    dp[i][j] = max(dp[i][j], dp[i - 1][d] + 1);
            }
        }
        cout << dp[n][0] << "\n";
        for(int i = 0; i <= n; i++)
        {
            for(int j = 0; j < k; j++)
                cout << dp[i][j] << " ";
            cout << "\n";
        }
    }

    return 0;
}