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
        int n, x, y, z; cin >> n >> x >> y >> z;
        int dp[n + 1] = {0};
        dp[1] = x;
        for(int i = 2; i <= n; i++)
        {
            if(i % 2 == 0)
                dp[i] = min(dp[i - 1] + x, dp[i/2] + z);
            else
                dp[i] = min(dp[i - 1] + x, dp[i/2 + 1] + z + y);
        }
        cout << dp[n] << "\n";
    }



    return 0;
}