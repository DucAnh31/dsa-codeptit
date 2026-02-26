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
        long long a[n], b[n];
        for(long long &x : a)
            cin >> x;
        for(long long &x : b)
            cin >> x;
        sort(a, a + n);
        sort(b, b + n, greater<int>());
        long long ans = 0;
        for(int i = 0; i < n; i++)
            ans += a[i] * b[i];
        cout << ans << "\n";
    }


    return 0;
}