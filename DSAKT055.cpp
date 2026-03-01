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
        int n, v; cin >> n >> v;
        int A[n + 1], C[n + 1];
        for(int i = 1; i <= n; i++)
            cin >> A[i];
        for(int i = 1; i <= n; i++)
            cin >> C[i];
        int dp[n + 1][v + 1];
        for(int i = 0; i <= n; i++)
        {
            for(int j = 0; j <= v; j++)
            {
                if(i == 0 || j == 0)
                    dp[i][j] = 0;
                else
                {
                    dp[i][j] = dp[i - 1][j];
                    if(j >= A[i])
                    {
                        dp[i][j] = max(dp[i][j], dp[i - 1][j - A[i]] + C[i]);
                    }
                }
            }
        }
        cout << dp[n][v] << "\n";
    }


    return 0;
}