#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);


int main()
{
    Duc_Anh

    int c, n; cin >> c >> n;
    int w[n];
    for(int &x : w)
        cin >> x;
    int dp[c + 1] = {0};
    dp[0] = 1;
    for(int i = 0; i < n; i++)
    {
        for(int j = c; j >= w[i]; j--)
        {
            if(dp[j - w[i]])
                dp[j] = 1;
        }
    }
    for(int i = c; i >= 0; i--)
    {
        if(dp[i])
        {
            cout << i;
            return 0;
        }
    }
    

    return 0;
}