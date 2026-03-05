#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
#define Duc_Anh ios_base::sync_with_stdio(false); cin.tie(NULL);
#define Dan_ba_la_nhung_niem_dau setup();
long long dp[10005];
void setup()
{
    dp[0] = 1;
    int i2 = 0, i3 = 0, i5 = 0;
    for (int i = 1; i <= 1000; i++)
    {
        int tmp2 = dp[i2] * 2;
        int tmp3 = dp[i3] * 3;
        int tmp5 = dp[i5] * 5;

        int min_tmp = min({tmp2, tmp3, tmp5});
        dp[i] = min_tmp;
        if (min_tmp == tmp2)
            i2++;
        if (min_tmp == tmp3)
            i3++;
        if (min_tmp == tmp5)
            i5++;
    }
}

int main()
{
    Duc_Anh
    Dan_ba_la_nhung_niem_dau

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        cout << dp[n - 1] << "\n";
    }


    return 0;
}
