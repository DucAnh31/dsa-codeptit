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
        string s; cin >> s;
        int n = s.size();
        s = " " + s;
        int ans = -1;
        int dp[n + 1][n + 1];
        for(int len = 1; len <= n; len++)
        {
            for(int i = 1; i <= n - len + 1; i++)
            {
                int j = i + len - 1;
                dp[i][j] = 0;
                if(len == 1)
                    dp[i][j] = 1;
                else if(len == 2)
                {
                    if(s[i] == s[j])
                        dp[i][j] = 1;
                }
                else
                {
                    if(s[i] == s[j] && dp[i + 1][j - 1] == 1)
                        dp[i][j] = 1;
                }
                if(dp[i][j])
                    ans = len;
            }
        }
        cout << ans << "\n";
    }

    return 0;
}