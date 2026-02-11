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
        int a[n];
        for(int &x : a)
            cin >> x;
        sort(a, a + n);
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            ans += ((long long)a[i] * i) % M;
            ans %= M;
        }
        cout << ans << "\n";

    }

    return 0;
}