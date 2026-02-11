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
        int ans = -1;
        int n; cin >> n;
        int a[n + 1];
        for(int i = 1; i <= n; i++)
            cin >> a[i];
        int dp[n + 1];
        for(int i = 1; i <= n; i++)
        {
            dp[i] = 1;
            for(int j = 1; j < i; j++)
            {
                if(a[j] <=  a[i])
                    dp[i] = max(dp[i], dp[j] + 1);
            }
            ans = max(ans, dp[i]);
        }
        cout << n - ans << "\n";
        
    }


    return 0;
}