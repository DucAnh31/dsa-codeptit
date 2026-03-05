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
        int a[n + 1];
        for(int i = 1; i <= n; i++)
            cin >> a[i];
        long long dp[n + 1] = {0};
        dp[1] = a[1];
        dp[0] = 0;
        for(int i = 2; i <= n; i++)
            dp[i] = max(dp[i - 1], dp[i - 2] + a[i]);
        cout << dp[n] << "\n";
    }


    return 0;
}
