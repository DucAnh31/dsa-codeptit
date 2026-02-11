#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);


int main()
{
    Duc_Anh

    int n; cin >> n;
    int a[n];
    for(int &x : a)
        cin >> x;
    int dp[n];
    for(int &x : dp)
        x = 1;
    int ans = -1;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < i; j++)
        {
            if(a[i] > a[j])
            {
                dp[i] = max(dp[i], dp[j] + 1);
                ans = max(ans, dp[i]);
            }
        }
    }    
    cout << ans;
    



    return 0;
}