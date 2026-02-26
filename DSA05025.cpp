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
        int n; cin >> n;
        long long dp[n + 1] = {0};
        dp[0] = 1;
        for(int i = 1; i <= n; i++)
        {
            for(int j = max(0, i - 3); j < i; j++)
                dp[i] += dp[j];
        }
        cout << dp[n] << "\n";
    }



    return 0;
}