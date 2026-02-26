#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

int main()
{
    Duc_Anh

    int n, t;
    cin >> n >> t;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int dp[n + 1] = {0};
    for (int i = 1; i <= n; i++)
    {
        dp[i] = max(dp[i - 1], dp[i - 1] + a[i]);
    }
    while (t--)
    {
        int l, r; cin >> l >> r;
        cout << dp[r] - dp[l - 1] << "\n";
    }

    return 0;
}