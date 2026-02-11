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
        string s1, s2; cin >> s1 >> s2;
        s1 = " " + s1;
        s2 = " " + s2;
        int dp[s1.size()][s2.size()];
        for(int i = 0; i < s1.size(); i++)
        {
            for(int j = 0; j < s2.size(); j++)
            {
                if(i == 0 || j == 0)
                    dp[i][j] = 0;
                else
                {
                    if(s1[i] == s2[j])
                        dp[i][j] = dp[i - 1][j - 1] + 1;
                    else
                        dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
                }
            }
        }   
        cout << dp[s1.size() - 1][s2.size() - 1] << "\n";
    }
    return 0;
}