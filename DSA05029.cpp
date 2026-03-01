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
        int dp[n + 1] = {0};
        dp[0] = 1;
        if(s[1] != '0')
            dp[1] = 1;
        else
            dp[1] = 0;
        for(int i = 2; i <= n; i++)
        {
            if(s[i] != '0')
                dp[i] = dp[i - 1];
            int tmp = (s[i - 1] - '0') * 10 + (s[i] - '0');
            if(tmp >= 10 && tmp <= 26)
                dp[i] += dp[i - 2];
        }
        cout << dp[n] << "\n";
    }


    return 0;
}